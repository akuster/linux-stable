/***********************license start***************
 * Copyright (c) 2014  Cavium Inc. (support@cavium.com). All rights
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
 * Functions to configure the ILK-LA interface.
 *
 * <hr>$Id$<hr>
 */
#ifdef CVMX_BUILD_FOR_LINUX_KERNEL
#include <asm/octeon/cvmx.h>
#include <asm/octeon/cvmx-helper.h>
#include <asm/octeon/cvmx-ila.h>
#include <asm/octeon/cvmx-ila-defs.h>
#include <asm/octeon/cvmx-qlm.h>
#else
#include "cvmx.h"
#include "cvmx-helper.h"
#include "cvmx-ila.h"
#include "cvmx-qlm.h"
#endif

CVMX_SHARED int cvmx_ila_chans = 2;

/**
 * @INTERNAL
 * Return the link state of an IPD/PKO port as returned by ILK-LA link status.
 *
 * @param lane_mask lane_mask
 *
 * @return Link state
 */
static cvmx_helper_link_info_t __cvmx_ila_link_get(int lane_mask)
{
	cvmx_helper_link_info_t result;
	int node = cvmx_get_node_num();
	int retry_count = 0;
	cvmx_ila_rxx_cfg1_t rx_cfg1;
	cvmx_ila_rxx_int_t rx_int;
	int i;

	result.u64 = 0;

retry:
	retry_count++;
	if (retry_count > 10)
		goto fail;

	/* Read RX config and status bits */
	rx_cfg1.u64 = cvmx_read_csr_node(node, CVMX_ILA_RXX_CFG1(0));
	rx_int.u64 = cvmx_read_csr_node(node, CVMX_ILA_RXX_INT(0));

	if (rx_cfg1.s.rx_bdry_lock_ena == 0) {
		/* Clear the boundary lock status bit */
		rx_int.u64 = 0;
		rx_int.s.word_sync_done = 1;
		cvmx_write_csr_node(node, CVMX_ILA_RXX_INT(0), rx_int.u64);

		/* We need to start looking for work boundary lock */
		rx_cfg1.s.rx_bdry_lock_ena = lane_mask;
		rx_cfg1.s.rx_align_ena = 0;
		cvmx_write_csr_node(node, CVMX_ILA_RXX_CFG1(0), rx_cfg1.u64);
		//cvmx_dprintf("ILK-LA: Looking for word boundary lock\n");

		goto retry;
	}

	if (rx_cfg1.s.rx_align_ena == 0) {	
		if (rx_int.s.word_sync_done) {
			/* Clear the lane align status bits */
			rx_int.u64 = 0;
			rx_int.s.lane_align_fail = 1;
			rx_int.s.lane_align_done = 1;
			cvmx_write_csr_node(node, CVMX_ILA_RXX_INT(0), rx_int.u64);

			rx_cfg1.s.rx_align_ena = 1;
			cvmx_write_csr_node(node, CVMX_ILA_RXX_CFG1(0), rx_cfg1.u64);
			//cvmx_printf("ILK-LA: Looking for lane alignment\n");
			goto retry;
		}
		goto fail;
	}

	if (rx_int.s.lane_align_fail) {	
		rx_cfg1.s.rx_bdry_lock_ena = 0;
		rx_cfg1.s.rx_align_ena = 0;
		cvmx_write_csr_node(node, CVMX_ILA_RXX_CFG1(0), rx_cfg1.u64);
		//cvmx_dprintf("ILK-LA: Lane alignment failed\n");
		goto fail;
	}

	if (rx_cfg1.s.pkt_ena == 0 && rx_int.s.lane_align_done) {
		cvmx_ila_txx_cfg1_t tx_cfg1;

		rx_cfg1.u64 = cvmx_read_csr_node(node, CVMX_ILA_RXX_CFG1(0));
		tx_cfg1.u64 = cvmx_read_csr_node(node, CVMX_ILA_TXX_CFG1(0));

		rx_cfg1.s.pkt_ena = tx_cfg1.s.pkt_ena = 1;
		cvmx_write_csr_node(node, CVMX_ILA_RXX_CFG1(0), rx_cfg1.u64);
		cvmx_write_csr_node(node, CVMX_ILA_TXX_CFG1(0), tx_cfg1.u64);

		/* Clear and enable error interrupts */
		for (i = 0; i < 8; i++) {
			if ((1 << i) & lane_mask) {
				/* Clear pending interrupts */
				cvmx_write_csr_node(node, CVMX_ILA_RX_LNEX_INT(i), 0x3ff);
				/* Enable bad_64b67b, bdry_sync_loss, crc32_err, dskew_fifo_ovfl,
 *                                    scrm_sync_loss, serdes_lock_loss, stat_msg, ukwn_cntl_word */
			}
		}

		//cvmx_dprintf("ILK-LA: Lane alignment complete\n");
	}

	result.u64 = 0;
	result.s.link_up = 1;
	result.s.full_duplex = 1;
	result.s.speed = cvmx_qlm_get_gbaud_mhz(2) * 64 / 67;
	result.s.speed *= cvmx_pop(lane_mask);

	return result;

fail:
	if (rx_cfg1.s.pkt_ena) {
		/* Disable the interface */
		rx_cfg1.s.pkt_ena = 0;
		cvmx_write_csr_node(node, CVMX_ILA_RXX_CFG1(0), rx_cfg1.u64);

		/* Disable error interrupts */
	}

	return result;
}

