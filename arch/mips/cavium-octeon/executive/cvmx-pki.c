/***********************license start***************
 * Copyright (c) 2003-2010  Cavium Inc. (support@cavium.com). All rights
 * reserved.
 *
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *   * Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *
 *   * Redistributions in binary form must reproduce the above
 *     copyright notice, this list of conditions and the following
 *     disclaimer in the documentation and/or other materials provided
 *     with the distribution.

 *   * Neither the name of Cavium Inc. nor the names of
 *     its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written
 *     permission.

 * This Software, including technical data, may be subject to U.S. export  control
 * laws, including the U.S. Export Administration Act and its  associated
 * regulations, and may be subject to export or import  regulations in other
 * countries.

 * TO THE MAXIMUM EXTENT PERMITTED BY LAW, THE SOFTWARE IS PROVIDED "AS IS"
 * AND WITH ALL FAULTS AND CAVIUM INC. MAKES NO PROMISES, REPRESENTATIONS OR
 * WARRANTIES, EITHER EXPRESS, IMPLIED, STATUTORY, OR OTHERWISE, WITH RESPECT TO
 * THE SOFTWARE, INCLUDING ITS CONDITION, ITS CONFORMITY TO ANY REPRESENTATION OR
 * DESCRIPTION, OR THE EXISTENCE OF ANY LATENT OR PATENT DEFECTS, AND CAVIUM
 * SPECIFICALLY DISCLAIMS ALL IMPLIED (IF ANY) WARRANTIES OF TITLE,
 * MERCHANTABILITY, NONINFRINGEMENT, FITNESS FOR A PARTICULAR PURPOSE, LACK OF
 * VIRUSES, ACCURACY OR COMPLETENESS, QUIET ENJOYMENT, QUIET POSSESSION OR
 * CORRESPONDENCE TO DESCRIPTION. THE ENTIRE  RISK ARISING OUT OF USE OR
 * PERFORMANCE OF THE SOFTWARE LIES WITH YOU.
 ***********************license end**************************************/

/**
 * @file
 *
 * PKI Support.
 */
#ifdef CVMX_BUILD_FOR_LINUX_KERNEL
#include <linux/module.h>
#include <asm/octeon/cvmx.h>
#include <asm/octeon/cvmx-pki-defs.h>
#include <asm/octeon/cvmx-pki.h>
#else
#include "cvmx.h"
#include "cvmx-version.h"
#include "cvmx-error.h"
#include "cvmx-pki-defs.h"
#include "cvmx-pki.h"
#include "cvmx-fpa.h"
#endif

#include "cvmx-pki-cluster.h"

CVMX_SHARED struct cvmx_pki_config pki_config[CVMX_MAX_NODES];

/**
 * This function enables pki
 * @param node	 	node to enable pki in.
 */
void cvmx_pki_enable(int node)
{

	cvmx_pki_sft_rst_t pki_sft_rst;
	cvmx_pki_buf_ctl_t pki_en;

	pki_sft_rst.u64 = cvmx_read_csr_node(node,CVMX_PKI_SFT_RST);

	while (pki_sft_rst.s.busy != 0)
		pki_sft_rst.u64 = cvmx_read_csr_node(node,CVMX_PKI_SFT_RST);

	pki_en.u64 = cvmx_read_csr_node(node, CVMX_PKI_BUF_CTL);
	if (pki_en.s.pki_en)
		cvmx_dprintf("Warning: Enabling PKI when PKI already enabled.\n");

	pki_en.s.pki_en = 1;

	cvmx_write_csr_node(node,CVMX_PKI_BUF_CTL, pki_en.u64);

}
EXPORT_SYMBOL(cvmx_pki_enable);

/**
 * This function disables pki
 * @param node	 	node to disable pki in.
 */
void cvmx_pki_disable(int node)
{
	cvmx_pki_buf_ctl_t pki_en;
	pki_en.u64 = cvmx_read_csr_node(node, CVMX_PKI_BUF_CTL);
	pki_en.s.pki_en = 0;
	cvmx_write_csr_node(node, CVMX_PKI_BUF_CTL, pki_en.u64);

}
EXPORT_SYMBOL(cvmx_pki_disable);

