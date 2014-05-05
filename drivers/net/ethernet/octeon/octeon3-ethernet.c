/**********************************************************************
 * Author: Cavium, Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2014 Cavium, Inc.
 *
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License, Version 2, as
 * published by the Free Software Foundation.
 *
 * This file is distributed in the hope that it will be useful, but
 * AS-IS and WITHOUT ANY WARRANTY; without even the implied warranty
 * of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE, TITLE, or
 * NONINFRINGEMENT.  See the GNU General Public License for more
 * details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this file; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 * or visit http://www.gnu.org/licenses/.
 *
 * This file may also be available under a different license from Cavium.
 * Contact Cavium, Inc. for more information
 **********************************************************************/
#include <linux/module.h>
#include <linux/atomic.h>
#include <linux/kthread.h>
#include <linux/interrupt.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/platform_device.h>
#include <linux/ip.h>
#include <linux/ipv6.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-helper-cfg.h>
#include <asm/octeon/cvmx-helper-pko3.h>
#include <asm/octeon/cvmx-helper-pki.h>
#include <asm/octeon/cvmx-pow.h>
#include <asm/octeon/cvmx-pko3.h>
#include <asm/octeon/cvmx-fpa3.h>

#include <asm/octeon/cvmx-fpa-defs.h>
#include <asm/octeon/cvmx-sso-defs.h>

#include "octeon-bgx.h"

#define MAX_TX_QUEUE_DEPTH 512
#define SSO_INTSN_EXE 0x61
#define OCTEON3_ETH_MAX_NUMA_NODES 2

struct octeon3_ethernet {
	struct bgx_port_netdev_priv bgx_priv;
	struct net_device *netdev;
	struct napi_struct napi;
	int pki_laura;
	int pki_pkind;
	int pko_queue;
	int numa_node;
	int xiface;
	int port_index;
	int tx_complete_gaura;
	int rx_buf_count;
	int rx_grp;
	int rx_irq;
	int tx_complete_grp;
	atomic64_t tx_backlog;
	spinlock_t stat_lock;
	u64 last_packets;
	u64 last_octets;
	u64 last_dropped;
	atomic64_t rx_packets;
	atomic64_t rx_octets;
	atomic64_t rx_dropped;
	atomic64_t tx_packets;
	atomic64_t tx_octets;
};

static DEFINE_MUTEX(octeon3_eth_init_mutex);

struct octeon3_ethernet_node {
	bool init_done;
	int numa_node;
	int pki_packet_pool;
	int sso_pko_pool;
	int tx_complete_pool;
	int sso_aura;
	int pko_aura;
	int tx_complete_grp;
	int tx_irq;
	struct task_struct *tx_complete_task;
	struct kthread_worker tx_complete_worker;
	struct kthread_work tx_complete_work;
};

static int num_packet_buffers = 128;
module_param(num_packet_buffers, int, 0444);
MODULE_PARM_DESC(num_packet_buffers, "Number of packet buffers to allocate per port.");

static int packet_buffer_size = 2048;
module_param(packet_buffer_size, int, 0444);
MODULE_PARM_DESC(packet_buffer_size, "Size of each RX packet buffer.");


static struct octeon3_ethernet_node octeon3_eth_node[OCTEON3_ETH_MAX_NUMA_NODES];
static struct kmem_cache *octeon3_eth_sso_pko_cache;
static struct kmem_cache *octeon3_eth_tx_complete_cache;

static int octeon3_eth_fpa_pool_init(unsigned int node, unsigned int pool, int num_ptrs)
{
	void *pool_stack;
	u64 pool_stack_start, pool_stack_end;
	union cvmx_fpa_poolx_end_addr limit_addr;
	union cvmx_fpa_poolx_cfg cfg;
	int stack_size = (DIV_ROUND_UP(num_ptrs, 29) + 1) * 128;

	cvmx_write_csr_node(node, CVMX_FPA_POOLX_CFG(pool), 0);
	cvmx_write_csr_node(node, CVMX_FPA_POOLX_START_ADDR(pool), 128);
	limit_addr.u64 = 0;
	limit_addr.cn78xx.addr = ~0ll;
	cvmx_write_csr_node(node, CVMX_FPA_POOLX_END_ADDR(pool), limit_addr.u64);

	pool_stack = kmalloc_node(stack_size, GFP_KERNEL, node);
	if (!pool_stack)
		return -ENOMEM;

	pool_stack_start = virt_to_phys(pool_stack);
	pool_stack_end = round_down(pool_stack_start + stack_size, 128);
	pool_stack_start = round_up(pool_stack_start, 128);

	cvmx_write_csr_node(node, CVMX_FPA_POOLX_STACK_BASE(pool), pool_stack_start);
	cvmx_write_csr_node(node, CVMX_FPA_POOLX_STACK_ADDR(pool), pool_stack_start);
	cvmx_write_csr_node(node, CVMX_FPA_POOLX_STACK_END(pool), pool_stack_end);

	cfg.u64 = 0;
	cfg.s.l_type = 2; /* Load with DWB */
	cfg.s.ena = 1;
	cvmx_write_csr_node(node, CVMX_FPA_POOLX_CFG(pool), cfg.u64);
	return 0;
}

