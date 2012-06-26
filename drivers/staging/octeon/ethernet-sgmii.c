/**********************************************************************
 * Author: Cavium Networks
 *
 * Contact: support@caviumnetworks.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2012 Cavium, Inc.
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
#include <linux/phy.h>
#include <linux/kernel.h>
#include <linux/netdevice.h>
#include <linux/ratelimit.h>
#include <net/dst.h>

#include <asm/octeon/octeon.h>

#include "ethernet-defines.h"
#include "octeon-ethernet.h"
#include "ethernet-util.h"
#include "ethernet-mdio.h"

#include <asm/octeon/cvmx-helper.h>

#include <asm/octeon/cvmx-gmxx-defs.h>

/*
 * Although these functions are called cvm_oct_sgmii_*, they also
 * happen to be used for the XAUI ports as well.
 */

static void cvm_oct_sgmii_poll(struct net_device *dev)
{
	struct octeon_ethernet *priv = netdev_priv(dev);
	cvmx_helper_link_info_t link_info;

	link_info = cvmx_helper_link_get(priv->port);
	if (link_info.u64 == priv->link_info)
		return;

	link_info = cvmx_helper_link_autoconf(priv->port);
	priv->link_info = link_info.u64;

	/* Tell the core */
	cvm_oct_set_carrier(priv, link_info);
}

int cvm_oct_sgmii_open(struct net_device *dev)
{
	union cvmx_gmxx_prtx_cfg gmx_cfg;
	struct octeon_ethernet *priv = netdev_priv(dev);
	int interface = INTERFACE(priv->port);
	int index = INDEX(priv->port);
	cvmx_helper_link_info_t link_info;
	int rv;

	rv = cvm_oct_phy_setup_device(dev);
	if (rv)
		return rv;

	gmx_cfg.u64 = cvmx_read_csr(CVMX_GMXX_PRTX_CFG(index, interface));
	gmx_cfg.s.en = 1;
	cvmx_write_csr(CVMX_GMXX_PRTX_CFG(index, interface), gmx_cfg.u64);

	if (!octeon_is_simulation()) {
		if (priv->phydev) {
			int r = phy_read_status(priv->phydev);
			if (r == 0 && priv->phydev->link == 0)
				netif_carrier_off(dev);
			cvm_oct_adjust_link(dev);
		} else {
			link_info = cvmx_helper_link_get(priv->port);
			if (!link_info.s.link_up)
				netif_carrier_off(dev);
			spin_lock(&priv->poll_lock);
			priv->poll = cvm_oct_sgmii_poll;
			spin_unlock(&priv->poll_lock);
			cvm_oct_sgmii_poll(dev);
		}
	}
	return 0;
}

int cvm_oct_sgmii_stop(struct net_device *dev)
{
	union cvmx_gmxx_prtx_cfg gmx_cfg;
	struct octeon_ethernet *priv = netdev_priv(dev);
	int interface = INTERFACE(priv->port);
	int index = INDEX(priv->port);

	gmx_cfg.u64 = cvmx_read_csr(CVMX_GMXX_PRTX_CFG(index, interface));
	gmx_cfg.s.en = 0;
	cvmx_write_csr(CVMX_GMXX_PRTX_CFG(index, interface), gmx_cfg.u64);

	spin_lock(&priv->poll_lock);
	priv->poll = NULL;
	spin_unlock(&priv->poll_lock);

	if (priv->phydev)
		phy_disconnect(priv->phydev);
	priv->phydev = NULL;

	return 0;
}

int cvm_oct_sgmii_open(struct net_device *dev)
{
	union cvmx_gmxx_prtx_cfg gmx_cfg;
	struct octeon_ethernet *priv = netdev_priv(dev);
	int interface = INTERFACE(priv->port);
	int index = INDEX(priv->port);
	cvmx_helper_link_info_t link_info;
	int rv;

	rv = cvm_oct_phy_setup_device(dev);
	if (rv)
		return rv;

	gmx_cfg.u64 = cvmx_read_csr(CVMX_GMXX_PRTX_CFG(index, interface));
	gmx_cfg.s.en = 1;
	cvmx_write_csr(CVMX_GMXX_PRTX_CFG(index, interface), gmx_cfg.u64);

	if (octeon_is_simulation())
		return 0;

	if (priv->phydev) {
		int r = phy_read_status(priv->phydev);

		if (r == 0 && priv->phydev->link == 0)
			netif_carrier_off(dev);
		cvm_oct_adjust_link(dev);
	} else {
		link_info = cvmx_helper_link_get(priv->port);
		if (!link_info.s.link_up)
			netif_carrier_off(dev);
		priv->poll = cvm_oct_sgmii_poll;
		cvm_oct_sgmii_poll(dev);
	}
	return 0;
}

int cvm_oct_sgmii_stop(struct net_device *dev)
{
	cvm_oct_common_init(dev);
	dev->netdev_ops->ndo_stop(dev);

	return 0;
}