/**
 * This function sets the clusters in PKI
 * @param node	 	node to set clusters in.
 */
int cvmx_pki_setup_clusters(int node)
{

	int i;
	for(i=0; i< cvmx_pki_cluster_code_length; i++)
		cvmx_write_csr_node(node, CVMX_PKI_IMEMX(i),cvmx_pki_cluster_code_default[i]);

	return 0;
}

/**
 * @INTERNAL
 * This function is called by cvmx_helper_shutdown() to extract
 * all FPA buffers out of the PKI. After this function
 * completes, all FPA buffers that were prefetched by PKI
 * wil be in the apropriate FPA pool. This functions does not reset
 * PKI as FPA pool zero must be empty before the reset can
 * be performed. WARNING: It is very important that PKI be
 * reset soon after a call to this function.
 *IT IS STILL TBD IN 78XX_HRM., INPLEMENT ONCE DEFINED
 */
void __cvmx_pki_free_ptr(void)
{
	/*TBD, IMPLEMENT ONCE DEFINED IN HRM*/
}

/**
 * This function writes max and min frame lengths to hardware which can be used
 * to check the size of frame arrived.There are 2 possible combination which are
 * indicated by id field.
 * @param node	 	      node number.
 * @param id		      choose which frame len register to write to
 * @param maxframesize        Byte count for max-sized frame check.
 * @param minframesize        Byte count for min-sized frame check.
 *
 */
int cvmx_pki_write_frame_len(int node, int id, int maxframesize, int minframesize)
{
	cvmx_pki_frm_len_chkx_t frame_len_chk;

	if(maxframesize > CVMX_PKI_MAX_FRAME_SIZE ||
		  minframesize > CVMX_PKI_MAX_FRAME_SIZE){
		cvmx_dprintf("ERROR: invalid frame size maxframe =%d minframe=%d\n",
			     maxframesize, minframesize);
		return -1;
	}
	if(id >= CVMX_PKI_NUM_FRAME_SIZE_ID) {
		cvmx_dprintf("ERROR: invalid id %d in write frame len",id);
		return -1;	;
	}
	frame_len_chk.u64 = cvmx_read_csr_node(node, CVMX_PKI_FRM_LEN_CHKX(id));
	frame_len_chk.s.maxlen = maxframesize;
	frame_len_chk.s.minlen = minframesize;
	cvmx_write_csr_node(node, CVMX_PKI_FRM_LEN_CHKX(id),frame_len_chk.u64);

	return 0;
}


/**
 * This function writes per pkind parameters in hardware which defines how
  the incoming packet is processed.
 * @param node	 	      node number.
 * @param pkind               PKI supports a large number of incoming interfaces
 *                            and packets arriving on different interfaces or channels
 *                            may want to be processed differently. PKI uses the pkind to
 *                            determine how the incoming packet is processed.
 * @param cluster_group       Which cluster group to use. Application would choose the cluster
 *                            group depending on number of clusters it want to use for that pkind.
 * @param initial_parse_mode  Which initial parsing stage is expected.
 * @param initial_style       Which initial style to assign to this pkind. Style also go as one of
 *                            the inputs to match in the pcam table. If no match is found this initial
 *                            style will be the final style.
 */