static int octeon3_eth_fpa_aura_init(unsigned int node, unsigned int pool, int aura, int limit)
{
	cvmx_write_csr_node(node, CVMX_FPA_AURAX_CFG(aura), 0);
	cvmx_write_csr_node(node, CVMX_FPA_AURAX_CNT_LIMIT(aura), limit * 2);
	cvmx_write_csr_node(node, CVMX_FPA_AURAX_CNT(aura), limit * 2);
	cvmx_write_csr_node(node, CVMX_FPA_AURAX_POOL(aura), pool);
	return 0;
}

static int octeon3_eth_sso_init(unsigned int node, int aura)
{
	union cvmx_sso_aw_cfg cfg;
	union cvmx_sso_xaq_aura xaq_aura;
	union cvmx_sso_err0 err0;
	int i;
	int rv = 0;

	cfg.u64 = 0;
	cfg.s.stt = 1;
	cfg.s.ldt = 1;
	cfg.s.ldwb = 1;
	cvmx_write_csr_node(node, CVMX_SSO_AW_CFG, cfg.u64);

	xaq_aura.u64 = 0;
	xaq_aura.s.laura = aura;
	xaq_aura.s.node = node;
	cvmx_write_csr_node(node, CVMX_SSO_XAQ_AURA, xaq_aura.u64);

	for (i = 0; i < 256; i++) {
		u64 phys;
		void *mem = cvmx_fpa3_alloc_aura(node, aura);
		if (!mem) {
			rv = -ENOMEM;
			goto err;
		}
		phys = virt_to_phys(mem);
		cvmx_write_csr_node(node, CVMX_SSO_XAQX_HEAD_PTR(i), phys);
		cvmx_write_csr_node(node, CVMX_SSO_XAQX_TAIL_PTR(i), phys);
	}
	err0.u64 = 0;
	err0.s.fpe = 1;
	cvmx_write_csr_node(node, CVMX_SSO_ERR0, err0.u64);

	cfg.s.rwen = 1;
	cvmx_write_csr_node(node, CVMX_SSO_AW_CFG, cfg.u64);

err:
	return rv;
}

static void octeon3_eth_sso_irq_set_armed(int node, int grp, bool v)
{
	union cvmx_sso_grpx_int_thr grp_int_thr;
	union cvmx_sso_grpx_int grp_int;

	/* Disarm/Rearm the irq. */
	grp_int_thr.u64 = 0;
	grp_int_thr.s.iaq_thr = v ? 1 : 0;
	cvmx_write_csr_node(node, CVMX_SSO_GRPX_INT_THR(grp), grp_int_thr.u64);

	grp_int.u64 = 0;
	grp_int.s.exe_int = 1;
	cvmx_write_csr_node(node, CVMX_SSO_GRPX_INT(grp), grp_int.u64);
}

static void octeon3_eth_tx_complete_worker(struct kthread_work *txcw)
{
	struct octeon3_ethernet_node *oen = container_of(txcw, struct octeon3_ethernet_node, tx_complete_work);

	preempt_disable();
	for (;;) {
		void **work;
		struct sk_buff *skb;
		struct octeon3_ethernet *priv;
		work = cvmx_sso_work_request_grp_sync_nocheck(oen->tx_complete_grp, CVMX_POW_NO_WAIT);
		if (work == NULL)
			break;
		skb = work[2];
		priv = work[0];
		dev_kfree_skb(skb);
		cvmx_fpa3_free_gaura(work, priv->tx_complete_gaura, 1);
	}
	preempt_enable();
	octeon3_eth_sso_irq_set_armed(oen->numa_node, oen->tx_complete_grp, true);
}

static irqreturn_t octeon3_eth_tx_handler(int irq, void *info)
{
	struct octeon3_ethernet_node *oen = info;
	/* Disarm the irq. */
	octeon3_eth_sso_irq_set_armed(oen->numa_node, oen->tx_complete_grp, false);

	queue_kthread_work(&oen->tx_complete_worker, &oen->tx_complete_work);

	return IRQ_HANDLED;
}

