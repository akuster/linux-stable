/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2013 Cavium, Inc.
 */
#ifndef _ETHERNET_OCTEON_OCTEON_COMMON_H
#define _ETHERNET_OCTEON_OCTEON_COMMON_H

#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/if_vlan.h>

/* Allow 8 bytes for vlan and FCS. */
#define FRAME_HEADER	(ETH_HLEN + ETH_FCS_LEN + VLAN_HLEN)

extern void cvm_oct_common_set_rx_filtering(struct net_device *dev, u64 base_reg,
					spinlock_t *lock);

extern int cvm_oct_common_set_mac_address(struct net_device *dev, void *addr,
					u64 base_reg, spinlock_t *lock);

extern int cvm_oct_common_change_mtu(struct net_device *dev, int mtu, u64 base_reg,
		int max_mtu_limit);
#endif