int cvmx_pki_write_pkind(int node, int pkind, int cluster_group,
				     int initial_parse_mode, int initial_style )
{
	uint64_t cluster_mask;
	int cluster=0;
	cvmx_pki_pkindx_icgsel_t pkind_clsel;
	cvmx_pki_clx_pkindx_style_t pkind_cfg_style;
	cvmx_pki_icgx_cfg_t pki_cl_grp;


	if(pkind >= CVMX_PKI_NUM_PKIND || cluster_group >= CVMX_PKI_NUM_CLUSTER_GROUP
		  || initial_style >= CVMX_PKI_NUM_FINAL_STYLES) {
		cvmx_dprintf("ERROR: Configuring PKIND pkind = %d cluster_group = %d style = %d",
			     pkind, cluster_group, initial_style);
		return -1;
	}
	pkind_clsel.u64 = cvmx_read_csr_node(node,CVMX_PKI_PKINDX_ICGSEL(pkind));
	pkind_clsel.s.icg = cluster_group;
	cvmx_write_csr_node(node,CVMX_PKI_PKINDX_ICGSEL(pkind), pkind_clsel.u64);

	pki_cl_grp.u64 = cvmx_read_csr_node(node,CVMX_PKI_ICGX_CFG(cluster_group));
	cluster_mask = (uint64_t)pki_cl_grp.s.clusters;

	while( cluster < CVMX_PKI_NUM_CLUSTERS) {
		if(cluster_mask & (0x01L << cluster)) {
			pkind_cfg_style.u64 = cvmx_read_csr_node(node, CVMX_PKI_CLX_PKINDX_STYLE(pkind, cluster));
			pkind_cfg_style.s.pm = initial_parse_mode;
			pkind_cfg_style.s.style = initial_style;
			cvmx_write_csr_node(node, CVMX_PKI_CLX_PKINDX_STYLE(pkind, cluster), pkind_cfg_style.u64);
		}
		cluster++;
	}
	cvmx_pki_mark_style_in_use(node,initial_style);
	return 0;

}

/**
 * This function writes/configures parameters associated with style in hardware.
 * @param node	              node number.
 * @param style		      style to configure.
 * @param cluster_mask	      Mask of clusters to configure the style for.
 * @param style_cfg 	      parameters to configure for style passed in struct.
 */
void cvmx_pki_write_style(int node, uint64_t style, uint64_t cluster_mask,
			    struct cvmx_pki_style_config style_cfg)
{
	cvmx_pki_clx_stylex_cfg_t style_cfg_reg;
	cvmx_pki_clx_stylex_cfg2_t style_cfg2_reg;
	cvmx_pki_clx_stylex_alg_t style_alg_reg;
	cvmx_pki_stylex_buf_t     style_buf_reg;
	int cluster = 0;
	int num_entry;
	int index;