static int octeon3_eth_global_init(unsigned int node)
{
	int i;
	int rv = 0;
	struct irq_domain *d;
	unsigned int sso_intsn;
	struct octeon3_ethernet_node *nd;
	mutex_lock(&octeon3_eth_init_mutex);

	nd = octeon3_eth_node + node;

	if (nd->init_done)
		goto done;

	nd->numa_node = node;
	nd->sso_pko_pool = cvmx_fpa_alloc_pool(-1);
	if (nd->sso_pko_pool < 0) {
		rv = -ENODEV;
		goto done;
	}
	nd->pki_packet_pool = cvmx_fpa_alloc_pool(-1);
	if (nd->pki_packet_pool < 0) {
		rv = -ENODEV;
		goto done;
	}
	nd->tx_complete_pool = cvmx_fpa_alloc_pool(-1);
	if (nd->tx_complete_pool < 0) {
		rv = -ENODEV;
		goto done;
	}
	nd->sso_aura = cvmx_fpa3_allocate_aura(node);
	nd->pko_aura = cvmx_fpa3_allocate_aura(node);

	pr_err("octeon3_eth_global_init  Pool:%d, SSO:%d, PKO:%d\n",
	       nd->sso_pko_pool, nd->sso_aura, nd->pko_aura);

	octeon3_eth_fpa_pool_init(node, nd->sso_pko_pool, 40960);
	octeon3_eth_fpa_pool_init(node, nd->pki_packet_pool, 40960);
	octeon3_eth_fpa_pool_init(node, nd->tx_complete_pool, 40960);
	octeon3_eth_fpa_aura_init(node, nd->sso_pko_pool, nd->sso_aura, 20480);
	octeon3_eth_fpa_aura_init(node, nd->sso_pko_pool, nd->pko_aura, 20480);

	if (!octeon3_eth_tx_complete_cache) {
		octeon3_eth_tx_complete_cache = kmem_cache_create("tx_complete", 128, 128, 0, NULL);
		if (!octeon3_eth_tx_complete_cache) {
			rv = -ENOMEM;
			goto done;
		}
	}
	if (!octeon3_eth_sso_pko_cache) {
		octeon3_eth_sso_pko_cache = kmem_cache_create("sso_pko", 4096, 128, 0, NULL);
		if (!octeon3_eth_sso_pko_cache) {
			rv = -ENOMEM;
			goto done;
		}
	}
	for (i = 0; i < 1024; i++) {
		void *mem;
		mem = kmem_cache_alloc_node(octeon3_eth_sso_pko_cache, GFP_KERNEL, node);
		if (!mem) {
			rv = -ENOMEM;
			goto done;
		}
		cvmx_fpa3_free_aura(mem, node, nd->sso_aura, 0);
		mem = kmem_cache_alloc_node(octeon3_eth_sso_pko_cache, GFP_KERNEL, node);
		if (!mem) {
			rv = -ENOMEM;
			goto done;
		}
		cvmx_fpa3_free_aura(mem, node, nd->pko_aura, 0);
	}

	rv = octeon3_eth_sso_init(node, nd->sso_aura);
	if (rv)
		goto done;

	nd->tx_complete_grp = cvmx_sso_allocate_group(node);
	d = octeon_irq_get_block_domain(nd->numa_node, SSO_INTSN_EXE);
	sso_intsn = SSO_INTSN_EXE << 12 | nd->tx_complete_grp;
	nd->tx_irq = irq_create_mapping(d, sso_intsn);
	if (!nd->tx_irq) {
		rv = -ENODEV;
		goto done;
	}

	__cvmx_helper_init_port_config_data();
	rv = __cvmx_helper_pko3_init_global(node, cvmx_fpa3_arua_to_guara(node, nd->pko_aura));
	if (rv) {
		pr_err("cvmx_helper_pko3_init_global failed\n");
		rv = -ENODEV;
		goto done;
	}
	__cvmx_helper_pki_install_default_vlan(node);
	cvmx_pki_setup_clusters(node);
	cvmx_pki_enable_backpressure(node);
	cvmx_pki_parse_enable(node, 0);
	cvmx_pki_enable(node);
	/* Statistics per pkind */
	cvmx_write_csr_node(node, CVMX_PKI_STAT_CTL, 0);

	init_kthread_worker(&nd->tx_complete_worker);
	init_kthread_work(&nd->tx_complete_work, octeon3_eth_tx_complete_worker);
	nd->tx_complete_task = kthread_create_on_node(kthread_worker_fn, &nd->tx_complete_worker, node,
						      "oct3_eth_tx_done[%d]", node);
	if (IS_ERR(nd->tx_complete_task)) {
		rv = PTR_ERR(nd->tx_complete_task);
		goto done;
	} else
		wake_up_process(nd->tx_complete_task);


	rv = request_irq(nd->tx_irq, octeon3_eth_tx_handler, 0, "oct3_eth_tx_done", nd);
	if (rv)
		goto done;

	octeon3_eth_sso_irq_set_armed(node, nd->tx_complete_grp, true);

	nd->init_done = true;
done:
	mutex_unlock(&octeon3_eth_init_mutex);
	return rv;
}

static struct sk_buff *octeon3_eth_work_to_skb(void *w)
{
	struct sk_buff *skb;
	void **f = w;
	skb = f[-16];
	return skb;
}

/* Receive one packet.
 * returns the number of RX buffers consumed.
 */
