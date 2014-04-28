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
#include <linux/platform_device.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/of_platform.h>
#include <linux/of_address.h>
#include <linux/of_net.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/list.h>

#include <asm/octeon/cvmx-helper.h>
#include <asm/octeon/cvmx-helper-util.h>
#include <asm/octeon/cvmx-helper-cfg.h>
#include <asm/octeon/cvmx-bgxx-defs.h>

#include "octeon-bgx.h"

struct bgx_port_priv {
	int numa_node;
	int bgx_interface;
	int index; /* Port index on BGX block*/
	const u8 *mac_addr;
};

const u8 *bgx_port_get_mac(struct device *dev)
{
	struct bgx_port_priv *priv = dev_get_drvdata(dev);
	return priv->mac_addr;
}
EXPORT_SYMBOL(bgx_port_get_mac);

static void bgx_port_write_cam(int numa_node, int interface, int index, int cam, const u8 *mac)
{
	int i;
	union cvmx_bgxx_cmr_rx_adrx_cam adr_cam;
	u64 m = 0;
	if (mac)
		for (i = 0; i < 6; i++)
			m |= ((u64)mac[i]) << (6 * i);
	adr_cam.u64 = m;
	adr_cam.s.en = mac ? 1 : 0;
	adr_cam.s.id = index >> 3;
	cvmx_write_csr_node(numa_node, CVMX_BGXX_CMR_RX_ADRX_CAM(index * 8 + cam, interface), adr_cam.u64);
}

/* Set MAC address for the ned_device that is attached. */
void bgx_port_set_rx_filtering(struct net_device *netdev, struct device *dev)
{
	union cvmx_bgxx_cmrx_rx_adr_ctl adr_ctl;
	struct bgx_port_priv *priv = dev_get_drvdata(dev);
	int available_cam_entries, current_cam_entry;
	struct netdev_hw_addr *ha;

	available_cam_entries = 8;
	adr_ctl.u64 = 0;
	adr_ctl.s.bcst_accept = 1; /* Accept all Broadcast*/

	if ((netdev->flags & IFF_PROMISC) || netdev->uc.count > 7) {
		adr_ctl.s.cam_accept = 0; /* Reject CAM match */
		available_cam_entries = 0;
	} else {
		/* One CAM entry for the primary address, leaves seven
		 * for the secondary addresses.
		 */
		adr_ctl.s.cam_accept = 1; /* Accept CAM match */
		available_cam_entries = 7 - netdev->uc.count;
	}

	if (netdev->flags & IFF_MULTICAST) {
		if ((netdev->flags & IFF_ALLMULTI) || netdev_mc_count(netdev) > available_cam_entries)
			adr_ctl.s.mcst_mode = 1; /* Accept all Multicast */
		else
			adr_ctl.s.mcst_mode = 2; /* Accept all Multicast via CAM */
	}
	current_cam_entry = 0;
	if (adr_ctl.s.cam_accept) {
		bgx_port_write_cam(priv->numa_node, priv->bgx_interface, priv->index,
				   current_cam_entry, netdev->dev_addr);
		current_cam_entry++;
		netdev_for_each_uc_addr(ha, netdev) {
			bgx_port_write_cam(priv->numa_node, priv->bgx_interface, priv->index,
					   current_cam_entry, ha->addr);
			current_cam_entry++;
		}
	}
	if (adr_ctl.s.mcst_mode == 2) {/* Accept all Multicast via CAM */
		netdev_for_each_mc_addr(ha, netdev) {
			bgx_port_write_cam(priv->numa_node, priv->bgx_interface, priv->index,
					   current_cam_entry, ha->addr);
			current_cam_entry++;
		}
	}
	while (current_cam_entry < 8) {
		bgx_port_write_cam(priv->numa_node, priv->bgx_interface, priv->index,
				   current_cam_entry, NULL);
		current_cam_entry++;
	}
	cvmx_write_csr_node(priv->numa_node,
			    CVMX_BGXX_CMRX_RX_ADR_CTL(priv->index, priv->bgx_interface),
			    adr_ctl.u64);
}
EXPORT_SYMBOL(bgx_port_set_rx_filtering);

int bgx_port_enable(struct device *dev)
{
	return 0;
}

int bgx_port_disable(struct device *dev)
{
	return 0;
}

static int bgx_port_probe(struct platform_device *pdev)
{
	u64 addr;
	const u8 *mac;
	const __be32 *reg;
	u32 index;
	int r;
	struct bgx_port_priv *priv;
	int numa_node;

	reg = of_get_property(pdev->dev.parent->of_node, "reg", NULL);
	addr = of_translate_address(pdev->dev.parent->of_node, reg);
	mac = of_get_mac_address(pdev->dev.parent->of_node);

	numa_node = (addr >> 36) & 0x7;

	r = of_property_read_u32(pdev->dev.of_node, "reg", &index);
	if (r)
		return -ENODEV;
	priv = kzalloc_node(sizeof(*priv), GFP_KERNEL, numa_node);
	if (!priv)
		return -ENOMEM;

	priv->numa_node = numa_node;
	priv->bgx_interface = (addr >> 24) & 0xf;
	priv->index = index;
	if (mac)
		priv->mac_addr = mac;

	r = dev_set_drvdata(&pdev->dev, priv);
	if (r)
		goto err;

	dev_info(&pdev->dev, "Probed\n");
	return 0;
err:
	kfree(priv);
	return r;
}

static int bgx_port_remove(struct platform_device *pdev)
{
	struct bgx_port_priv *priv = dev_get_drvdata(&pdev->dev);
	kfree(priv);
	return 0;
}

static void bgx_port_shutdown(struct platform_device *pdev)
{
	return;
}

static struct of_device_id bgx_port_match[] = {
	{
		.compatible = "cavium,octeon-7890-bgx-port",
	},
	{},
};
MODULE_DEVICE_TABLE(of, bgx_port_match);

static struct platform_driver bgx_port_driver = {
	.probe		= bgx_port_probe,
	.remove		= bgx_port_remove,
	.shutdown       = bgx_port_shutdown,
	.driver		= {
		.owner	= THIS_MODULE,
		.name	= KBUILD_MODNAME,
		.of_match_table = bgx_port_match,
	},
};

static int __init bgx_port_driver_init(void)
{
	int r;

	bgx_nexus_load();
	r =  platform_driver_register(&bgx_port_driver);
	return r;
}
module_init(bgx_port_driver_init);

static void __exit bgx_port_driver_exit(void)
{
	platform_driver_unregister(&bgx_port_driver);
}
module_exit(bgx_port_driver_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Cavium Networks <support@caviumnetworks.com>");
MODULE_DESCRIPTION("Cavium Networks BGX Ethernet MAC driver.");