	//vinita to_do break it differnt functions
	while( cluster < CVMX_PKI_NUM_CLUSTERS) {
		if(cluster_mask & (0x01L << cluster)) {
			style_cfg_reg.u64 = cvmx_read_csr_node(node, CVMX_PKI_CLX_STYLEX_CFG(style, cluster));

			//style_cfg_reg.s.lenerr_en = style_cfg.en_l2_lenchk;
			//style_cfg_reg.s.lenerr_eqpad = style_cfg.l2_lenchk_mode;
			//style_cfg_reg.s.maxerr_en = style_cfg.en_maxframe_errchk;
			//style_cfg_reg.s.minerr_en = style_cfg.en_minframe_errchk;
			//style_cfg_reg.s.fcs_chk = style_cfg.en_FCS_chk;
			//style_cfg_reg.s.strip_FCS = style_cfg.strip_l2_FCS;
			//style_cfg_reg.s.minmax_sel = style_cfg.max_min_frame_sel;
			style_cfg_reg.s.qpg_base = style_cfg.qpg_cfg.base_offset;
			style_cfg_reg.s.qpg_dis_padd = style_cfg.qpg_calc_port_addr;
			style_cfg_reg.s.qpg_dis_aura = style_cfg.qpg_calc_aura;
			style_cfg_reg.s.qpg_dis_grp = style_cfg.qpg_calc_group;
			cvmx_write_csr_node(node, CVMX_PKI_CLX_STYLEX_CFG(style, cluster),style_cfg_reg.u64);

			style_alg_reg.u64 = cvmx_read_csr_node(node, CVMX_PKI_CLX_STYLEX_ALG(style, cluster));

			style_alg_reg.s.qpg_qos = style_cfg.qpg_qos;
			style_alg_reg.s.tag_vni = style_cfg.tag_fields.tag_vni;
			style_alg_reg.s.tag_gtp = style_cfg.tag_fields.tag_gtp;
			style_alg_reg.s.tag_spi = style_cfg.tag_fields.tag_spi;
			style_alg_reg.s.tag_syn = style_cfg.tag_fields.tag_sync;
			style_alg_reg.s.tag_pctl = style_cfg.tag_fields.ip_prot_nexthdr;
			style_alg_reg.s.tag_vs1 = style_cfg.tag_fields.second_vlan;
			style_alg_reg.s.tag_vs0 = style_cfg.tag_fields.first_vlan;
			style_alg_reg.s.tag_mpls0 = style_cfg.tag_fields.mpls_label;
			style_alg_reg.s.tag_prt = style_cfg.tag_fields.input_port;
			style_alg_reg.s.tt = style_cfg.tag_type;
			cvmx_write_csr_node(node, CVMX_PKI_CLX_STYLEX_ALG(style, cluster), style_alg_reg.u64);

			style_cfg2_reg.u64 = cvmx_read_csr_node(node, CVMX_PKI_CLX_STYLEX_CFG2(style, cluster));
			style_cfg2_reg.s.tag_src_lg = style_cfg.tag_fields.layer_G_src;
			style_cfg2_reg.s.tag_src_lf = style_cfg.tag_fields.layer_F_src;
			style_cfg2_reg.s.tag_src_le = style_cfg.tag_fields.layer_E_src;
			style_cfg2_reg.s.tag_src_ld = style_cfg.tag_fields.layer_D_src;
			style_cfg2_reg.s.tag_src_lc = style_cfg.tag_fields.layer_C_src;
			style_cfg2_reg.s.tag_src_lb = style_cfg.tag_fields.layer_B_src;
			style_cfg2_reg.s.tag_dst_lg = style_cfg.tag_fields.layer_G_dst;
			style_cfg2_reg.s.tag_dst_lf = style_cfg.tag_fields.layer_F_dst;
			style_cfg2_reg.s.tag_dst_le = style_cfg.tag_fields.layer_E_dst;
			style_cfg2_reg.s.tag_dst_ld = style_cfg.tag_fields.layer_D_dst;
			style_cfg2_reg.s.tag_dst_lc = style_cfg.tag_fields.layer_C_dst;
			style_cfg2_reg.s.tag_dst_lb = style_cfg.tag_fields.layer_B_dst;
			cvmx_write_csr_node(node, CVMX_PKI_CLX_STYLEX_CFG2(style, cluster), style_cfg2_reg.u64);

		}
		cluster++;
	}
	style_buf_reg.u64 = cvmx_read_csr_node(node, CVMX_PKI_STYLEX_BUF(style));
	style_buf_reg.s.first_skip = style_cfg.first_mbuf_skip;
	style_buf_reg.s.later_skip = style_cfg.later_mbuf_skip;
	style_buf_reg.s.opc_mode = style_cfg.cache_mode;
	style_buf_reg.s.mb_size = style_cfg.mbuff_size;
	style_buf_reg.s.dis_wq_dat = 0;
	cvmx_write_csr_node(node,CVMX_PKI_STYLEX_BUF(style), style_buf_reg.u64);

	num_entry = style_cfg.qpg_cfg.num_entries;
	index = style_cfg.qpg_cfg.base_offset;
	while(num_entry--) {
		cvmx_pki_write_qpg_entry(node, index, style_cfg.qpg_cfg.qpg_entry[num_entry].port_add,
					   style_cfg.qpg_cfg.qpg_entry[num_entry].aura, style_cfg.qpg_cfg.qpg_entry[num_entry].grp_ok,
					   style_cfg.qpg_cfg.qpg_entry[num_entry].grp_bad);
		index++;
	}
}


/**
 * This function writes pcam entry at given offset in pcam table in hardware
 *
 * @param node	              node number.
 * @param index		      offset in pcam table.
 * @param cluster_mask	      Mask of clusters in which to write pcam entry.
 * @param input 	      input keys to pcam match passed as struct.
 * @param action	      pcam match action passed as struct
 *
 */
int cvmx_pki_pcam_write_entry(int node, int index, uint64_t cluster_mask,
				struct cvmx_pki_pcam_input input,
				struct cvmx_pki_pcam_action action)
{
	int bank;
	int cluster=0;
	cvmx_pki_clx_pcamx_termx_t	pcam_term;
	cvmx_pki_clx_pcamx_matchx_t	pcam_match;
	cvmx_pki_clx_pcamx_actionx_t	pcam_action;