static int octeon3_eth_rx_one(struct octeon3_ethernet *priv)
{
	unsigned int segments;
	int ret;
	unsigned int packet_len;
	cvmx_wqe_78xx_t *work;
	u8 *data;
	struct sk_buff *skb;
	union cvmx_buf_ptr_pki packet_ptr;

	work = cvmx_sso_work_request_grp_sync_nocheck(priv->rx_grp, CVMX_POW_NO_WAIT);
	prefetch(work);
	if (!work)
		return 0;
	skb = octeon3_eth_work_to_skb(work);
	segments = work->word0.bufs;
	ret = segments;

	if (unlikely(work->word2.err_level <= CVMX_PKI_ERRLEV_LA &&
		     work->word2.err_code != CVMX_PKI_OPCODE_RE_NONE))
		goto drop; /* FIXME:  Free chained buffers in this case */

	packet_len = work->word1.len;
	packet_ptr = work->packet_ptr;
	data = phys_to_virt(packet_ptr.addr);
	skb->data = data;
	skb->len = packet_len;
	if (segments == 1) {
		skb_set_tail_pointer(skb, skb->len);
	} else {
		bool first_frag = true;
		struct sk_buff *current_skb = skb;
		struct sk_buff *next_skb = NULL;
		unsigned int segment_size;

		skb_frag_list_init(skb);
		for (;;) {
			segment_size = packet_ptr.size;
			if (!first_frag) {
				current_skb->len = segment_size;
				skb->data_len += segment_size;
				skb->truesize += current_skb->truesize;
			}
			skb_set_tail_pointer(current_skb, segment_size);
			segments--;
			if (segments == 0)
				break;
			packet_ptr = *(union cvmx_buf_ptr_pki *)(data - 8);
			data = phys_to_virt(packet_ptr.addr);
			next_skb = octeon3_eth_work_to_skb((void *)round_down((unsigned long)data, 128ul));
			if (first_frag) {
				skb_frag_add_head(current_skb, next_skb);
			} else {
				current_skb->next = next_skb;
				next_skb->next = NULL;
			}
			current_skb = next_skb;
			first_frag = false;
			current_skb->data = phys_to_virt(packet_ptr.addr);
		}
	}
	if (likely(priv->netdev->flags & IFF_UP)) {
		skb_checksum_none_assert(skb);
		skb->protocol = eth_type_trans(skb, priv->netdev);
		skb->dev = priv->netdev;
		if (priv->netdev->features & NETIF_F_RXCSUM) {
			if ((work->word2.lc_hdr_type == CVMX_PKI_LTYPE_IPV4 ||
			     work->word2.lc_hdr_type == CVMX_PKI_LTYPE_IPV6) &&
			    (work->word2.lf_hdr_type == CVMX_PKI_LTYPE_TCP ||
			     work->word2.lf_hdr_type == CVMX_PKI_LTYPE_UDP ||
			     work->word2.lf_hdr_type == CVMX_PKI_LTYPE_SCTP))
				if (work->word2.err_code == 0)
					skb->ip_summed = CHECKSUM_UNNECESSARY;


		}
		netif_receive_skb(skb);
	} else {
	drop:
		/* Drop any packet received for a device that isn't up */
		atomic64_add(1, (atomic64_t *)&priv->netdev->stats.rx_dropped);
		dev_kfree_skb_any(skb);
	}
	return ret;
}

static void octeon3_eth_replentish_rx(struct octeon3_ethernet *priv, int count)
{
	struct sk_buff *skb;
	int i;

	for (i = 0; i < count; i++) {
		void **buf;
		skb = __alloc_skb(packet_buffer_size, GFP_ATOMIC, 0, priv->numa_node);
		if (!skb) {
			pr_err("WARNING: octeon3_eth_replentish_rx out of memory\n");
			break;
		}
		buf = (void **)PTR_ALIGN(skb->head, 128);
		buf[0] = skb;
		cvmx_fpa3_free_aura(buf, priv->numa_node, priv->pki_laura, 0);
	}
}

static int octeon3_eth_napi(struct napi_struct *napi, int budget)
{
	int rx_count = 0;
	int bufs_consumed = 0;
	struct octeon3_ethernet *priv = container_of(napi, struct octeon3_ethernet, napi);

	while (rx_count < budget) {
		int n = octeon3_eth_rx_one(priv);
		if (n == 0) {
			napi_complete(napi);
			octeon3_eth_sso_irq_set_armed(priv->numa_node, priv->rx_grp, true);
			break;
		}
		rx_count++;
		bufs_consumed += n;
	}

	if (bufs_consumed)
		octeon3_eth_replentish_rx(priv, bufs_consumed);

	return rx_count;
}

#define BROKEN_SIMULATOR_CSUM 1