/**
 * Initialize ILK-LA interface
 *
 * @param lane_mask  Lanes to initialize ILK-LA interface.
 * @return  0 on success and -1 on failure.
 */
int cvmx_ila_initialize(int lane_mask)
{
	cvmx_ila_rxx_cfg0_t rx_cfg0;
	cvmx_ila_txx_cfg0_t tx_cfg0;
	cvmx_ila_rxx_cfg1_t rx_cfg1;
	cvmx_ila_txx_cfg1_t tx_cfg1;
	cvmx_ila_txx_cha_xon_t tx_cha_xon;
	cvmx_ila_ser_cfg_t ser_cfg;
	int node = cvmx_get_node_num();
	int lane0 = 0, lane1 = 0;
	cvmx_helper_link_info_t result;
	int retry_count = 0;

	ser_cfg.u64 = cvmx_read_csr_node(node, CVMX_ILA_SER_CFG);
	ser_cfg.s.ser_rxpol_auto = 1;
	cvmx_write_csr_node(node, CVMX_ILA_SER_CFG, ser_cfg.u64);

	if (cvmx_qlm_get_mode_cn78xx(node, 2) == CVMX_QLM_MODE_ILK)
		lane0 = 0xf;

	if (cvmx_qlm_get_mode_cn78xx(node, 3) == CVMX_QLM_MODE_ILK)
		lane1 = 0xf;

	if ((lane_mask & 0xf) != lane0) {
		cvmx_dprintf("ERROR: Invalid configuration for QLM2\n");
		return -1;
	}
	if (((lane_mask >> 4) & 0xf) == lane1) {
		cvmx_dprintf("ERROR: Invalid configuration for QLM3\n");
		return -1;
	}

	/* Enable RX lanes */
	rx_cfg0.u64 = cvmx_read_csr_node(node, CVMX_ILA_RXX_CFG0(0));
	rx_cfg0.s.lane_ena = lane_mask;
	cvmx_write_csr_node(node, CVMX_ILA_RXX_CFG0(0), rx_cfg0.u64);

	/* Enable TX lanes */
	tx_cfg0.u64 = cvmx_read_csr_node(node, CVMX_ILA_TXX_CFG0(0));
	tx_cfg0.s.lane_ena = lane_mask;
	cvmx_write_csr_node(node, CVMX_ILA_TXX_CFG0(0), tx_cfg0.u64);

	/* Set XON/XOFF state to XON */
	tx_cha_xon.u64 = cvmx_read_csr_node(node, CVMX_ILA_TXX_CHA_XON(0));
	tx_cha_xon.s.ch0_xon = 1;
	tx_cha_xon.s.ch1_xon = 1;
	cvmx_write_csr_node(node, CVMX_ILA_TXX_CHA_XON(0), tx_cha_xon.u64);

	/* Enable TX packet reception. */
	tx_cfg1.u64 = cvmx_read_csr_node(node, CVMX_ILA_TXX_CFG1(0));
	tx_cfg1.s.pkt_ena = 1;
	cvmx_write_csr_node(node, CVMX_ILA_TXX_CFG1(0), tx_cfg1.u64);	

	result.u64 = 0;

retry:
	retry_count++;
	if (retry_count > 10)
		goto out;

	/* Make sure the link is up, so that packets can be sent */
	result = __cvmx_ila_link_get(lane_mask);

	/* Small delay before another retry */
	cvmx_wait_usec(100);

	rx_cfg1.u64 = cvmx_read_csr_node(node, CVMX_ILA_RXX_CFG1(0));
	if (rx_cfg1.s.pkt_ena == 0)
		goto retry;

out:
	if (result.s.link_up)
		return 0;

	return -1;
}

int cvmx_ila_disable(void)
{
	int node = cvmx_get_node_num();
	cvmx_ila_rxx_cfg0_t rx_cfg0;
	cvmx_ila_txx_cfg0_t tx_cfg0;

	/* Disable RX lanes */
	rx_cfg0.u64 = cvmx_read_csr_node(node, CVMX_ILA_RXX_CFG0(0));
	rx_cfg0.s.lane_ena = 0;
	cvmx_write_csr_node(node, CVMX_ILA_RXX_CFG0(0), rx_cfg0.u64);

	/* Disable TX lanes */
	tx_cfg0.u64 = cvmx_read_csr_node(node, CVMX_ILA_TXX_CFG0(0));
	tx_cfg0.s.lane_ena = 0;
	cvmx_write_csr_node(node, CVMX_ILA_TXX_CFG0(0), tx_cfg0.u64);

	return 0;
}

/**
 * Enable or disable LA mode in ILK header.
 *
 * @param channel channel
 * @param mode   If set, enable LA mode in ILK header, else disable
 *
 * @return ILK header
 */
cvmx_ila_header_t cvmx_ila_configure_header(int channel, int mode)
{
	cvmx_ila_header_t ila_header;

	ila_header.u64 = 0;

	if (mode) {
		ila_header.s.la_mode = mode;
		ila_header.s.ilk_channel = channel;
	}

	return ila_header;
}
			