	if(index >= CVMX_PKI_TOTAL_PCAM_ENTRY) {
		cvmx_dprintf("\nERROR: Invalid pcam entry %d", index);
		return -1;
	}
	bank = (int)(input.field & 0x01);
	while( cluster < CVMX_PKI_NUM_CLUSTERS) {
		if(cluster_mask & (0x01L << cluster)) {
			pcam_match.u64 = cvmx_read_csr_node(node,CVMX_PKI_CLX_PCAMX_MATCHX(cluster, bank, index));
			pcam_match.s.data1 = input.data & input.data_mask;
			pcam_match.s.data0 = (~input.data) & input.data_mask;
			//cvmx_dprintf("\ncl%d bank%d index%d pcam_match=%lx",cluster,bank,index,pcam_match.u64);
			cvmx_write_csr_node(node, CVMX_PKI_CLX_PCAMX_MATCHX(cluster, bank, index), pcam_match.u64);
			pcam_action.u64 = cvmx_read_csr_node(node,CVMX_PKI_CLX_PCAMX_ACTIONX(cluster, bank, index));
			pcam_action.s.pmc = action.parse_mode_chg;
			pcam_action.s.style_add = action.style_add;
			pcam_action.s.pf = action.parse_flag_set;
			pcam_action.s.setty = action.layer_type_set;
			pcam_action.s.advance = action.pointer_advance;
			//cvmx_dprintf("\ncl%d bank%d index%d pcam_action=%lx",cluster,bank,index,pcam_action.u64);
			cvmx_write_csr_node(node,CVMX_PKI_CLX_PCAMX_ACTIONX(cluster, bank, index), pcam_action.u64);
			pcam_term.u64 = cvmx_read_csr_node(node,CVMX_PKI_CLX_PCAMX_TERMX(cluster, bank, index));
			pcam_term.s.term1 = input.field & input.field_mask;
			pcam_term.s.term0 = (~input.field) & input.field_mask;
			pcam_term.s.style1 = input.style & input.style_mask;
			pcam_term.s.style0 = (~input.style) & input.style_mask;
			pcam_term.s.valid = 1;
			//cvmx_dprintf("\ncl%d bank%d index%d pcam_term=%lx",cluster,bank,index,pcam_term.u64);
			cvmx_write_csr_node(node, CVMX_PKI_CLX_PCAMX_TERMX(cluster, bank, index), pcam_term.u64);
		}
		cluster++;
	}
	return 0;

}

/**
 * Enables/Disabled QoS (RED Drop, Tail Drop & backpressure) for the
 * PKI aura.
 * @param node      node number
 * @param aura      to enable/disable QoS on.
 * @param ena_red   Enable/Disable RED drop between pass and drop level
 *                  1-enable 0-disable
 * @param ena_drop  Enable/disable tail drop when max drop level exceeds
 *                  1-enable 0-disable
 * @param ena_red   Enable/Disable asserting backpressure on bpid when
 *                  max DROP level exceeds.
 *                  1-enable 0-disable
 */
int cvmx_pki_enable_aura_qos(int node, int aura, bool ena_red,
			     bool ena_drop, bool ena_bp)
{
	cvmx_pki_aurax_cfg_t pki_aura_cfg;

	if( aura >= CVMX_PKI_NUM_AURA) {
		cvmx_dprintf("ERROR: PKI config aura_qos aura = %d",aura);
		return -1;
	}
	pki_aura_cfg.u64 = cvmx_read_csr_node(node, CVMX_PKI_AURAX_CFG(aura));
	pki_aura_cfg.s.ena_red = ena_red;
	pki_aura_cfg.s.ena_drop = ena_drop;
	pki_aura_cfg.s.ena_bp = ena_bp;
	cvmx_write_csr_node(node, CVMX_PKI_AURAX_CFG(aura),pki_aura_cfg.u64 );
	return 0;
}

/**
 * Configures the bpid on which, specified aura will
 * assert backpressure.
 * Each bpid receives backpressure from auras.
 * Multiple auras can backpressure single bpid.
 * @param node   node number
 * @param aura   number which will assert backpressure on that bpid.
 * @param bpid   to assert backpressure on.
 */