static int octeon3_eth_ndo_init(struct net_device *netdev)
{
	struct octeon3_ethernet *priv = netdev_priv(netdev);
	struct octeon3_ethernet_node *nd = octeon3_eth_node + priv->numa_node;
	struct cvmx_pki_port_config pki_prt_cfg;
	struct cvmx_pki_prt_schd *prt_schd = NULL;
	int laura;
	int ipd_port, node_dq;
	struct cvmx_xport xdq;
	int r;
	int i;
	const u8 *mac;

	netif_carrier_off(netdev);

	netdev->features |=
		NETIF_F_SG |
		NETIF_F_FRAGLIST |
		NETIF_F_RXCSUM
#ifndef BROKEN_SIMULATOR_CSUM
		|
		NETIF_F_IP_CSUM |
		NETIF_F_IPV6_CSUM |
		NETIF_F_SCTP_CSUM
#endif
		;

	priv->rx_buf_count = num_packet_buffers;

	ipd_port = cvmx_helper_get_ipd_port(priv->xiface, priv->port_index);
	cvmx_helper_interface_enumerate(priv->xiface);
	cvmx_helper_interface_probe(priv->xiface);
	r =  __cvmx_pko3_config_gen_interface(priv->xiface, priv->port_index, 1, false);
	if (r)
		return -ENODEV;

	r = __cvmx_pko3_helper_dqs_activate(priv->xiface, priv->port_index);
	if (r < 0)
		return -ENODEV;

	r = cvmx_pko3_interface_options(priv->xiface, priv->port_index,
					__cvmx_helper_get_has_fcs(priv->xiface),
					__cvmx_helper_get_pko_padding(priv->xiface), 0);
	if (r)
		return -ENODEV;

	node_dq = cvmx_pko3_get_queue_base(ipd_port);
	xdq = cvmx_helper_ipd_port_to_xport(node_dq);

	priv->pko_queue = xdq.port;
	priv->pki_laura = cvmx_fpa3_allocate_aura(priv->numa_node);
	octeon3_eth_fpa_aura_init(priv->numa_node, nd->pki_packet_pool, priv->pki_laura, 1024);

	priv->rx_grp = cvmx_sso_allocate_group(priv->numa_node);
	priv->tx_complete_grp = nd->tx_complete_grp;
	priv->pki_pkind = cvmx_helper_get_pknd(priv->xiface, priv->port_index);
	dev_err(netdev->dev.parent, "rx sso grp:%d aura:%d pknd:%d\n",
		priv->rx_grp, priv->pki_laura, priv->pki_pkind);
	if (priv->rx_grp < 0) {
		dev_err(netdev->dev.parent, "Failed to allocated SSO group\n");
		return -ENODEV;
	}

	prt_schd = kzalloc(sizeof(*prt_schd), GFP_KERNEL);
	if (!prt_schd) {
		r = -ENOMEM;
		goto err;
	}
	prt_schd->style = -1; /* Allocate net style per port */
	prt_schd->qpg_base = -1;
	prt_schd->aura_per_prt = true;
	prt_schd->aura = priv->pki_laura;
	prt_schd->sso_grp_per_prt = true;
	prt_schd->sso_grp = priv->rx_grp;
	prt_schd->qpg_qos = CVMX_PKI_QPG_QOS_NONE;

	cvmx_helper_pki_init_port(ipd_port, prt_schd);
	cvmx_pki_get_port_config(ipd_port, &pki_prt_cfg);

	pki_prt_cfg.style_cfg.parm_cfg.ip6_udp_opt = false;
	pki_prt_cfg.style_cfg.parm_cfg.lenerr_en = true;
	pki_prt_cfg.style_cfg.parm_cfg.maxerr_en = true;
	pki_prt_cfg.style_cfg.parm_cfg.minerr_en = true;
	pki_prt_cfg.style_cfg.parm_cfg.ip6_udp_opt = false;
	pki_prt_cfg.style_cfg.parm_cfg.ip6_udp_opt = false;
	pki_prt_cfg.style_cfg.parm_cfg.wqe_skip = 1 * 128;
	pki_prt_cfg.style_cfg.parm_cfg.first_skip = 8 * 21;
	pki_prt_cfg.style_cfg.parm_cfg.later_skip = 8 * 16;
	pki_prt_cfg.style_cfg.parm_cfg.pkt_lend = false;
	pki_prt_cfg.style_cfg.parm_cfg.tag_type = CVMX_SSO_TAG_TYPE_UNTAGGED;
	pki_prt_cfg.style_cfg.parm_cfg.qpg_dis_grptag = true;
	pki_prt_cfg.style_cfg.parm_cfg.dis_wq_dat = false;
	pki_prt_cfg.style_cfg.parm_cfg.mbuff_size = packet_buffer_size - 128;

	cvmx_pki_config_port(ipd_port, &pki_prt_cfg);

	laura = cvmx_fpa3_allocate_aura(priv->numa_node);
	if (laura < 0) {
		r = -ENODEV;
		goto err;
	}
	priv->tx_complete_gaura = cvmx_fpa3_arua_to_guara(priv->numa_node, laura);
	octeon3_eth_fpa_aura_init(priv->numa_node, nd->tx_complete_pool, laura, 1024);
	for (i = 0; i < 1024; i++) {
		void *mem;
		mem = kmem_cache_alloc_node(octeon3_eth_tx_complete_cache, GFP_KERNEL, priv->numa_node);
		if (!mem) {
			r = -ENOMEM;
			goto err;
		}
		cvmx_fpa3_free_aura(mem, priv->numa_node, laura, 0);
	}

	cvmx_write_csr_node(priv->numa_node, CVMX_PKI_STATX_STAT0(priv->pki_pkind), 0);
	priv->last_packets = 0;

	cvmx_write_csr_node(priv->numa_node, CVMX_PKI_STATX_STAT1(priv->pki_pkind), 0);
	priv->last_octets = 0;

	cvmx_write_csr_node(priv->numa_node, CVMX_PKI_STATX_STAT3(priv->pki_pkind), 0);
	priv->last_dropped = 0;

	mac = bgx_port_get_mac(netdev);
	if (mac && is_valid_ether_addr(mac)) {
		memcpy(netdev->dev_addr, mac, ETH_ALEN);
		netdev->addr_assign_type &= ~NET_ADDR_RANDOM;
	} else {
		eth_hw_addr_random(netdev);
	}
	bgx_port_set_rx_filtering(netdev);

	netif_napi_add(netdev, &priv->napi, octeon3_eth_napi, 32);
	napi_enable(&priv->napi);

	netdev_info(netdev, "octeon3_eth_ndo_init\n");
	return 0;
err:
	kfree(prt_schd);
	return r;
}

