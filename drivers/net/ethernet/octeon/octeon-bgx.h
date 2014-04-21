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
#ifndef _OCTEON_BGX_H_
#define _OCTEON_BGX_H_

struct device;
struct net_device;

void bgx_nexus_load(void);

int bgx_port_enable(struct device *dev);
int bgx_port_disable(struct device *dev);
const u8 *bgx_port_get_mac(struct device *dev);
void bgx_port_set_rx_filtering(struct net_device *netdev, struct device *dev);


struct bgx_platform_data {
	int numa_node;
	int interface;
	int port;
};

#endif /* _OCTEON_BGX_H_ */