int cvmx_pki_write_aura_bpid(int node, int aura, int bpid)
{
	cvmx_pki_aurax_cfg_t pki_aura_cfg;

	if( aura >= CVMX_PKI_NUM_AURA || bpid >= CVMX_PKI_NUM_BPID) {
		cvmx_dprintf("ERROR: PKI config aura_bp aura = %d bpid = %d",aura, bpid);
		return -1;
	}
	pki_aura_cfg.u64 = cvmx_read_csr_node(node, CVMX_PKI_AURAX_CFG(aura));
	pki_aura_cfg.s.bpid = bpid;
	cvmx_write_csr_node(node, CVMX_PKI_AURAX_CFG(aura),pki_aura_cfg.u64 );
	return 0;
}

/**
 * Configures the channel which will receive backpressure
 * from the specified bpid.
 * Each channel listens for backpressure on a specific bpid.
 * Each bpid can backpressure multiple channels.
 * @param node    node number
 * @param bpid    bpid from which, channel will receive backpressure.
 * @param channel channel numner to receive backpressue.
 */
int cvmx_pki_write_channel_bpid(int node, int channel, int bpid)
{
	cvmx_pki_chanx_cfg_t pki_chan_cfg;

	if( channel >= CVMX_PKI_NUM_CHANNELS || bpid >= CVMX_PKI_NUM_BPID) {
		cvmx_dprintf("ERROR: PKI config channel_bp channel = %d bpid = %d",channel, bpid);
		return -1;
	}

	pki_chan_cfg.u64 = cvmx_read_csr_node(node, CVMX_PKI_CHANX_CFG(channel));
	pki_chan_cfg.s.bpid = bpid;
	cvmx_write_csr_node(node, CVMX_PKI_CHANX_CFG(channel),pki_chan_cfg.u64 );
	return 0;
}

int cvmx_pki_frame_len_check(int node, int id, int maxframesize, int minframesize)
{
	cvmx_pki_frm_len_chkx_t frame_len_chk;

	frame_len_chk.u64 = cvmx_read_csr_node(node, CVMX_PKI_FRM_LEN_CHKX(id));
	if(maxframesize && minframesize) {
		if(frame_len_chk.s.maxlen != maxframesize ||
				 frame_len_chk.s.minlen != minframesize)
			return -1;
	}
	else if(maxframesize && frame_len_chk.s.maxlen != maxframesize)
		return -1;
	else if(minframesize && frame_len_chk.s.minlen != minframesize)
		return -1;
	return 0;
}

int cvmx_pki_config_l2_frame_len(int node, uint64_t maxframesize, uint64_t minframesize)
{
	if (cvmx_pki_frame_len_check(node,0,maxframesize, minframesize)) {
		if (cvmx_pki_frame_len_check(node,1,maxframesize, minframesize)) {
			cvmx_dprintf("ERROR: No frame len match");
			return -1;
		}
		return 1;
	}
	else
		return 0;
}


int cvmx_pki_config_cluster_group(int node, char *name, int cluster_group, uint64_t cluster_mask)
{
	int index;

	if(node >= CVMX_MAX_NODES) {
		cvmx_dprintf("Invalid node number %d",node);
		return -1;
	}
	//spinlock it
	index = pki_config[node].cluster_list.index;

	if(index >= CVMX_PKI_MAX_CLUSTER_PROFILES) {
		cvmx_dprintf("ERROR: Max cluster profiles %d reached\n", index);
		return -1;
	}
	//spinlock free
	pki_config[node].cluster_list.cl_profile[index].cl_group = (uint64_t)cluster_group;
	pki_config[node].cluster_list.cl_profile[index].cl_mask = cluster_mask;
	if(strlen(name) > CVMX_PKI_MAX_NAME) {
		cvmx_dprintf("ERROR: cluster profile name exceeds max length of %d\n",
			     (int)CVMX_PKI_MAX_NAME);
		return -1;
	}
	strcpy(pki_config[node].cluster_list.cl_profile[index].name, name);
	pki_config[node].cluster_list.index++;
	return 0;
}

int cvmx_pki_pcam_config_entry(int node,uint64_t cl_mask,
			       struct cvmx_pki_pcam_input input,
			       struct cvmx_pki_pcam_action action)
{
	uint64_t index;

	if(node >= CVMX_MAX_NODES) {
		cvmx_dprintf("Invalid node number %d",node);
		return -1;
	}