static void octeon3_eth_ndo_uninit(struct net_device *netdev)
{
	return;
}

static irqreturn_t octeon3_eth_rx_handler(int irq, void *info)
{
	struct net_device *netdev = info;
	struct octeon3_ethernet *priv = netdev_priv(netdev);

	/* Disarm the irq. */
	octeon3_eth_sso_irq_set_armed(priv->numa_node, priv->rx_grp, false);

	napi_schedule(&priv->napi);
	return IRQ_HANDLED;
}

static int octeon3_eth_ndo_open(struct net_device *netdev)
{
	struct octeon3_ethernet *priv = netdev_priv(netdev);
	struct irq_domain *d = octeon_irq_get_block_domain(priv->numa_node, SSO_INTSN_EXE);
	unsigned int sso_intsn = SSO_INTSN_EXE << 12 | priv->rx_grp;
	int r;

	priv->rx_irq = irq_create_mapping(d, sso_intsn);
	if (!priv->rx_irq) {
		netdev_err(netdev, "ERROR: Couldn't map hwirq: %x\n", sso_intsn);
		return -EINVAL;
	}

	/* Arm the irq. */
	octeon3_eth_sso_irq_set_armed(priv->numa_node, priv->rx_grp, true);

	r = request_irq(priv->rx_irq, octeon3_eth_rx_handler, 0, netdev_name(netdev), netdev);
	if (r)
		goto err;

	octeon3_eth_replentish_rx(priv, priv->rx_buf_count);

	return bgx_port_enable(netdev);
err:
	/* Cleanup mapping ?? */
	return r;
}

static int octeon3_eth_ndo_start_xmit(struct sk_buff *skb, struct net_device *netdev)
{
	struct sk_buff *skb_tmp;
	struct octeon3_ethernet *priv = netdev_priv(netdev);
	unsigned int scr_off = CVMX_PKO_LMTLINE * CVMX_CACHE_LINE_SIZE;
	unsigned int ret_off = scr_off;
	union cvmx_pko_send_hdr send_hdr;
	union cvmx_pko_buf_ptr buf_ptr;
	union cvmx_pko_send_work send_work;
	union cvmx_pko_send_mem send_mem;
	union cvmx_pko_lmtdma_data lmtdma_data;
	union cvmx_pko_query_rtn query_rtn;
	u8 l4_hdr = 0;
	long backlog;
	int frag_count;
	int head_len, i;
	u64 dma_addr;
	void **work;

	frag_count = 0;
	if (skb_has_frag_list(skb))
		skb_walk_frags(skb, skb_tmp)
			frag_count++;
	/* We have space for 13 segment pointers, If there will be
	 * more than that, we must linearize.  The count is: 1 (base
	 * SKB) + frag_count + nr_frags.
	 */
	if (unlikely(skb_shinfo(skb)->nr_frags + frag_count > 12)) {
		if (unlikely(__skb_linearize(skb)))
			goto skip_xmit;
		frag_count = 0;
	}
	work = cvmx_fpa3_alloc_gaura(priv->tx_complete_gaura);
	if (!work)
		goto skip_xmit;
	work[0] = priv;
	work[1] = NULL;
	work[2] = skb;

	backlog = atomic64_inc_return(&priv->tx_backlog);
	if (backlog > MAX_TX_QUEUE_DEPTH)
		netif_stop_queue(netdev);

	/* Adjust the port statistics. */
	atomic64_inc(&priv->tx_packets);
	atomic64_add(skb->len, &priv->tx_octets);

	/* Make sure packet data writes are committed before
	 * submitting the command below
	 */
	wmb();
	send_hdr.u64 = 0;
#ifdef __LITTLE_ENDIAN
	send_hdr.s.le = 1;
#endif
// broken in sim	send_hdr.s.n2 = 1; /* Don't allocate to L2 */
	send_hdr.s.df = 1; /* Don't automatically free to FPA */
	send_hdr.s.total = skb->len;

#ifndef BROKEN_SIMULATOR_CSUM
	switch (skb->protocol) {
	case __constant_htons(ETH_P_IP):
		send_hdr.s.l3ptr = ETH_HLEN;
		send_hdr.s.ckl3 = 1;
		l4_hdr = ip_hdr(skb)->protocol;
		break;
	case __constant_htons(ETH_P_IPV6):
		l4_hdr = ipv6_hdr(skb)->nexthdr;
		break;
	default:
		break;
	}
#endif
	switch (l4_hdr) {
	case IPPROTO_TCP:
	case IPPROTO_SCTP:
	case IPPROTO_UDP:
		if (skb_transport_header_was_set(skb)) {
			int l4ptr = skb_transport_header(skb) - skb->data;
			send_hdr.s.l4ptr = l4ptr;
			send_hdr.s.ckl4 = 1;
		}
		break;
	default:
		break;
	}

	cvmx_scratch_write64(scr_off, send_hdr.u64);
	scr_off += sizeof(send_hdr);

	buf_ptr.u64 = 0;
	buf_ptr.s.subdc3 = CVMX_PKO_SENDSUBDC_GATHER;

	/* Add a Gather entry for each segment. */
	head_len = skb_headlen(skb);
	if (head_len > 0) {
		buf_ptr.s.size = head_len;
		buf_ptr.s.addr = virt_to_phys(skb->data);
		cvmx_scratch_write64(scr_off, buf_ptr.u64);
		scr_off += sizeof(buf_ptr);
	}
	for (i = 1; i <= skb_shinfo(skb)->nr_frags; i++) {
		struct skb_frag_struct *fs = skb_shinfo(skb)->frags + i - 1;
		buf_ptr.s.size = fs->size;
		buf_ptr.s.addr = virt_to_phys((u8 *)page_address(fs->page.p) + fs->page_offset);
		cvmx_scratch_write64(scr_off, buf_ptr.u64);
		scr_off += sizeof(buf_ptr);
	}
	skb_walk_frags(skb, skb_tmp) {
		buf_ptr.s.addr = virt_to_phys(skb_tmp->data);
		buf_ptr.s.size = skb_tmp->len;
		cvmx_scratch_write64(scr_off, buf_ptr.u64);
		scr_off += sizeof(buf_ptr);
	}

	/* Subtract 1 from the tx_backlog. */
	send_mem.u64 = 0;
	send_mem.s.subdc4 = CVMX_PKO_SENDSUBDC_MEM;
	send_mem.s.dsz = MEMDSZ_B64;
	send_mem.s.alg = MEMALG_SUB;
	send_mem.s.offset = 1;
	send_mem.s.addr = virt_to_phys(&priv->tx_backlog);
	cvmx_scratch_write64(scr_off, send_mem.u64);
	scr_off += sizeof(buf_ptr);

	/* Send work when finished with the packet. */
	send_work.u64 = 0;
	send_work.s.subdc4 = CVMX_PKO_SENDSUBDC_WORK;
	send_work.s.addr = virt_to_phys(work);
	send_work.s.tt = CVMX_POW_TAG_TYPE_NULL;
	send_work.s.grp = priv->tx_complete_grp;
	cvmx_scratch_write64(scr_off, send_work.u64);
	scr_off += sizeof(buf_ptr);

	lmtdma_data.u64 = 0;
	lmtdma_data.s.scraddr = ret_off >> 3;
	lmtdma_data.s.rtnlen = 1;
	lmtdma_data.s.did = 0x51;
	lmtdma_data.s.node = priv->numa_node;
	lmtdma_data.s.dq = priv->pko_queue;
	dma_addr = 0xffffffffffffa400ull | ((scr_off & 0x78) - 8);
	cvmx_write64_uint64(dma_addr, lmtdma_data.u64);

	CVMX_SYNCIOBDMA;

	query_rtn.u64 = cvmx_scratch_read64(ret_off);
	if (unlikely(query_rtn.s.dqstatus != PKO_DQSTATUS_PASS)) {
		netdev_err(netdev, "PKO enqueue failed %llx\n",
			   (unsigned long long)query_rtn.u64);
		dev_kfree_skb_any(skb);
		cvmx_fpa3_free_gaura(work, priv->tx_complete_gaura, 1);
	}

	return NETDEV_TX_OK;
skip_xmit:
	dev_kfree_skb_any(skb);
	return NETDEV_TX_OK;
}