	//spinlock it
	index = pki_config[node].pcam_list.index;
	if(index >= CVMX_PKI_TOTAL_PCAM_ENTRY) {
		cvmx_dprintf("ERROR: Max pcam lists %d reached\n", (int)index);
		return -1;

	}
	//spinlock free

	pki_config[node].pcam_list.pcam_cfg[index].cluster_mask = cl_mask;
	pki_config[node].pcam_list.pcam_cfg[index].pcam_input = input;
	pki_config[node].pcam_list.pcam_cfg[index].pcam_action = action;
	pki_config[node].pcam_list.index++;
	return 0;
}

int cvmx_pki_config_QPG_entry(void)
{
	return 0;

}

/**
 * This function shows the pcam table in raw format,
 * read directly from hardware.
 * @param node    node number
 */
void cvmx_pki_show_pcam_entries(int node)
{
	int cluster;
	int index;
	int bank;

	for(cluster=0; cluster<4; cluster++) {
		for(bank=0; bank<2; bank++) {
			cvmx_dprintf("\n--------------Cluster %1d Bank %1d-------------\n",cluster,bank);
			cvmx_dprintf("index         TERM                 DATA,                ACTION");
			for(index=0; index<CVMX_PKI_NUM_PCAM_ENTRY; index++) {
				cvmx_dprintf("\n%d",index);
				cvmx_dprintf("             %-16lx",
					     (unsigned long)cvmx_read_csr_node(node,CVMX_PKI_CLX_PCAMX_TERMX(cluster, bank, index)));
			        cvmx_dprintf("     %-16lx",
					     (unsigned long)cvmx_read_csr_node(node,CVMX_PKI_CLX_PCAMX_MATCHX(cluster, bank, index)));
			        cvmx_dprintf("     %-16lx",
					     (unsigned long)cvmx_read_csr_node(node,CVMX_PKI_CLX_PCAMX_ACTIONX(cluster, bank, index)));
			}
		}
	}
}

/**
 * This function shows the valid entries in readable format,
 * read directly from hardware.
 * @param node    node number
 */
void cvmx_pki_show_valid_pcam_entries(int node)
{
	int cluster;
	int index;
	int bank;
	cvmx_pki_clx_pcamx_termx_t	pcam_term;
	cvmx_pki_clx_pcamx_matchx_t	pcam_match;
	cvmx_pki_clx_pcamx_actionx_t	pcam_action;

	//vinita_to_do, later modify to use/t/t etc
	for(cluster=0; cluster<4; cluster++) {
		for(bank=0; bank<2; bank++) {
			cvmx_dprintf("\n--------------Cluster %1d Bank %1d-----------------------------------------------\n",cluster,bank);
			cvmx_dprintf("%-10s%-17s%-19s%-18s","index",
				     "TERM1:TERM0","Style1:Style0","Data1:Data0");
			cvmx_dprintf("%-6s","ACTION[pmc:style_add:pf:setty:advance]");
			for(index=0; index < CVMX_PKI_NUM_PCAM_ENTRY; index++) {
				pcam_term.u64 = cvmx_read_csr_node(node,
						CVMX_PKI_CLX_PCAMX_TERMX(cluster, bank, index));
				if(pcam_term.s.valid) {
					pcam_match.u64 = cvmx_read_csr_node(node,
							CVMX_PKI_CLX_PCAMX_MATCHX(cluster, bank, index));
					pcam_action.u64 = cvmx_read_csr_node(node,
							CVMX_PKI_CLX_PCAMX_ACTIONX(cluster, bank, index));
					cvmx_dprintf("\n%-13d",index);
					cvmx_dprintf("%-2x:%x",pcam_term.s.term1,pcam_term.s.term0);
					cvmx_dprintf("     	      %-2x:%x",pcam_term.s.style1, pcam_term.s.style0);
					cvmx_dprintf("        %-8x:%x",pcam_match.s.data1,pcam_match.s.data0);
					cvmx_dprintf("            %-2x:%-2x       :%-1x :%2x   :%-2x",
						pcam_action.s.pmc,pcam_action.s.style_add, pcam_action.s.pf,pcam_action.s.setty, pcam_action.s.advance);

				}
			}
		}
	}
}