static struct rtnl_link_stats64 *octeon3_eth_ndo_get_stats64(struct net_device *netdev,
							     struct rtnl_link_stats64 *s)
{
	struct octeon3_ethernet *priv = netdev_priv(netdev);
	u64 packets, octets, dropped;
	u64 delta_packets, delta_octets, delta_dropped;

	spin_lock(&priv->stat_lock);

	packets = cvmx_read_csr_node(priv->numa_node, CVMX_PKI_STATX_STAT0(priv->pki_pkind));
	octets = cvmx_read_csr_node(priv->numa_node, CVMX_PKI_STATX_STAT1(priv->pki_pkind));
	dropped = cvmx_read_csr_node(priv->numa_node, CVMX_PKI_STATX_STAT3(priv->pki_pkind));

	delta_packets = (packets - priv->last_packets) & ((1ull << 48) - 1);
	delta_octets = (octets - priv->last_octets) & ((1ull << 48) - 1);
	delta_dropped = (dropped - priv->last_dropped) & ((1ull << 48) - 1);

	priv->last_packets = packets;
	priv->last_octets = octets;
	priv->last_dropped = dropped;

	spin_unlock(&priv->stat_lock);

	atomic64_add(delta_packets, &priv->rx_packets);
	atomic64_add(delta_octets, &priv->rx_octets);
	atomic64_add(delta_dropped, &priv->rx_dropped);

	s->rx_packets = atomic64_read(&priv->rx_packets);
	s->rx_bytes = atomic64_read(&priv->rx_octets);
	s->rx_dropped = atomic64_read(&priv->rx_dropped);
	s->tx_packets = atomic64_read(&priv->tx_packets);
	s->tx_bytes = atomic64_read(&priv->tx_octets);
	return s;
}

static const struct net_device_ops octeon3_eth_netdev_ops = {
	.ndo_init		= octeon3_eth_ndo_init,
	.ndo_uninit		= octeon3_eth_ndo_uninit,
	.ndo_open		= octeon3_eth_ndo_open,
	.ndo_start_xmit		= octeon3_eth_ndo_start_xmit,
	.ndo_get_stats64	= octeon3_eth_ndo_get_stats64,
};

static int octeon3_eth_probe(struct platform_device *pdev)
{
	struct octeon3_ethernet *priv;
	struct net_device *netdev;
	int r;

	struct bgx_platform_data *pd = dev_get_platdata(&pdev->dev);

	r = octeon3_eth_global_init(pd->numa_node);
	if (r)
		return r;

	dev_err(&pdev->dev, "Probing %d-%d:%d\n", pd->numa_node, pd->interface, pd->port);
	netdev = alloc_etherdev(sizeof(struct octeon3_ethernet));
	if (!netdev) {
		dev_err(&pdev->dev, "Failed to allocated ethernet device\n");
		return -ENOMEM;
	}
	SET_NETDEV_DEV(netdev, &pdev->dev);
	dev_set_drvdata(&pdev->dev, netdev);

	bgx_port_set_netdev(pdev->dev.parent, netdev);
	priv = netdev_priv(netdev);
	priv->netdev = netdev;
	priv->numa_node = pd->numa_node;
	priv->xiface = cvmx_helper_node_interface_to_xiface(pd->numa_node, pd->interface);
	priv->port_index = pd->port;
	spin_lock_init(&priv->stat_lock);
	netdev->netdev_ops = &octeon3_eth_netdev_ops;

	if (register_netdev(netdev) < 0) {
		dev_err(&pdev->dev, "Failed to register ethernet device\n");
		free_netdev(netdev);
	}
	return 0;
}

static int octeon3_eth_remove(struct platform_device *pdev)
{
//	struct net_device *netdev = dev_get_drvdata(&pdev->dev);
//	struct octeon3_ethernet *priv = netdev_priv(netdev);
	return 0;
}

static void octeon3_eth_shutdown(struct platform_device *pdev)
{
	return;
}


static struct platform_driver octeon3_eth_driver = {
	.probe		= octeon3_eth_probe,
	.remove		= octeon3_eth_remove,
	.shutdown       = octeon3_eth_shutdown,
	.driver		= {
		.owner	= THIS_MODULE,
		.name	= "ethernet-mac-pki",
	},
};



static int __init octeon3_eth_init(void)
{
	if (!OCTEON_IS_MODEL(OCTEON_CN78XX))
		return 0;

	return platform_driver_register(&octeon3_eth_driver);
}
module_init(octeon3_eth_init);

static void __exit octeon3_eth_exit(void)
{
	if (!OCTEON_IS_MODEL(OCTEON_CN78XX))
		return;

	platform_driver_unregister(&octeon3_eth_driver);
}
module_exit(octeon3_eth_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cavium Networks <support@caviumnetworks.com>");
MODULE_DESCRIPTION("Cavium Networks PKI/PKO Ethernet driver.");
