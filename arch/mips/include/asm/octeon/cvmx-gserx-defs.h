/***********************license start***************
 * Copyright (c) 2003-2012  Cavium Inc. (support@cavium.com). All rights
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
 * cvmx-gserx-defs.h
 *
 * Configuration and status register (CSR) type definitions for
 * Octeon gserx.
 *
 * This file is auto generated. Do not edit.
 *
 * <hr>$Revision$<hr>
 *
 */
#ifndef __CVMX_GSERX_DEFS_H__
#define __CVMX_GSERX_DEFS_H__

#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_ANA_ATEST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_ANA_ATEST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000800ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_ANA_ATEST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000800ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_ANA_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_ANA_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000808ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_ANA_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090000808ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_RXX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_RXX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000400ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_RXX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000400ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_RXX_CU(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_RXX_CU(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000408ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_RXX_CU(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000408ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_RXX_EER(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_RXX_EER(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000418ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_RXX_EER(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000418ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_RXX_SR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_RXX_SR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000410ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_RXX_SR(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000410ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_TXX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_TXX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000420ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_TXX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000420ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_TXX_CU(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_TXX_CU(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000428ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_TXX_CU(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000428ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_TXX_CUR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_TXX_CUR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000438ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_TXX_CUR(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000438ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_BR_TXX_SR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_BR_TXX_SR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000430ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128;
}
#else
#define CVMX_GSERX_BR_TXX_SR(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000430ull) + (((offset) & 3) + ((block_id) & 15) * 0x20000ull) * 128)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_CFG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_CFG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000080ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_CFG(block_id) (CVMX_ADD_IO_SEG(0x0001180090000080ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DBG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_DBG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000098ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_DBG(block_id) (CVMX_ADD_IO_SEG(0x0001180090000098ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_LOOPBK_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_LOOPBK_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001008ull);
}
#else
#define CVMX_GSERX_DLMX_LOOPBK_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001008ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_LOS_BIAS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_LOS_BIAS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_LOS_BIAS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_LOS_LEVEL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_LOS_LEVEL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001018ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_LOS_LEVEL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001018ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MISC_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MISC_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000000ull);
}
#else
#define CVMX_GSERX_DLMX_MISC_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000000ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001020ull);
}
#else
#define CVMX_GSERX_DLMX_MPLL_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001020ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_HALF_RATE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_HALF_RATE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_MPLL_HALF_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001028ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_MULTIPLIER(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_MULTIPLIER(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001030ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_MPLL_MULTIPLIER(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001030ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_MPLL_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_MPLL_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_MPLL_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_PHY_RESET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_PHY_RESET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001038ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_PHY_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001038ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REFCLK_SEL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REFCLK_SEL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_REFCLK_SEL(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090000008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REF_CLKDIV2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REF_CLKDIV2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_REF_CLKDIV2(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REF_SSP_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REF_SSP_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001048ull);
}
#else
#define CVMX_GSERX_DLMX_REF_SSP_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001048ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_REF_USE_PAD(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_REF_USE_PAD(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001050ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_REF_USE_PAD(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001050ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_DATA_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_DATA_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002008ull);
}
#else
#define CVMX_GSERX_DLMX_RX_DATA_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002008ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_EQ(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_EQ(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_RX_EQ(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002010ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_LOS_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_LOS_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002018ull);
}
#else
#define CVMX_GSERX_DLMX_RX_LOS_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002018ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_PLL_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_PLL_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002020ull);
}
#else
#define CVMX_GSERX_DLMX_RX_PLL_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002020ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_RATE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_RATE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002028ull);
}
#else
#define CVMX_GSERX_DLMX_RX_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002028ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_RESET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_RESET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002030ull);
}
#else
#define CVMX_GSERX_DLMX_RX_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002030ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_RX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_RX_TERM_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_RX_TERM_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090002038ull);
}
#else
#define CVMX_GSERX_DLMX_RX_TERM_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090002038ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TEST_BYPASS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TEST_BYPASS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001058ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TEST_BYPASS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001058ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TEST_POWERDOWN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TEST_POWERDOWN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090001060ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TEST_POWERDOWN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090001060ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_AMPLITUDE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_AMPLITUDE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003008ull);
}
#else
#define CVMX_GSERX_DLMX_TX_AMPLITUDE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003008ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_CM_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_CM_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003010ull);
}
#else
#define CVMX_GSERX_DLMX_TX_CM_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003010ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_DATA_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_DATA_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003018ull);
}
#else
#define CVMX_GSERX_DLMX_TX_DATA_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003018ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_EN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_EN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003020ull);
}
#else
#define CVMX_GSERX_DLMX_TX_EN(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003020ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_PREEMPH(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_PREEMPH(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003028ull);
}
#else
#define CVMX_GSERX_DLMX_TX_PREEMPH(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003028ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_RATE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_RATE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003030ull);
}
#else
#define CVMX_GSERX_DLMX_TX_RATE(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003030ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_RESET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset == 0)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_RESET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003038ull);
}
#else
#define CVMX_GSERX_DLMX_TX_RESET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003038ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_DLMX_TX_TERM_OFFSET(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_DLMX_TX_TERM_OFFSET(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090003040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_DLMX_TX_TERM_OFFSET(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090003040ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_PX_MODE_0(unsigned long a, unsigned long b, unsigned long c)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((a <= 13)) && ((b <= 3)) && ((c <= 11))))))
		cvmx_warn("CVMX_GSERX_LANEX_PX_MODE_0(%lu,%lu,%lu) is invalid on this chip\n", a, b, c);
	return CVMX_ADD_IO_SEG(0x00011800904E0040ull) + ((a) << 24) + ((b) << 20) + ((c) << 5);
}
#else
#define CVMX_GSERX_LANEX_PX_MODE_0(a, b, c) (CVMX_ADD_IO_SEG(0x00011800904E0040ull) + ((a) << 24) + ((b) << 20) + ((c) << 5))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_PX_MODE_1(unsigned long a, unsigned long b, unsigned long c)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((a <= 13)) && ((b <= 3)) && ((c <= 11))))))
		cvmx_warn("CVMX_GSERX_LANEX_PX_MODE_1(%lu,%lu,%lu) is invalid on this chip\n", a, b, c);
	return CVMX_ADD_IO_SEG(0x00011800904E0048ull) + ((a) << 24) + ((b) << 20) + ((c) << 5);
}
#else
#define CVMX_GSERX_LANEX_PX_MODE_1(a, b, c) (CVMX_ADD_IO_SEG(0x00011800904E0048ull) + ((a) << 24) + ((b) << 20) + ((c) << 5))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_VMA_COARSE_CTRL_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_VMA_COARSE_CTRL_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01B0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_VMA_COARSE_CTRL_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E01B0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_VMA_COARSE_CTRL_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_VMA_COARSE_CTRL_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_VMA_COARSE_CTRL_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E01B8ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANEX_VMA_COARSE_CTRL_2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_LANEX_VMA_COARSE_CTRL_2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E01C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576;
}
#else
#define CVMX_GSERX_LANEX_VMA_COARSE_CTRL_2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E01C0ull) + (((offset) & 3) + ((block_id) & 15) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_LPBKEN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_LPBKEN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000110ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_LPBKEN(block_id) (CVMX_ADD_IO_SEG(0x0001180090000110ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_MODE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_MODE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000118ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_MODE(block_id) (CVMX_ADD_IO_SEG(0x0001180090000118ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_POFF(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_POFF(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000108ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_POFF(block_id) (CVMX_ADD_IO_SEG(0x0001180090000108ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_LANE_SRST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_LANE_SRST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000100ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_LANE_SRST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000100ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PCS_CLK_REQ(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PCS_CLK_REQ(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080478ull);
}
#else
#define CVMX_GSERX_PCIE_PCS_CLK_REQ(block_id) (CVMX_ADD_IO_SEG(0x0001180090080478ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPEX_TXDEEMPH(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 3)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPEX_TXDEEMPH(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_PCIE_PIPEX_TXDEEMPH(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090080480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_COM_CLK(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_COM_CLK(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080470ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_COM_CLK(block_id) (CVMX_ADD_IO_SEG(0x0001180090080470ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_CRST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_CRST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080458ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_CRST(block_id) (CVMX_ADD_IO_SEG(0x0001180090080458ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_PORT_LOOPBK(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_PORT_LOOPBK(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080468ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_PORT_LOOPBK(block_id) (CVMX_ADD_IO_SEG(0x0001180090080468ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_PORT_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_PORT_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080460ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_PORT_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090080460ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_RST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_RST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080448ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_RST(block_id) (CVMX_ADD_IO_SEG(0x0001180090080448ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_RST_STS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_RST_STS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080450ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_RST_STS(block_id) (CVMX_ADD_IO_SEG(0x0001180090080450ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_PIPE_STATUS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_PIPE_STATUS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080400ull);
}
#else
#define CVMX_GSERX_PCIE_PIPE_STATUS(block_id) (CVMX_ADD_IO_SEG(0x0001180090080400ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_DEEMPH_GEN1(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_DEEMPH_GEN1(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080408ull);
}
#else
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN1(block_id) (CVMX_ADD_IO_SEG(0x0001180090080408ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_3P5DB(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_3P5DB(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080410ull);
}
#else
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_3P5DB(block_id) (CVMX_ADD_IO_SEG(0x0001180090080410ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_6DB(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_6DB(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080418ull);
}
#else
#define CVMX_GSERX_PCIE_TX_DEEMPH_GEN2_6DB(block_id) (CVMX_ADD_IO_SEG(0x0001180090080418ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_SWING_FULL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_SWING_FULL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080420ull);
}
#else
#define CVMX_GSERX_PCIE_TX_SWING_FULL(block_id) (CVMX_ADD_IO_SEG(0x0001180090080420ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_SWING_LOW(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_SWING_LOW(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080428ull);
}
#else
#define CVMX_GSERX_PCIE_TX_SWING_LOW(block_id) (CVMX_ADD_IO_SEG(0x0001180090080428ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PCIE_TX_VBOOST_LVL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_PCIE_TX_VBOOST_LVL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090080440ull);
}
#else
#define CVMX_GSERX_PCIE_TX_VBOOST_LVL(block_id) (CVMX_ADD_IO_SEG(0x0001180090080440ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_IDCODE_HI(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_IDCODE_HI(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090400008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_IDCODE_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400008ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_IDCODE_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_IDCODE_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090400000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_IDCODE_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090400000ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_RX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_RX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904080B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_RX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_RX_LBERT_ERR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_RX_LBERT_ERR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904080B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_RX_LBERT_ERR(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_TXDEBUG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_TXDEBUG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408080ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_TXDEBUG(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408080ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE0_TX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE0_TX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904080A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE0_TX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904080A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_RX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_RX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904088B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_RX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088B0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_RX_LBERT_ERR(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_RX_LBERT_ERR(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904088B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_RX_LBERT_ERR(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088B8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_TXDEBUG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_TXDEBUG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090408880ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_TXDEBUG(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090408880ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHYX_LANE1_TX_LBERT_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && (((offset <= 2)) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_PHYX_LANE1_TX_LBERT_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904088A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288;
}
#else
#define CVMX_GSERX_PHYX_LANE1_TX_LBERT_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904088A8ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 524288)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PHY_CTL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_PHY_CTL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000000ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_PHY_CTL(block_id) (CVMX_ADD_IO_SEG(0x0001180090000000ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PIPE_LPBK(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_PIPE_LPBK(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000200ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_PIPE_LPBK(block_id) (CVMX_ADD_IO_SEG(0x0001180090000200ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PLL_PX_MODE_0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 11)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_PLL_PX_MODE_0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0030ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32;
}
#else
#define CVMX_GSERX_PLL_PX_MODE_0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0030ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PLL_PX_MODE_1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 11)) && ((block_id <= 13))))))
		cvmx_warn("CVMX_GSERX_PLL_PX_MODE_1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800904E0038ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32;
}
#else
#define CVMX_GSERX_PLL_PX_MODE_1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800904E0038ull) + (((offset) & 15) + ((block_id) & 15) * 0x80000ull) * 32)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_PLL_STAT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_PLL_STAT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000010ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_PLL_STAT(block_id) (CVMX_ADD_IO_SEG(0x0001180090000010ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_QLM_STAT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_QLM_STAT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800900000A0ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_QLM_STAT(block_id) (CVMX_ADD_IO_SEG(0x00011800900000A0ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_REFCLK_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_REFCLK_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000008ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_REFCLK_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090000008ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RXTX_STAT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RXTX_STAT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000140ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RXTX_STAT(block_id) (CVMX_ADD_IO_SEG(0x0001180090000140ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_COAST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_COAST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000138ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_COAST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000138ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_EIE_DETEN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_EIE_DETEN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000148ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_EIE_DETEN(block_id) (CVMX_ADD_IO_SEG(0x0001180090000148ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_EIE_DETSTS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_EIE_DETSTS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000150ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_EIE_DETSTS(block_id) (CVMX_ADD_IO_SEG(0x0001180090000150ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_POLARITY(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_POLARITY(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000158ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_POLARITY(block_id) (CVMX_ADD_IO_SEG(0x0001180090000158ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_RX_PSTATE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_RX_PSTATE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000128ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_RX_PSTATE(block_id) (CVMX_ADD_IO_SEG(0x0001180090000128ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_CFG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_CFG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100208ull);
}
#else
#define CVMX_GSERX_SATA_CFG(block_id) (CVMX_ADD_IO_SEG(0x0001180090100208ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_LANE_RST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_LANE_RST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100210ull);
}
#else
#define CVMX_GSERX_SATA_LANE_RST(block_id) (CVMX_ADD_IO_SEG(0x0001180090100210ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P0_TX_AMP_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P0_TX_AMP_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P0_TX_AMP_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100480ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P0_TX_PREEMPH_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P0_TX_PREEMPH_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100400ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P0_TX_PREEMPH_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100400ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P1_TX_AMP_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P1_TX_AMP_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800901004A0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P1_TX_AMP_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800901004A0ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_P1_TX_PREEMPH_GENX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((((offset >= 1) && (offset <= 3))) && ((block_id == 0))))))
		cvmx_warn("CVMX_GSERX_SATA_P1_TX_PREEMPH_GENX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100420ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8;
}
#else
#define CVMX_GSERX_SATA_P1_TX_PREEMPH_GENX(offset, block_id) (CVMX_ADD_IO_SEG(0x0001180090100420ull) + (((offset) & 3) + ((block_id) & 0) * 0x0ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_REF_SSP_EN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_REF_SSP_EN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100600ull);
}
#else
#define CVMX_GSERX_SATA_REF_SSP_EN(block_id) (CVMX_ADD_IO_SEG(0x0001180090100600ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_RX_INVERT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_RX_INVERT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100218ull);
}
#else
#define CVMX_GSERX_SATA_RX_INVERT(block_id) (CVMX_ADD_IO_SEG(0x0001180090100218ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_SSC_CLK_SEL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_SSC_CLK_SEL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100238ull);
}
#else
#define CVMX_GSERX_SATA_SSC_CLK_SEL(block_id) (CVMX_ADD_IO_SEG(0x0001180090100238ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_SSC_EN(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_SSC_EN(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100228ull);
}
#else
#define CVMX_GSERX_SATA_SSC_EN(block_id) (CVMX_ADD_IO_SEG(0x0001180090100228ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_SSC_RANGE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_SSC_RANGE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100230ull);
}
#else
#define CVMX_GSERX_SATA_SSC_RANGE(block_id) (CVMX_ADD_IO_SEG(0x0001180090100230ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_STATUS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_STATUS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100200ull);
}
#else
#define CVMX_GSERX_SATA_STATUS(block_id) (CVMX_ADD_IO_SEG(0x0001180090100200ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SATA_TX_INVERT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN70XX) && ((block_id == 0)))))
		cvmx_warn("CVMX_GSERX_SATA_TX_INVERT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090100220ull);
}
#else
#define CVMX_GSERX_SATA_TX_INVERT(block_id) (CVMX_ADD_IO_SEG(0x0001180090100220ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SLICEX_PX_MODE(unsigned long a, unsigned long b, unsigned long c)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((a <= 13)) && ((b <= 1)) && ((c <= 11))))))
		cvmx_warn("CVMX_GSERX_SLICEX_PX_MODE(%lu,%lu,%lu) is invalid on this chip\n", a, b, c);
	return CVMX_ADD_IO_SEG(0x0001180090560228ull) + ((a) << 24) + ((b) << 20) + ((c) << 3);
}
#else
#define CVMX_GSERX_SLICEX_PX_MODE(a, b, c) (CVMX_ADD_IO_SEG(0x0001180090560228ull) + ((a) << 24) + ((b) << 20) + ((c) << 3))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SPD(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_SPD(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000088ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_SPD(block_id) (CVMX_ADD_IO_SEG(0x0001180090000088ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_SRST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_SRST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000090ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_SRST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000090ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_TX_PSTATE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_TX_PSTATE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000120ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_TX_PSTATE(block_id) (CVMX_ADD_IO_SEG(0x0001180090000120ull) + ((block_id) & 15) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_GSERX_TX_VBOOST(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 13)))))
		cvmx_warn("CVMX_GSERX_TX_VBOOST(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x0001180090000130ull) + ((block_id) & 15) * 0x1000000ull;
}
#else
#define CVMX_GSERX_TX_VBOOST(block_id) (CVMX_ADD_IO_SEG(0x0001180090000130ull) + ((block_id) & 15) * 0x1000000ull)
#endif

/**
 * cvmx_gser#_ana_atest
 */
union cvmx_gserx_ana_atest {
	uint64_t u64;
	struct cvmx_gserx_ana_atest_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t ana_dac_b                    : 7;  /**< Used to control the B-side DAC input to the analog test block.
                                                         Note that the QLM0 register is tied to the analog
                                                         test block, for non-OCI links.
                                                         Note that the OCI0 register is tied to the analog
                                                         test block, for OCI links.
                                                         The other QLM GSER_ANA_DAC_B registers are unused. */
	uint64_t ana_dac_a                    : 5;  /**< Used to control A-side DAC input to the analog test block.
                                                         Note that the QLM0 register is tied to the analog
                                                         test block, for non-OCI links.
                                                         Note that the OCI0 register is tied to the analog
                                                         test block, for OCI links.
                                                         The other QLM GSER_ANA_DAC_A registers are unused. */
#else
	uint64_t ana_dac_a                    : 5;
	uint64_t ana_dac_b                    : 7;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_ana_atest_s         cn78xx;
};
typedef union cvmx_gserx_ana_atest cvmx_gserx_ana_atest_t;

/**
 * cvmx_gser#_ana_sel
 */
union cvmx_gserx_ana_sel {
	uint64_t u64;
	struct cvmx_gserx_ana_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t ana_sel                      : 9;  /**< Used to control the adr_global input to the analog test block.
                                                         Note that the QLM0 register is tied to the analog
                                                         test block, for non-OCI links.
                                                         Note that the QLM8 register is tied to the analog
                                                         test block, for OCI links.
                                                         The other QLM GSER_ANA_SEL registers are unused. */
#else
	uint64_t ana_sel                      : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_ana_sel_s           cn78xx;
};
typedef union cvmx_gserx_ana_sel cvmx_gserx_ana_sel_t;

/**
 * cvmx_gser#_br_rx#_ctl
 */
union cvmx_gserx_br_rxx_ctl {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t rxt_swm                      : 1;  /**< Set when RX Base-R Link Training is to be performed under software control. */
	uint64_t rxt_preset                   : 1;  /**< When in SW Base-R Training Mode, this bit is used to determine how to
                                                         set the preset bit. When preset is set, RX training is disabled.
                                                         To perform a preset, set this bit prior to setting training enable.
                                                         Note that it is illegal to set both the preset and initialize bits at the same time.
                                                          1 = Preset is set.  A single CU message is sent to the link partner.
                                                          0 = Preset is clear. */
	uint64_t rxt_initialize               : 1;  /**< When in SW Base-R Training Mode, this bit is used to determine how to
                                                         set the initialize bit the the Coefficient Update Message at the start
                                                         of RX training.
                                                         To perform a initialize, set this bit prior to setting training enable.
                                                         Note that it is illegal to set both the preset and initialize bits at the same time.
                                                          1 = Training starts with initialize set.
                                                          0 = Training starts with initialize clear. */
#else
	uint64_t rxt_initialize               : 1;
	uint64_t rxt_preset                   : 1;
	uint64_t rxt_swm                      : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_br_rxx_ctl_s        cn78xx;
};
typedef union cvmx_gserx_br_rxx_ctl cvmx_gserx_br_rxx_ctl_t;

/**
 * cvmx_gser#_br_rx#_cu
 */
union cvmx_gserx_br_rxx_cu {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_cu_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rxt_cu                       : 9;  /**< When RX Base-R Link Training is being performed under software control,
                                                         This is the Coefficient Update Message to send to the MAC (BGX/OCI). */
#else
	uint64_t rxt_cu                       : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_br_rxx_cu_s         cn78xx;
};
typedef union cvmx_gserx_br_rxx_cu cvmx_gserx_br_rxx_cu_t;

/**
 * cvmx_gser#_br_rx#_eer
 *
 * GSER SW Base-R RX Link Training Equalization Evaluation Request (EER)
 * A write to this register will perform a Equalization Request to the RAW PCS.
 * A read of this register will return the Equalization Status Message and a valid
 * bit indicating it was updated.
 */
union cvmx_gserx_br_rxx_eer {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_eer_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t rxt_esv                      : 1;  /**< When RX Base-R Link Training is being performed under software control,
                                                         This is the bit indicating that the Equalization Status is valid.  Reading
                                                         this register will clear this bit. */
	uint64_t rxt_esm                      : 14; /**< When RX Base-R Link Training is being performed under software control,
                                                         This is the Equalization Status Message from the RAW PCS.
                                                         bits[13:6]: Figure of merit.
                                                         bits[5:4]:  RX recommended TXPOST direction change.
                                                         bits[3:2]:  RX recommended TXMAIN direction change.
                                                         bits[5:4]:  RX recommended TXPRE direction change. */
#else
	uint64_t rxt_esm                      : 14;
	uint64_t rxt_esv                      : 1;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_br_rxx_eer_s        cn78xx;
};
typedef union cvmx_gserx_br_rxx_eer cvmx_gserx_br_rxx_eer_t;

/**
 * cvmx_gser#_br_rx#_sr
 */
union cvmx_gserx_br_rxx_sr {
	uint64_t u64;
	struct cvmx_gserx_br_rxx_sr_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t rxt_sr                       : 6;  /**< When RX Base-R Link Training is being performed under software control,
                                                         This is the Status Response Message from the Link Partner. */
#else
	uint64_t rxt_sr                       : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_br_rxx_sr_s         cn78xx;
};
typedef union cvmx_gserx_br_rxx_sr cvmx_gserx_br_rxx_sr_t;

/**
 * cvmx_gser#_br_tx#_ctl
 */
union cvmx_gserx_br_txx_ctl {
	uint64_t u64;
	struct cvmx_gserx_br_txx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t txt_swm                      : 1;  /**< Set when TX Base-R Link Training is to be performed under software control. */
#else
	uint64_t txt_swm                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_br_txx_ctl_s        cn78xx;
};
typedef union cvmx_gserx_br_txx_ctl cvmx_gserx_br_txx_ctl_t;

/**
 * cvmx_gser#_br_tx#_cu
 */
union cvmx_gserx_br_txx_cu {
	uint64_t u64;
	struct cvmx_gserx_br_txx_cu_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t txt_cu                       : 9;  /**< When in SW TX Base-R Link Training, this is the Coefficient Update
                                                         message from the link partner. */
#else
	uint64_t txt_cu                       : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_br_txx_cu_s         cn78xx;
};
typedef union cvmx_gserx_br_txx_cu cvmx_gserx_br_txx_cu_t;

/**
 * cvmx_gser#_br_tx#_cur
 */
union cvmx_gserx_br_txx_cur {
	uint64_t u64;
	struct cvmx_gserx_br_txx_cur_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t txt_cur                      : 14; /**< When in SW TX Base-R Link Training, this is the Coefficient Update
                                                         to be written to the RAW PCS.
                                                         bits 13:9: TX_POST[4:0]
                                                         bits 8:4:  TX_SWING[4:0]
                                                         bits 3:0:  TX_PRE[4:0] */
#else
	uint64_t txt_cur                      : 14;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_br_txx_cur_s        cn78xx;
};
typedef union cvmx_gserx_br_txx_cur cvmx_gserx_br_txx_cur_t;

/**
 * cvmx_gser#_br_tx#_sr
 */
union cvmx_gserx_br_txx_sr {
	uint64_t u64;
	struct cvmx_gserx_br_txx_sr_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t txt_sr                       : 6;  /**< When in SW TX Base-R Link Training, this is the Status Response
                                                         to be sent to the link partner.  Writing this message will cause
                                                         a new SR message to be sent to the Mac (BGX/OCI) to be forwarded
                                                         to the link partner. */
#else
	uint64_t txt_sr                       : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_br_txx_sr_s         cn78xx;
};
typedef union cvmx_gserx_br_txx_sr cvmx_gserx_br_txx_sr_t;

/**
 * cvmx_gser#_cfg
 */
union cvmx_gserx_cfg {
	uint64_t u64;
	struct cvmx_gserx_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t bgx_quad                     : 1;  /**< For non-OCI links, indicates the BGX is
                                                         in quad aggregation mode when [BGX] is also set.
                                                         A single controller is used for all 4 lanes.
                                                         For OCI links this bit has no meaning. */
	uint64_t bgx_dual                     : 1;  /**< For non-OCI links, indicates the BGX is
                                                         in dual aggregation mode when [BGX] is also set.
                                                         A single controller is used for lanes 0 & 1 and
                                                         another controller is used for lanes 2 & 3.
                                                         For OCI links this bit has no meaning. */
	uint64_t bgx                          : 1;  /**< For non-OCI links, indicates the GSER is configured for BGX mode. For OCI links this bit
                                                         has no meaning. */
	uint64_t ila                          : 1;  /**< For non-OCI links, indicates the GSER is configured for ILK/ILA mode. For OCI links, this
                                                         indicates the GSER is configured for OCI mode. */
	uint64_t pcie                         : 1;  /**< For non-OCI links, indicates the GSER is configured
                                                         for PCIE mode.
                                                         For OCI links this bit has no meaning. */
#else
	uint64_t pcie                         : 1;
	uint64_t ila                          : 1;
	uint64_t bgx                          : 1;
	uint64_t bgx_dual                     : 1;
	uint64_t bgx_quad                     : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_cfg_s               cn78xx;
};
typedef union cvmx_gserx_cfg cvmx_gserx_cfg_t;

/**
 * cvmx_gser#_dbg
 */
union cvmx_gserx_dbg {
	uint64_t u64;
	struct cvmx_gserx_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t rxqtm_on                     : 1;  /**< When asserted, the RX FIFOs are turned on. */
#else
	uint64_t rxqtm_on                     : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dbg_s               cn78xx;
};
typedef union cvmx_gserx_dbg cvmx_gserx_dbg_t;

/**
 * cvmx_gser#_dlm#_loopbk_en
 *
 * DLM0 Tx-to-Rx Loopback Enable.
 *
 */
union cvmx_gserx_dlmx_loopbk_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_loopbk_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t lane1_loopbk_en              : 1;  /**< Lane 1 Tx-to-Rx Loopback Enable.  When this signal is
                                                         asserted, data from the transmit predriver is looped back
                                                         to the receive slivers.  LOS is bypassed and based on the
                                                         txN_en input so that rxN_los = !txN_data_en. */
	uint64_t reserved_1_7                 : 7;
	uint64_t lane0_loopbk_en              : 1;  /**< Lane 0 Tx-to-Rx Loopback Enable.  When this signal is
                                                         asserted, data from the transmit predriver is looped back
                                                         to the receive slivers.  LOS is bypassed and based on the
                                                         txN_en input so that rxN_los = !txN_data_en. */
#else
	uint64_t lane0_loopbk_en              : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t lane1_loopbk_en              : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_loopbk_en_s    cn70xx;
};
typedef union cvmx_gserx_dlmx_loopbk_en cvmx_gserx_dlmx_loopbk_en_t;

/**
 * cvmx_gser#_dlm#_los_bias
 *
 * DLM Loss-of-Signal Detector Threshold Level Control.
 *
 */
union cvmx_gserx_dlmx_los_bias {
	uint64_t u64;
	struct cvmx_gserx_dlmx_los_bias_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t los_bias                     : 3;  /**< A positive, binary bit setting change results in a
                                                         +15mVp incremental change in the LOS threshold.  A negative
                                                         bit setting change results in a -15-mVp incremental change
                                                         in the LOS threshold.  The 3'b000 setting is reserved and
                                                         must not be used.
                                                         0x0: Reserved
                                                         0x1: 120 mV (default CEI)
                                                         0x2: 135 mV (default PCIe/SATA)
                                                         0x3: 150 mV
                                                         0x4:  45 mV
                                                         0x5:  60 mV
                                                         0x6:  75 mV
                                                         0x7:  90 mV */
#else
	uint64_t los_bias                     : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_dlmx_los_bias_s     cn70xx;
};
typedef union cvmx_gserx_dlmx_los_bias cvmx_gserx_dlmx_los_bias_t;

/**
 * cvmx_gser#_dlm#_los_level
 *
 * DLM Loss-of-Signal Sensitivity Level Contol.
 *
 */
union cvmx_gserx_dlmx_los_level {
	uint64_t u64;
	struct cvmx_gserx_dlmx_los_level_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t los_level                    : 5;  /**< Sets the sesitivity level for the Loss-of-Signal
                                                         detector.  This signal must be set to 5'b01001. */
#else
	uint64_t los_level                    : 5;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_dlmx_los_level_s    cn70xx;
};
typedef union cvmx_gserx_dlmx_los_level cvmx_gserx_dlmx_los_level_t;

/**
 * cvmx_gser#_dlm#_misc_status
 *
 * DLM0 Miscellaneous Status.
 *
 */
union cvmx_gserx_dlmx_misc_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_misc_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_uflow                    : 1;  /**< When set, indicates transmit FIFO underflow
                                                         has occured on lane 1. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_uflow                    : 1;  /**< When set, indicates transmit FIFO underflow
                                                         has occured on lane 0. */
#else
	uint64_t tx0_uflow                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_uflow                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_misc_status_s  cn70xx;
};
typedef union cvmx_gserx_dlmx_misc_status cvmx_gserx_dlmx_misc_status_t;

/**
 * cvmx_gser#_dlm#_mpll_en
 *
 * DLM0 PHY PLL Enable.
 *
 */
union cvmx_gserx_dlmx_mpll_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t mpll_en                      : 1;  /**< When deasserted, the MPLL is off and the PHY is in P2 state. */
#else
	uint64_t mpll_en                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_en_s      cn70xx;
};
typedef union cvmx_gserx_dlmx_mpll_en cvmx_gserx_dlmx_mpll_en_t;

/**
 * cvmx_gser#_dlm#_mpll_half_rate
 *
 * DLM MPLL Low-Power Mode Enable.
 *
 */
union cvmx_gserx_dlmx_mpll_half_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_half_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t mpll_half_rate               : 1;  /**< Enables a low-power mode feature for the MPLL block.  This signal
                                                         should be asserted only when the MPLL is operating at a clock rate
                                                         less than or equal to 1.5626 GHz. */
#else
	uint64_t mpll_half_rate               : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_half_rate_s cn70xx;
};
typedef union cvmx_gserx_dlmx_mpll_half_rate cvmx_gserx_dlmx_mpll_half_rate_t;

/**
 * cvmx_gser#_dlm#_mpll_multiplier
 *
 * DLM MPLL Frequency Multiplier Control.
 *
 */
union cvmx_gserx_dlmx_mpll_multiplier {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_multiplier_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t mpll_multiplier              : 7;  /**< Multiples the reference clock to a frequency suitable for
                                                         intended operating speed. */
#else
	uint64_t mpll_multiplier              : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_multiplier_s cn70xx;
};
typedef union cvmx_gserx_dlmx_mpll_multiplier cvmx_gserx_dlmx_mpll_multiplier_t;

/**
 * cvmx_gser#_dlm#_mpll_status
 *
 * DLM PLL Lock Status.
 *
 */
union cvmx_gserx_dlmx_mpll_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_mpll_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t mpll_status                  : 1;  /**< This is the lock status of the PHY PLL.  When asserted,
                                                         it indicates the PHY's MPLL has reached a stable, running
                                                         state. */
#else
	uint64_t mpll_status                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_mpll_status_s  cn70xx;
};
typedef union cvmx_gserx_dlmx_mpll_status cvmx_gserx_dlmx_mpll_status_t;

/**
 * cvmx_gser#_dlm#_phy_reset
 *
 * DLM Core and State Machine Reset.
 *
 */
union cvmx_gserx_dlmx_phy_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_phy_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t phy_reset                    : 1;  /**< Resets the core and all state machines with the exception of the
                                                         reference clock buffer and JTAG interface.  Asserting PHY_RESET
                                                         triggers the assertion of teh Tx and Rx reset signals.  Power
                                                         and clocks are required before deasserting PHY_RESET. */
#else
	uint64_t phy_reset                    : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_phy_reset_s    cn70xx;
};
typedef union cvmx_gserx_dlmx_phy_reset cvmx_gserx_dlmx_phy_reset_t;

/**
 * cvmx_gser#_dlm#_ref_clkdiv2
 *
 * DLM Input Reference Clock Divider Control.
 *
 */
union cvmx_gserx_dlmx_ref_clkdiv2 {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_clkdiv2                  : 1;  /**< If the input reference clock is greater than 100Mhz, this signal must
                                                         be asserted.  The reference clock frequency is then divided by 2 to
                                                         keep it in the range required by the MPLL. */
#else
	uint64_t ref_clkdiv2                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_clkdiv2_s  cn70xx;
};
typedef union cvmx_gserx_dlmx_ref_clkdiv2 cvmx_gserx_dlmx_ref_clkdiv2_t;

/**
 * cvmx_gser#_dlm#_ref_ssp_en
 *
 * DLM0 Reference Clock Enable for the PHY.
 *
 */
union cvmx_gserx_dlmx_ref_ssp_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_ssp_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_ssp_en                   : 1;  /**< This signal should always be set. */
#else
	uint64_t ref_ssp_en                   : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_ssp_en_s   cn70xx;
};
typedef union cvmx_gserx_dlmx_ref_ssp_en cvmx_gserx_dlmx_ref_ssp_en_t;

/**
 * cvmx_gser#_dlm#_ref_use_pad
 *
 * DLM Select Reference Clock.
 *
 */
union cvmx_gserx_dlmx_ref_use_pad {
	uint64_t u64;
	struct cvmx_gserx_dlmx_ref_use_pad_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_use_pad                  : 1;  /**< When asserted, selects the external ref_pad_clk_[p,m]
                                                         inputs as the reference clock sourse.  When deasserted,
                                                         ref_alt_clk_[p,m] are selected from an on-chip
                                                         source of the reference clock. */
#else
	uint64_t ref_use_pad                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_ref_use_pad_s  cn70xx;
};
typedef union cvmx_gserx_dlmx_ref_use_pad cvmx_gserx_dlmx_ref_use_pad_t;

/**
 * cvmx_gser#_dlm#_refclk_sel
 *
 * DLM Reference Clock Select.
 *
 */
union cvmx_gserx_dlmx_refclk_sel {
	uint64_t u64;
	struct cvmx_gserx_dlmx_refclk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t refclk_sel                   : 1;  /**< When clear, selects common reference clock 0.
                                                         When set, selects common reference clock 1.
                                                         GSER0_DLMn_REF_USE_PAD[REF_USE_PAD] must be clear
                                                         to select either common reference clock. */
#else
	uint64_t refclk_sel                   : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_refclk_sel_s   cn70xx;
};
typedef union cvmx_gserx_dlmx_refclk_sel cvmx_gserx_dlmx_refclk_sel_t;

/**
 * cvmx_gser#_dlm#_rx_data_en
 *
 * DLM Receiver Enable.
 *
 */
union cvmx_gserx_dlmx_rx_data_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_data_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_data_en                  : 1;  /**< Enables the clock and data recovery logic fir Lane 1. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_data_en                  : 1;  /**< Enables the clock and data recovery logic for Lane 0. */
#else
	uint64_t rx0_data_en                  : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_data_en                  : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_data_en_s   cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_data_en cvmx_gserx_dlmx_rx_data_en_t;

/**
 * cvmx_gser#_dlm#_rx_eq
 *
 * DLM Receiver Equalization Setting.
 *
 */
union cvmx_gserx_dlmx_rx_eq {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_eq_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_11_63               : 53;
	uint64_t rx1_eq                       : 3;  /**< Selects the amount of equalization in the Lane 1 receiver. */
	uint64_t reserved_3_7                 : 5;
	uint64_t rx0_eq                       : 3;  /**< Selects the amount of equalization in the Lane 0 receiver. */
#else
	uint64_t rx0_eq                       : 3;
	uint64_t reserved_3_7                 : 5;
	uint64_t rx1_eq                       : 3;
	uint64_t reserved_11_63               : 53;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_eq_s        cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_eq cvmx_gserx_dlmx_rx_eq_t;

/**
 * cvmx_gser#_dlm#_rx_los_en
 *
 * DLM Loss of Signal Detector Enable.
 *
 */
union cvmx_gserx_dlmx_rx_los_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_los_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_los_en                   : 1;  /**< Lane 1 Loss of Signal Detector Enable. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_los_en                   : 1;  /**< Lane 0 Loss of Signal Detector Enable. */
#else
	uint64_t rx0_los_en                   : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_los_en                   : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_los_en_s    cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_los_en cvmx_gserx_dlmx_rx_los_en_t;

/**
 * cvmx_gser#_dlm#_rx_pll_en
 *
 * DLM0 DPLL Enable.
 *
 */
union cvmx_gserx_dlmx_rx_pll_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_pll_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_pll_en                   : 1;  /**< Lane 1 Receiver DPLL Enable. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_pll_en                   : 1;  /**< Lane 0 Receiver DPLL Enable. */
#else
	uint64_t rx0_pll_en                   : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_pll_en                   : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_pll_en_s    cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_pll_en cvmx_gserx_dlmx_rx_pll_en_t;

/**
 * cvmx_gser#_dlm#_rx_rate
 *
 * DLM0 Rx Data Rate.
 *
 */
union cvmx_gserx_dlmx_rx_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t rx1_rate                     : 2;  /**< Lane 1 Rx Data Rate
                                                         - 00: mpll_baud_clk
                                                         - 01: mpll_baud_clk / 2
                                                         - 10: mpll_baud_clk / 4
                                                         - 11: Not Supported */
	uint64_t reserved_2_7                 : 6;
	uint64_t rx0_rate                     : 2;  /**< Lane 0 Rx Data Rate
                                                         - 00: mpll_baud_clk
                                                         - 01: mpll_baud_clk / 2
                                                         - 10: mpll_baud_clk / 4
                                                         - 11: Not Supported */
#else
	uint64_t rx0_rate                     : 2;
	uint64_t reserved_2_7                 : 6;
	uint64_t rx1_rate                     : 2;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_rate_s      cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_rate cvmx_gserx_dlmx_rx_rate_t;

/**
 * cvmx_gser#_dlm#_rx_reset
 *
 * DLM0 Receiver Reset.
 *
 */
union cvmx_gserx_dlmx_rx_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_reset                    : 1;  /**< Lane 1 Receiver Reset. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_reset                    : 1;  /**< Lane 0 Receiver Reset. */
#else
	uint64_t rx0_reset                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_reset                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_reset_s     cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_reset cvmx_gserx_dlmx_rx_reset_t;

/**
 * cvmx_gser#_dlm#_rx_status
 *
 * DLM Receive DPLL State Indicator.
 *
 */
union cvmx_gserx_dlmx_rx_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_status                   : 1;  /**< Indicates the current state of the Lane 1 receiver DPLL and clock.
                                                         When cleared, rxN_clk can be disabled or not running at its
                                                         target rate. */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_status                   : 1;  /**< Indicates the current state of the Lane 0 receiver DPLL and clock.
                                                         When cleared, rxN_clk can be disabled or not running at its
                                                         target rate. */
#else
	uint64_t rx0_status                   : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_status                   : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_status_s    cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_status cvmx_gserx_dlmx_rx_status_t;

/**
 * cvmx_gser#_dlm#_rx_term_en
 *
 * DLM0 PMA Receiver Termination.
 *
 */
union cvmx_gserx_dlmx_rx_term_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_rx_term_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t rx1_term_en                  : 1;  /**< Lane 1 PMA Receiver Termination.
                                                         - 0: Terminations removed
                                                         - 1: Terminations present */
	uint64_t reserved_1_7                 : 7;
	uint64_t rx0_term_en                  : 1;  /**< Lane 0 PMA Receiver Termination.
                                                         - 0: Terminations removed
                                                         - 1: Terminations present */
#else
	uint64_t rx0_term_en                  : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t rx1_term_en                  : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_rx_term_en_s   cn70xx;
};
typedef union cvmx_gserx_dlmx_rx_term_en cvmx_gserx_dlmx_rx_term_en_t;

/**
 * cvmx_gser#_dlm#_test_bypass
 *
 * DLM Test Bypass.
 *
 */
union cvmx_gserx_dlmx_test_bypass {
	uint64_t u64;
	struct cvmx_gserx_dlmx_test_bypass_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t test_bypass                  : 1;  /**< When asserted, all circuits Power-Down but leave Reference Clock
                                                         Active. */
#else
	uint64_t test_bypass                  : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_test_bypass_s  cn70xx;
};
typedef union cvmx_gserx_dlmx_test_bypass cvmx_gserx_dlmx_test_bypass_t;

/**
 * cvmx_gser#_dlm#_test_powerdown
 *
 * DLM Test Powerdown.
 *
 */
union cvmx_gserx_dlmx_test_powerdown {
	uint64_t u64;
	struct cvmx_gserx_dlmx_test_powerdown_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t test_powerdown               : 1;  /**< When asserted, Powers down all circuitry in the PHY for IDDQ testing. */
#else
	uint64_t test_powerdown               : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_dlmx_test_powerdown_s cn70xx;
};
typedef union cvmx_gserx_dlmx_test_powerdown cvmx_gserx_dlmx_test_powerdown_t;

/**
 * cvmx_gser#_dlm#_tx_amplitude
 *
 * DLM0 Tx Amplitude (Full Swing Mode).
 *
 */
union cvmx_gserx_dlmx_tx_amplitude {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_amplitude_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t tx1_amplitude                : 7;  /**< This static value sets the lanuch amplitude of the Lane 1 transmitter
                                                         when pipeP_tx_swing is set to 0x7f (default state). */
	uint64_t reserved_7_7                 : 1;
	uint64_t tx0_amplitude                : 7;  /**< This static value sets the lanuch amplitude of the Lane 0 transmitter
                                                         when pipeP_tx_swing is set to 0x7f (default state). */
#else
	uint64_t tx0_amplitude                : 7;
	uint64_t reserved_7_7                 : 1;
	uint64_t tx1_amplitude                : 7;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_amplitude_s cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_amplitude cvmx_gserx_dlmx_tx_amplitude_t;

/**
 * cvmx_gser#_dlm#_tx_cm_en
 *
 * DLM0 Transmit Common-Mode Control Enable.
 *
 */
union cvmx_gserx_dlmx_tx_cm_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_cm_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_cm_en                    : 1;  /**< Enables the Lane 1 transmitter's common mode hold circuitry. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_cm_en                    : 1;  /**< Enables the lane 0 transmitter's common mode hold circuitry. */
#else
	uint64_t tx0_cm_en                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_cm_en                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_cm_en_s     cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_cm_en cvmx_gserx_dlmx_tx_cm_en_t;

/**
 * cvmx_gser#_dlm#_tx_data_en
 *
 * DLM0 Transmit Driver Enable.
 *
 */
union cvmx_gserx_dlmx_tx_data_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_data_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_data_en                  : 1;  /**< Enables the Lane 1 primary transmitter driver for serial data. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_data_en                  : 1;  /**< Enables the Lane 0 primary transmitter driver for serial data. */
#else
	uint64_t tx0_data_en                  : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_data_en                  : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_data_en_s   cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_data_en cvmx_gserx_dlmx_tx_data_en_t;

/**
 * cvmx_gser#_dlm#_tx_en
 *
 * DLM Transmit Clocking and Data Sampling Enable.
 *
 */
union cvmx_gserx_dlmx_tx_en {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_en                       : 1;  /**< Enables the Lane 1 transmit clock path and Tx word alignment. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_en                       : 1;  /**< Enables the Lane 0 transmit clock path and Tx word alignment. */
#else
	uint64_t tx0_en                       : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_en                       : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_en_s        cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_en cvmx_gserx_dlmx_tx_en_t;

/**
 * cvmx_gser#_dlm#_tx_preemph
 *
 * DLM0 Tx Deemphasis.
 *
 */
union cvmx_gserx_dlmx_tx_preemph {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_preemph_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t tx1_preemph                  : 7;  /**< Sets the Lane 1 Tx driver de-emphasis value to meet the Tx eye mask. */
	uint64_t reserved_7_7                 : 1;
	uint64_t tx0_preemph                  : 7;  /**< Sets the Lane 0 Tx driver de-emphasis value to meet the Tx eye mask. */
#else
	uint64_t tx0_preemph                  : 7;
	uint64_t reserved_7_7                 : 1;
	uint64_t tx1_preemph                  : 7;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_preemph_s   cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_preemph cvmx_gserx_dlmx_tx_preemph_t;

/**
 * cvmx_gser#_dlm#_tx_rate
 *
 * DLM0 Tx Data Rate.
 *
 */
union cvmx_gserx_dlmx_tx_rate {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_rate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t tx1_rate                     : 2;  /**< Selects the Lane 1 baud rate for the transmit path.
                                                         - 00: baud
                                                         - 01: baud / 2
                                                         - 10: baud / 4
                                                         - 11: Not supported */
	uint64_t reserved_2_7                 : 6;
	uint64_t tx0_rate                     : 2;  /**< Selects the Lane 0 baud rate for the transmit path.
                                                         - 00: baud
                                                         - 01: baud / 2
                                                         - 10: baud / 4
                                                         - 11: Not supported */
#else
	uint64_t tx0_rate                     : 2;
	uint64_t reserved_2_7                 : 6;
	uint64_t tx1_rate                     : 2;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_rate_s      cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_rate cvmx_gserx_dlmx_tx_rate_t;

/**
 * cvmx_gser#_dlm#_tx_reset
 *
 * DLM0 Tx Reset.
 *
 */
union cvmx_gserx_dlmx_tx_reset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_reset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t tx1_reset                    : 1;  /**< Resets all Lane 1 transmitter settings and state machines. */
	uint64_t reserved_1_7                 : 7;
	uint64_t tx0_reset                    : 1;  /**< Resets all Lane 0 transmitter settings and state machines. */
#else
	uint64_t tx0_reset                    : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t tx1_reset                    : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_reset_s     cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_reset cvmx_gserx_dlmx_tx_reset_t;

/**
 * cvmx_gser#_dlm#_tx_status
 *
 * DLM Transmit Common Mode Control Status.
 *
 */
union cvmx_gserx_dlmx_tx_status {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t tx1_cm_status                : 1;  /**< When asserted, the Lane 1 transmitter differential pair is held to half
                                                         of vptxN durring an electrical IDLE.  Otherwise, weakly held to
                                                         ground through a high impedance connection. */
	uint64_t tx1_status                   : 1;  /**< Signals when the Lane 1 transmitter is ready to properly sample the
                                                         incoming data for transmission. */
	uint64_t reserved_2_7                 : 6;
	uint64_t tx0_cm_status                : 1;  /**< When asserted, the Lane 0 transmitter differential pair is held to half
                                                         of vptxN durring an electrical IDLE.  Otherwise, weakly held to
                                                         ground through a high impedance connection. */
	uint64_t tx0_status                   : 1;  /**< Signals when the Lane 0 transmitter is ready to properly sample the
                                                         incoming data for transmission. */
#else
	uint64_t tx0_status                   : 1;
	uint64_t tx0_cm_status                : 1;
	uint64_t reserved_2_7                 : 6;
	uint64_t tx1_status                   : 1;
	uint64_t tx1_cm_status                : 1;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_status_s    cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_status cvmx_gserx_dlmx_tx_status_t;

/**
 * cvmx_gser#_dlm#_tx_term_offset
 *
 * DLM Transmitter Termination Offset.
 *
 */
union cvmx_gserx_dlmx_tx_term_offset {
	uint64_t u64;
	struct cvmx_gserx_dlmx_tx_term_offset_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t tx1_term_offset              : 5;  /**< Applies an offset to the Lande 1 resistor calibration value.  Not to be
                                                         used during normal operation. */
	uint64_t reserved_5_7                 : 3;
	uint64_t tx0_term_offset              : 5;  /**< Applies an offset to the Lane 0 resistor calibration value.  Not to be
                                                         used during normal operation. */
#else
	uint64_t tx0_term_offset              : 5;
	uint64_t reserved_5_7                 : 3;
	uint64_t tx1_term_offset              : 5;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_gserx_dlmx_tx_term_offset_s cn70xx;
};
typedef union cvmx_gserx_dlmx_tx_term_offset cvmx_gserx_dlmx_tx_term_offset_t;

/**
 * cvmx_gser#_lane#_p#_mode_0
 *
 * RAW PCS Per Lane Global Settings Mode 0 Register
 * Per Lane registers are specific to a paticular lane.
 * The Protocol selects the specific protocol register as
 * enumerated by GSER_LMODE_E.
 */
union cvmx_gserx_lanex_px_mode_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_px_mode_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t ctle                         : 2;  /**< CTLE pole value. */
	uint64_t pcie                         : 1;  /**< Selects between RX terminations.
                                                         - 0: pcs_sds_rx_terminate_to_vdda
                                                         - 1: VSS */
	uint64_t tx_ldiv                      : 2;  /**< Configues clock divider used to determine the transmit rate. */
	uint64_t rx_ldiv                      : 2;  /**< Configues clock divider used to determine the receive rate. */
	uint64_t srate                        : 3;  /**< Used to generate strobe to effectively divide the clock down
                                                         to a slower rate. */
	uint64_t op_range                     : 1;  /**< When set DFE is enabled.  Otherwise DFE is disabled. */
	uint64_t tx_mode                      : 2;  /**< TX Data Width:
                                                         0x0 = 8-bit  raw data (not supported).
                                                         0x1 = 10-bit raw data (not supported).
                                                         0x2 = 16-bit raw data (not supported).
                                                         0x3 = 20-bit raw data. */
	uint64_t rx_mode                      : 2;  /**< RX Data Width:
                                                         0x0 = 8-bit  raw data (not supported).
                                                         0x1 = 10-bit raw data (not supported).
                                                         0x2 = 16-bit raw data (not supported).
                                                         0x3 = 20-bit raw data. */
#else
	uint64_t rx_mode                      : 2;
	uint64_t tx_mode                      : 2;
	uint64_t op_range                     : 1;
	uint64_t srate                        : 3;
	uint64_t rx_ldiv                      : 2;
	uint64_t tx_ldiv                      : 2;
	uint64_t pcie                         : 1;
	uint64_t ctle                         : 2;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_lanex_px_mode_0_s   cn78xx;
};
typedef union cvmx_gserx_lanex_px_mode_0 cvmx_gserx_lanex_px_mode_0_t;

/**
 * cvmx_gser#_lane#_p#_mode_1
 *
 * Per Lane registers are specific to a paticular lane.
 * The Protocol selects the specific protocol register as
 * enumerated by GSER_LMODE_E.
 */
union cvmx_gserx_lanex_px_mode_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_px_mode_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t vma_kr_sel                   : 1;  /**< 0 = Disabled.  Coarse step adaptation selected.
                                                         1 = Enabled.  Fine step adaptation selected. */
	uint64_t vma_mm                       : 1;  /**< 0 = Adaptive DFE.
                                                         1 = Manual DFE. */
	uint64_t cdr_fgain                    : 4;  /**< CDR frequency gain. */
	uint64_t ph_acc_adj                   : 10; /**< Phase accumulator adjust. */
#else
	uint64_t ph_acc_adj                   : 10;
	uint64_t cdr_fgain                    : 4;
	uint64_t vma_mm                       : 1;
	uint64_t vma_kr_sel                   : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_px_mode_1_s   cn78xx;
};
typedef union cvmx_gserx_lanex_px_mode_1 cvmx_gserx_lanex_px_mode_1_t;

/**
 * cvmx_gser#_lane#_vma_coarse_ctrl_0
 *
 * RAW PCS Per Lane Coarse VMA Control Configuration 0 Register
 * Per Lane registers are specific to a paticular lane.
 */
union cvmx_gserx_lanex_vma_coarse_ctrl_0 {
	uint64_t u64;
	struct cvmx_gserx_lanex_vma_coarse_ctrl_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t iq_max                       : 4;  /**< Slice DLL IQ Maximum Value. */
	uint64_t iq_min                       : 4;  /**< Slice DLL IQ Minimum Value. */
	uint64_t iq_step                      : 2;  /**< Slice DLL IQ step size. */
	uint64_t window_wait                  : 3;  /**< Adaptation window wait setting. */
	uint64_t lms_wait                     : 3;  /**< LMS wait time setting used to control the number
                                                         of samples taken during the collection of
                                                         statistics. */
#else
	uint64_t lms_wait                     : 3;
	uint64_t window_wait                  : 3;
	uint64_t iq_step                      : 2;
	uint64_t iq_min                       : 4;
	uint64_t iq_max                       : 4;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_lanex_vma_coarse_ctrl_0_s cn78xx;
};
typedef union cvmx_gserx_lanex_vma_coarse_ctrl_0 cvmx_gserx_lanex_vma_coarse_ctrl_0_t;

/**
 * cvmx_gser#_lane#_vma_coarse_ctrl_1
 *
 * RAW PCS Per Lane Coarse VMA Control Configuration 1 Register
 * Per Lane registers are specific to a paticular lane.
 */
union cvmx_gserx_lanex_vma_coarse_ctrl_1 {
	uint64_t u64;
	struct cvmx_gserx_lanex_vma_coarse_ctrl_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t ctle_pmax                    : 4;  /**< RX CTLE peak maximum value. */
	uint64_t ctle_pmin                    : 4;  /**< RX CTLE peak minimum value. */
	uint64_t ctle_pstep                   : 2;  /**< CTLE peak step size. */
#else
	uint64_t ctle_pstep                   : 2;
	uint64_t ctle_pmin                    : 4;
	uint64_t ctle_pmax                    : 4;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lanex_vma_coarse_ctrl_1_s cn78xx;
};
typedef union cvmx_gserx_lanex_vma_coarse_ctrl_1 cvmx_gserx_lanex_vma_coarse_ctrl_1_t;

/**
 * cvmx_gser#_lane#_vma_coarse_ctrl_2
 *
 * Per Lane registers are specific to a paticular lane.
 *
 */
union cvmx_gserx_lanex_vma_coarse_ctrl_2 {
	uint64_t u64;
	struct cvmx_gserx_lanex_vma_coarse_ctrl_2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t pctle_gmax                   : 4;  /**< RX PRE-CTLE gain maximum value. */
	uint64_t pctle_gmin                   : 4;  /**< RX PRE-CTLE gain minimum value. */
	uint64_t pctle_gstep                  : 2;  /**< CTLE PRE-peak gain step size. */
#else
	uint64_t pctle_gstep                  : 2;
	uint64_t pctle_gmin                   : 4;
	uint64_t pctle_gmax                   : 4;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_gserx_lanex_vma_coarse_ctrl_2_s cn78xx;
};
typedef union cvmx_gserx_lanex_vma_coarse_ctrl_2 cvmx_gserx_lanex_vma_coarse_ctrl_2_t;

/**
 * cvmx_gser#_lane_lpbken
 */
union cvmx_gserx_lane_lpbken {
	uint64_t u64;
	struct cvmx_gserx_lane_lpbken_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t lpbken                       : 4;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         ties to the mac_pcs_lane_loopnk_en[3:0] pins of the RAW PCS.
                                                         When asserted in P0 state, Tx-to-Rx serial
                                                         loopback is activated on lane X. */
#else
	uint64_t lpbken                       : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_lane_lpbken_s       cn78xx;
};
typedef union cvmx_gserx_lane_lpbken cvmx_gserx_lane_lpbken_t;

/**
 * cvmx_gser#_lane_mode
 */
union cvmx_gserx_lane_mode {
	uint64_t u64;
	struct cvmx_gserx_lane_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t lmode                        : 4;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         ties to the mac_pcs_lane_mode[3:0] pins of the RAW PCS.
                                                         Enumerated by GSER_LMODE_E. */
#else
	uint64_t lmode                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_lane_mode_s         cn78xx;
};
typedef union cvmx_gserx_lane_mode cvmx_gserx_lane_mode_t;

/**
 * cvmx_gser#_lane_poff
 */
union cvmx_gserx_lane_poff {
	uint64_t u64;
	struct cvmx_gserx_lane_poff_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t lpoff                        : 4;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         ties to the mac_pcs_lane_pwr_off[3:0] pins of the RAW PCS.
                                                         Control signal to power down lane X. */
#else
	uint64_t lpoff                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_lane_poff_s         cn78xx;
};
typedef union cvmx_gserx_lane_poff cvmx_gserx_lane_poff_t;

/**
 * cvmx_gser#_lane_srst
 */
union cvmx_gserx_lane_srst {
	uint64_t u64;
	struct cvmx_gserx_lane_srst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t lsrst                        : 4;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         ties to the mac_pcs_lane_soft_reset[3:0] pins of the RAW PCS.
                                                         Allows reset to Lane X. */
#else
	uint64_t lsrst                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_lane_srst_s         cn78xx;
};
typedef union cvmx_gserx_lane_srst cvmx_gserx_lane_srst_t;

/**
 * cvmx_gser#_pcie_pcs_clk_req
 *
 * PCIE PIPE Clock Required
 *
 */
union cvmx_gserx_pcie_pcs_clk_req {
	uint64_t u64;
	struct cvmx_gserx_pcie_pcs_clk_req_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t clk_req                      : 1;  /**< When asserted, indicates that the external logic requires the PHY's
                                                         PCLK to remain active, preventing the PIPE PCS from powering off
                                                         that clock while in the P2 state.
                                                         Note, the PCS hangs if this bit is asserted when a Fundamental Reset
                                                         is issued to the PEM. */
#else
	uint64_t clk_req                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pcs_clk_req_s  cn70xx;
};
typedef union cvmx_gserx_pcie_pcs_clk_req cvmx_gserx_pcie_pcs_clk_req_t;

/**
 * cvmx_gser#_pcie_pipe#_txdeemph
 *
 * PCIE PIPE Transmitter De-emphasis.
 *
 */
union cvmx_gserx_pcie_pipex_txdeemph {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipex_txdeemph_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pipe_txdeemph                : 1;  /**< Selects Transmitter De-emphasis.
                                                         - 0: enabled (6 dB / 3.5 dB)
                                                         - 1: No de-emphasis */
#else
	uint64_t pipe_txdeemph                : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipex_txdeemph_s cn70xx;
};
typedef union cvmx_gserx_pcie_pipex_txdeemph cvmx_gserx_pcie_pipex_txdeemph_t;

/**
 * cvmx_gser#_pcie_pipe_com_clk
 *
 * PCIE Select Common Clock Mode for Receive Data Path.
 *
 */
union cvmx_gserx_pcie_pipe_com_clk {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_com_clk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t com_clk                      : 1;  /**< When both ends of a PCIe link share a common reference clock, the
                                                         latency through the receiver's elasticity buffer can be shorter,
                                                         because no frequency offset exists between the two ends of the link.
                                                         Assert this control only if all physical lanes of the PHY are
                                                         guaranteed to be connected to links that share a common reference
                                                         clock. */
#else
	uint64_t com_clk                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_com_clk_s cn70xx;
};
typedef union cvmx_gserx_pcie_pipe_com_clk cvmx_gserx_pcie_pipe_com_clk_t;

/**
 * cvmx_gser#_pcie_pipe_crst
 *
 * PCIE PIPE Cold Reset.
 *
 */
union cvmx_gserx_pcie_pipe_crst {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_crst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pipe_crst                    : 1;  /**< PCIE PIPE Async Cold Reset Contol. */
#else
	uint64_t pipe_crst                    : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_crst_s    cn70xx;
};
typedef union cvmx_gserx_pcie_pipe_crst cvmx_gserx_pcie_pipe_crst_t;

/**
 * cvmx_gser#_pcie_pipe_port_loopbk
 *
 * PCIE Tx-to-Rx Loopback Enable.
 *
 */
union cvmx_gserx_pcie_pipe_port_loopbk {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE3 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
	uint64_t pipe2_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE2 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
	uint64_t pipe1_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE1 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
	uint64_t pipe0_loopbk                 : 1;  /**< When this signal is asserted, data from the PIPE0 transmit predriver
                                                         is looped back to the receive slicers.  LOS is bypassed and based on
                                                         the TxN_en input so that rxN_los !txN_data_en. */
#else
	uint64_t pipe0_loopbk                 : 1;
	uint64_t pipe1_loopbk                 : 1;
	uint64_t pipe2_loopbk                 : 1;
	uint64_t pipe3_loopbk                 : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_port_loopbk_s cn70xx;
};
typedef union cvmx_gserx_pcie_pipe_port_loopbk cvmx_gserx_pcie_pipe_port_loopbk_t;

/**
 * cvmx_gser#_pcie_pipe_port_sel
 *
 * PCIE PIPE Enable Request.
 *
 */
union cvmx_gserx_pcie_pipe_port_sel {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_port_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t cfg_pem1_dlm2                : 1;  /**< The PIPE/PHY configuration for PEM1 when in 4-Pipe Mode.
                                                          Used as status for determining which DLM PEM1 is tied to.
                                                          This bit should not be set in Single Pipe or 2-Pipe Mode.
                                                         - 0: PEM1 is tied to DLM1.  This is 3x1 PCIe mode when all 4 PIPES are enabled.
                                                         - 1: PEM1 is tied to DLM2.  This is 2x1 PCIe mode with SATA */
	uint64_t pipe_port_sel                : 2;  /**< PIPE enable request.  Change only when phy_reset is asserted.
                                                         - 00: Disables all PIPEs
                                                         - 01: Single Pipe Mode. Enables PIPE0 only.
                                                             This is 1x4 PCIe mode.
                                                         - 10: 2-Pipe Mode.  Enables PIPEs 0 and 1.
                                                             This is 2x2 PCIe mode or 1x2 PCIe mode with SATA.
                                                         - 11: 4-Pipe Mode. Enables PIPEs 0, 1, 2, and 3.
                                                             This is 2x1 PCIe mode with SATA or 3x1 PCIe mode. */
#else
	uint64_t pipe_port_sel                : 2;
	uint64_t cfg_pem1_dlm2                : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_port_sel_s cn70xx;
};
typedef union cvmx_gserx_pcie_pipe_port_sel cvmx_gserx_pcie_pipe_port_sel_t;

/**
 * cvmx_gser#_pcie_pipe_rst
 *
 * PCIE PIPE Reset.
 *
 */
union cvmx_gserx_pcie_pipe_rst {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_rst                    : 1;  /**< Pipe 3 Reset.  Setting this bit will put Pipe 3 into reset. */
	uint64_t pipe2_rst                    : 1;  /**< Pipe 2 Reset.  Setting this bit will put Pipe 2 into reset. */
	uint64_t pipe1_rst                    : 1;  /**< Pipe 1 Reset.  Setting this bit will put Pipe 1 into reset. */
	uint64_t pipe0_rst                    : 1;  /**< Pipe 0 Reset.  Setting this bit will put Pipe 0 into reset. */
#else
	uint64_t pipe0_rst                    : 1;
	uint64_t pipe1_rst                    : 1;
	uint64_t pipe2_rst                    : 1;
	uint64_t pipe3_rst                    : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_rst_s     cn70xx;
};
typedef union cvmx_gserx_pcie_pipe_rst cvmx_gserx_pcie_pipe_rst_t;

/**
 * cvmx_gser#_pcie_pipe_rst_sts
 *
 * PCIE PIPE Status Reset.
 *
 */
union cvmx_gserx_pcie_pipe_rst_sts {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_rst_sts_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_rst                    : 1;  /**< Reflects the current state of the pipe3_rst_n which includes
                                                         the rst__pem2_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE3_RST is asserted, no Pipe clocks are generated to PEM3 and
                                                         any RSL reads to the application side registers will time out. */
	uint64_t pipe2_rst                    : 1;  /**< Reflects the current state of the pipe2_rst_n which includes
                                                         the rst__pem2_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE2_RST is asserted, no Pipe clocks are generated to PEM1 and
                                                         any RSL reads to the application side registers will time out. */
	uint64_t pipe1_rst                    : 1;  /**< Reflects the current state of the pipe1_rst_n which includes
                                                         the rst__pem1_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE1_RST is asserted, no Pipe clocks are generated to PEM1 and
                                                         any RSL reads to the application side registers will time out. */
	uint64_t pipe0_rst                    : 1;  /**< Reflects the current state of the pipe0_rst_n which includes
                                                         the rst__pem0_pcs_rst_n term from the reset controller.  Note that
                                                         when PIPE0_RST is asserted, no Pipe clocks are generated to PEM0 and
                                                         any RSL reads to the application side registers will time out. */
#else
	uint64_t pipe0_rst                    : 1;
	uint64_t pipe1_rst                    : 1;
	uint64_t pipe2_rst                    : 1;
	uint64_t pipe3_rst                    : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_rst_sts_s cn70xx;
};
typedef union cvmx_gserx_pcie_pipe_rst_sts cvmx_gserx_pcie_pipe_rst_sts_t;

/**
 * cvmx_gser#_pcie_pipe_status
 *
 * PCIE PIPE Status.
 *
 */
union cvmx_gserx_pcie_pipe_status {
	uint64_t u64;
	struct cvmx_gserx_pcie_pipe_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t pipe3_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
	uint64_t pipe2_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
	uint64_t pipe1_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
	uint64_t pipe0_clkreqn                : 1;  /**< When asserted, indicates that the PCS/PHY layer is in a mode where
                                                         reference clocks are required.  When deasserted, the PIPE PCS is
                                                         powered down into a state where the external reference clocks can
                                                         be turned off. */
#else
	uint64_t pipe0_clkreqn                : 1;
	uint64_t pipe1_clkreqn                : 1;
	uint64_t pipe2_clkreqn                : 1;
	uint64_t pipe3_clkreqn                : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_pcie_pipe_status_s  cn70xx;
};
typedef union cvmx_gserx_pcie_pipe_status cvmx_gserx_pcie_pipe_status_t;

/**
 * cvmx_gser#_pcie_tx_deemph_gen1
 *
 * PCIE Tx De-emphasis at 3.5 dB.
 *
 */
union cvmx_gserx_pcie_tx_deemph_gen1 {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t tx_deemph_gen1               : 6;  /**< This static value sets the launch amplitude of the transmitter
                                                         when pipeP_tx_swing is set to 0x0 (default state). Used for
                                                         tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_deemph_gen1               : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen1_s cn70xx;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen1 cvmx_gserx_pcie_tx_deemph_gen1_t;

/**
 * cvmx_gser#_pcie_tx_deemph_gen2_3p5db
 *
 * PCIE Tx De-emphasis at 3.5 dB.
 *
 */
union cvmx_gserx_pcie_tx_deemph_gen2_3p5db {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t tx_deemph_gen2_3p5db         : 6;  /**< This static value sets the Tx driver deemphasis value in the case where
                                                         pipeP_tx_deemph is set to 1'b1 (default setting) and the PHY is running
                                                         at the Gen2 rate. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_deemph_gen2_3p5db         : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen2_3p5db_s cn70xx;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen2_3p5db cvmx_gserx_pcie_tx_deemph_gen2_3p5db_t;

/**
 * cvmx_gser#_pcie_tx_deemph_gen2_6db
 *
 * PCIE Tx De-emphasis at 6 dB.
 *
 */
union cvmx_gserx_pcie_tx_deemph_gen2_6db {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_6_63                : 58;
	uint64_t tx_deemph_gen2_6db           : 6;  /**< This static value sets the Tx driver deemphasis value in the case where
                                                         pipeP_tx_deemph is set to 1'b0 and the PHY is running at the Gen2 rate.
                                                         Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_deemph_gen2_6db           : 6;
	uint64_t reserved_6_63                : 58;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_deemph_gen2_6db_s cn70xx;
};
typedef union cvmx_gserx_pcie_tx_deemph_gen2_6db cvmx_gserx_pcie_tx_deemph_gen2_6db_t;

/**
 * cvmx_gser#_pcie_tx_swing_full
 *
 * PCIE Tx Amplitude (Full Swing Mode).
 *
 */
union cvmx_gserx_pcie_tx_swing_full {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_swing_full_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_swing_hi                  : 7;  /**< This static value sets the launch amplitude of the transmitter when
                                                         pipeP_tx_swing is set to 1'b0 (default state).  Used for tuning at
                                                         the board level for Rx eye compliance. */
#else
	uint64_t tx_swing_hi                  : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_swing_full_s cn70xx;
};
typedef union cvmx_gserx_pcie_tx_swing_full cvmx_gserx_pcie_tx_swing_full_t;

/**
 * cvmx_gser#_pcie_tx_swing_low
 *
 * PCIE Tx Amplitude (Low Swing Mode).
 *
 */
union cvmx_gserx_pcie_tx_swing_low {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_swing_low_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_swing_lo                  : 7;  /**< This static value sets the launch amplitude of the transmitter when
                                                         pipeP_tx_swing is set to 1'b1 (low swing mode).  Used for tuning at
                                                         the board level for Rx eye compliance. */
#else
	uint64_t tx_swing_lo                  : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_swing_low_s cn70xx;
};
typedef union cvmx_gserx_pcie_tx_swing_low cvmx_gserx_pcie_tx_swing_low_t;

/**
 * cvmx_gser#_pcie_tx_vboost_lvl
 *
 * PCIE Tx Voltage Boost Level.
 *
 */
union cvmx_gserx_pcie_tx_vboost_lvl {
	uint64_t u64;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t tx_vboost_lvl                : 3;  /**< Controls the launch amplitude only when VPTX is less than the launch
                                                         amplitude correspnding to tx_vboost_lvl.  Valid settings:
                                                         - 011: Corresponds to a launch amplitude of 0.844V
                                                         - 100: Corresponds to a launch amplitude of 1.008V
                                                         - 101: Corresponds to a launch amplitude of 1.156V. */
#else
	uint64_t tx_vboost_lvl                : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_pcie_tx_vboost_lvl_s cn70xx;
};
typedef union cvmx_gserx_pcie_tx_vboost_lvl cvmx_gserx_pcie_tx_vboost_lvl_t;

/**
 * cvmx_gser#_phy#_idcode_hi
 *
 * PHY Version Hi.
 *
 */
union cvmx_gserx_phyx_idcode_hi {
	uint64_t u64;
	struct cvmx_gserx_phyx_idcode_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t idcode_hi                    : 16; /**< The PHY version high. */
#else
	uint64_t idcode_hi                    : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_idcode_hi_s    cn70xx;
};
typedef union cvmx_gserx_phyx_idcode_hi cvmx_gserx_phyx_idcode_hi_t;

/**
 * cvmx_gser#_phy#_idcode_lo
 *
 * PHY Version Low.
 *
 */
union cvmx_gserx_phyx_idcode_lo {
	uint64_t u64;
	struct cvmx_gserx_phyx_idcode_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t idcode_lo                    : 16; /**< The PHY version low. */
#else
	uint64_t idcode_lo                    : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_idcode_lo_s    cn70xx;
};
typedef union cvmx_gserx_phyx_idcode_lo cvmx_gserx_phyx_idcode_lo_t;

/**
 * cvmx_gser#_phy#_lane0_rx_lbert_ctl
 *
 * PHY LANE0 RX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane0_rx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t sync                         : 1;  /**< Synchronizes pattern matcher with incoming data.  A write of a 1
                                                         to this bit resets the error counter and starts a synchronization of
                                                         the PM.  Once this bit is set, there is no need to write the field back
                                                         to a zero. */
	uint64_t mode                         : 4;  /**< Pattern to match.  When changing modes, the field must be set to zero
                                                          first.  This field should match what was configured for the TX LBERT
                                                          Control register.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: d[n] = d[n-10]
                                                         - 6: d[n] = !d[n-10]
                                                         - 7: d[n] = !d[n-20]
                                                          - 15-8: Reserved. */
#else
	uint64_t mode                         : 4;
	uint64_t sync                         : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_lbert_ctl_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane0_rx_lbert_ctl cvmx_gserx_phyx_lane0_rx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane0_rx_lbert_err
 *
 * PHY LANE0 RX LBERT Error.
 * A read of this register, or a SYNC from the RX LBERT Control register
 * resets the error count.  If all bits in this regisert are set, the
 * error counter has saturated.
 */
union cvmx_gserx_phyx_lane0_rx_lbert_err {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ov14                         : 1;  /**< If this bit is set, and COUNT[15] is also set, signals a overflow of counter. */
	uint64_t count                        : 15; /**< Current error count if OV14 field is active, then multiply count
                                                         by 128 to get the actual count. */
#else
	uint64_t count                        : 15;
	uint64_t ov14                         : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_rx_lbert_err_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane0_rx_lbert_err cvmx_gserx_phyx_lane0_rx_lbert_err_t;

/**
 * cvmx_gser#_phy#_lane0_tx_lbert_ctl
 *
 * PHY LANE0 TX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane0_tx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t pat0                         : 10; /**< 10-bit pattern for modes that use this field.  Ignored for
                                                         other modes. */
	uint64_t trig_err                     : 1;  /**< Single shot inversion of the LSB of the current symbol.
                                                         Any write of 1 to this bit will insert an error. */
	uint64_t mode                         : 4;  /**< Pattern to generate.  When changing modes, the field must be set to zero
                                                          first.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: Fixed word (PAT0)
                                                         - 6: DC-balanced word (PAT0, ~PAT0)
                                                         - 7: Word pattern (20-bit)
                                                          - 15-8: Reserved. */
#else
	uint64_t mode                         : 4;
	uint64_t trig_err                     : 1;
	uint64_t pat0                         : 10;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_tx_lbert_ctl_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane0_tx_lbert_ctl cvmx_gserx_phyx_lane0_tx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane0_txdebug
 *
 * PHY LANE0 TX DEBUG.
 *
 */
union cvmx_gserx_phyx_lane0_txdebug {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane0_txdebug_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t rxdet_meas_time              : 8;  /**< Time to wait for rxdet measurement. */
	uint64_t detrx_always                 : 1;  /**< Always signals 1 for rx_detect ignoring analog. */
	uint64_t dtb_sel                      : 3;  /**< Selects data to drive on the DTB. */
#else
	uint64_t dtb_sel                      : 3;
	uint64_t detrx_always                 : 1;
	uint64_t rxdet_meas_time              : 8;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane0_txdebug_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane0_txdebug cvmx_gserx_phyx_lane0_txdebug_t;

/**
 * cvmx_gser#_phy#_lane1_rx_lbert_ctl
 *
 * PHY LANE1 TX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane1_rx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t sync                         : 1;  /**< Synchronizes pattern matcher with incoming data.  A write of a 1
                                                         to this bit resets the error counter and starts a synchronization of
                                                         the PM.  Once this bit is set, there is no need to write the field back
                                                         to a zero. */
	uint64_t mode                         : 3;  /**< Pattern to match.  When changing modes, the field must be set to zero
                                                          first.  This field should match what was configured for the TX LBERT
                                                          Control register.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: d[n] = d[n-10]
                                                         - 6: d[n] = !d[n-10]
                                                         - 7: d[n] = !d[n-20] */
#else
	uint64_t mode                         : 3;
	uint64_t sync                         : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_lbert_ctl_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane1_rx_lbert_ctl cvmx_gserx_phyx_lane1_rx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane1_rx_lbert_err
 *
 * PHY LANE1 RX LBERT Error.
 * A read of this register, or a SYNC from the RX LBERT Control register
 * resets the error count.  If all bits in this regisert are set, the
 * error counter has saturated.
 */
union cvmx_gserx_phyx_lane1_rx_lbert_err {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ov14                         : 1;  /**< If this bit is set, and COUNT[15] is also set, signals a overflow of counter. */
	uint64_t count                        : 15; /**< Current error count if OV14 field is active, then multiply count
                                                         by 128 to get the actual count. */
#else
	uint64_t count                        : 15;
	uint64_t ov14                         : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_rx_lbert_err_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane1_rx_lbert_err cvmx_gserx_phyx_lane1_rx_lbert_err_t;

/**
 * cvmx_gser#_phy#_lane1_tx_lbert_ctl
 *
 * PHY LANE1 RX LBERT Control.
 *
 */
union cvmx_gserx_phyx_lane1_tx_lbert_ctl {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t pat0                         : 10; /**< 10-bit pattern for modes that use this field.  Ignored for
                                                         other modes. */
	uint64_t trig_err                     : 1;  /**< Single shot inversion of the LSB of the current symbol.
                                                         Any write of 1 to this bit will insert an error. */
	uint64_t mode                         : 4;  /**< Pattern to generate.  When changing modes, the field must be set to zero
                                                          first.
                                                         - 0: disabled
                                                         - 1: lfsr31     X^31 + X^28 + 1
                                                         - 2: lfsr23     X^23 + X^18 + 1
                                                         - 3: lfsr15     X^15 + X^14 + 1
                                                         - 4: lfsr7      X^7 + X^6 + 1
                                                         - 5: Fixed word (PAT0)
                                                         - 6: DC-balanced word (PAT0, ~PAT0)
                                                         - 7: Word pattern (20-bit)
                                                          - 15-8: Reserved. */
#else
	uint64_t mode                         : 4;
	uint64_t trig_err                     : 1;
	uint64_t pat0                         : 10;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_tx_lbert_ctl_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane1_tx_lbert_ctl cvmx_gserx_phyx_lane1_tx_lbert_ctl_t;

/**
 * cvmx_gser#_phy#_lane1_txdebug
 *
 * PHY LANE1 TX DEBUG.
 *
 */
union cvmx_gserx_phyx_lane1_txdebug {
	uint64_t u64;
	struct cvmx_gserx_phyx_lane1_txdebug_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t rxdet_meas_time              : 8;  /**< Time to wait for rxdet measurement. */
	uint64_t detrx_always                 : 1;  /**< Always signals 1 for rx_detect ignoring analog. */
	uint64_t dtb_sel                      : 3;  /**< Selects data to drive on the DTB. */
#else
	uint64_t dtb_sel                      : 3;
	uint64_t detrx_always                 : 1;
	uint64_t rxdet_meas_time              : 8;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_phyx_lane1_txdebug_s cn70xx;
};
typedef union cvmx_gserx_phyx_lane1_txdebug cvmx_gserx_phyx_lane1_txdebug_t;

/**
 * cvmx_gser#_phy_ctl
 *
 * General PHY/PLL control of the RAW PCS.
 *
 */
union cvmx_gserx_phy_ctl {
	uint64_t u64;
	struct cvmx_gserx_phy_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t phy_pd                       : 1;  /**< Tied to the mac_pcs_refclk_pd pin of the RAW PCS.
                                                         When asserted, the PHY is powered down. */
	uint64_t phy_reset                    : 1;  /**< Tied to the phy_reset pin of the RAW PCS.
                                                         When asserted, the PHY is held in reset. */
#else
	uint64_t phy_reset                    : 1;
	uint64_t phy_pd                       : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_phy_ctl_s           cn78xx;
};
typedef union cvmx_gserx_phy_ctl cvmx_gserx_phy_ctl_t;

/**
 * cvmx_gser#_pipe_lpbk
 */
union cvmx_gserx_pipe_lpbk {
	uint64_t u64;
	struct cvmx_gserx_pipe_lpbk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pcie_lpbk                    : 1;  /**< For non-OCI links, Ties to pipeX_tx2rx_loopbk, analag Serial Loop Back Control
                                                         input of the PCIE PCS. */
#else
	uint64_t pcie_lpbk                    : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pipe_lpbk_s         cn78xx;
};
typedef union cvmx_gserx_pipe_lpbk cvmx_gserx_pipe_lpbk_t;

/**
 * cvmx_gser#_pll_p#_mode_0
 *
 * RAW PCS PLL Global Settings Mode 0 Register
 * Global registers are shared across the entire PCS
 * The Protocol selects the specific protocol register as
 * enumerated by GSER_LMODE_E.
 */
union cvmx_gserx_pll_px_mode_0 {
	uint64_t u64;
	struct cvmx_gserx_pll_px_mode_0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t pll_icp                      : 4;  /**< PLL Charge pump enable. */
	uint64_t pll_rloop                    : 3;  /**< Loop resistor tuning. */
	uint64_t pll_pcs_div                  : 9;  /**< The divider that generates pcs_mac_tx_clk. */
#else
	uint64_t pll_pcs_div                  : 9;
	uint64_t pll_rloop                    : 3;
	uint64_t pll_icp                      : 4;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_gserx_pll_px_mode_0_s     cn78xx;
};
typedef union cvmx_gserx_pll_px_mode_0 cvmx_gserx_pll_px_mode_0_t;

/**
 * cvmx_gser#_pll_p#_mode_1
 *
 * Global registers are shared across the entire PCS
 * The Protocol selects the specific protocol register as
 * enumerated by GSER_LMODE_E.
 */
union cvmx_gserx_pll_px_mode_1 {
	uint64_t u64;
	struct cvmx_gserx_pll_px_mode_1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t pll_16p5en                   : 1;  /**< Enable for the div 16.5 clock. */
	uint64_t pll_cpadj                    : 2;  /**< PLL Charge adjust. */
	uint64_t pll_pcie3en                  : 1;  /**< Enable PCIE3 Mode. */
	uint64_t pll_opr                      : 1;  /**< 0: Use Ring Oscillator VCO
                                                         - 1: Use LC-tank VCO */
	uint64_t pll_div                      : 9;  /**< PLL divider in feedback path which sets the PLL frequency. */
#else
	uint64_t pll_div                      : 9;
	uint64_t pll_opr                      : 1;
	uint64_t pll_pcie3en                  : 1;
	uint64_t pll_cpadj                    : 2;
	uint64_t pll_16p5en                   : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_gserx_pll_px_mode_1_s     cn78xx;
};
typedef union cvmx_gserx_pll_px_mode_1 cvmx_gserx_pll_px_mode_1_t;

/**
 * cvmx_gser#_pll_stat
 */
union cvmx_gserx_pll_stat {
	uint64_t u64;
	struct cvmx_gserx_pll_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t pll_lock                     : 1;  /**< RAW PCS PLL lock indication. */
#else
	uint64_t pll_lock                     : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_pll_stat_s          cn78xx;
};
typedef union cvmx_gserx_pll_stat cvmx_gserx_pll_stat_t;

/**
 * cvmx_gser#_qlm_stat
 */
union cvmx_gserx_qlm_stat {
	uint64_t u64;
	struct cvmx_gserx_qlm_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t rst_rdy                      : 1;  /**< When asserted, the QLM is configured (CSR_GSER_CAV_CFG)
                                                         and the PLLs are stable. The GSER is ready to accept
                                                         traffic from the MAC. */
	uint64_t dcok                         : 1;  /**< When asserted, there is a PLL reference clock indicating there
                                                         is power to the QLM. */
#else
	uint64_t dcok                         : 1;
	uint64_t rst_rdy                      : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_qlm_stat_s          cn78xx;
};
typedef union cvmx_gserx_qlm_stat cvmx_gserx_qlm_stat_t;

/**
 * cvmx_gser#_refclk_sel
 */
union cvmx_gserx_refclk_sel {
	uint64_t u64;
	struct cvmx_gserx_refclk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t pcie_refclk125               : 1;  /**< For non-OCI links, indicates a 125 Mhz Reference clock. */
	uint64_t com_clk_sel                  : 1;  /**< For non-OCI links, when set the reference clock is
                                                         sourced from the external clock mux. */
	uint64_t use_com1                     : 1;  /**< For non-OCI links, external mux select.
                                                         When set, qlmc_refclkn/p_1 are selected as the reference clock
                                                         When clear, qlmc_refclkn/p_0 are selected as the reference clock. */
#else
	uint64_t use_com1                     : 1;
	uint64_t com_clk_sel                  : 1;
	uint64_t pcie_refclk125               : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_refclk_sel_s        cn78xx;
};
typedef union cvmx_gserx_refclk_sel cvmx_gserx_refclk_sel_t;

/**
 * cvmx_gser#_rx_coast
 */
union cvmx_gserx_rx_coast {
	uint64_t u64;
	struct cvmx_gserx_rx_coast_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t coast                        : 4;  /**< For links that are not in PCIE or BGX mode (including all OCI links),
                                                         ties to the mac_pcs_rx_cdr_coast[3:0] pins of the RAW PCS.  This
                                                         is a control signal to freeze the frequency of the CDR in the PHY.
                                                         This signal is only valid in P0 state. */
#else
	uint64_t coast                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_rx_coast_s          cn78xx;
};
typedef union cvmx_gserx_rx_coast cvmx_gserx_rx_coast_t;

/**
 * cvmx_gser#_rx_eie_deten
 */
union cvmx_gserx_rx_eie_deten {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_deten_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t eiede                        : 4;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         this bit ties to the mac_pcs_rx_eie_det_en[3:0] pins of the RAW PCS.
                                                         When set, the RAW PCS looks for an Electrical Idle
                                                         Exit Condition. */
#else
	uint64_t eiede                        : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_rx_eie_deten_s      cn78xx;
};
typedef union cvmx_gserx_rx_eie_deten cvmx_gserx_rx_eie_deten_t;

/**
 * cvmx_gser#_rx_eie_detsts
 */
union cvmx_gserx_rx_eie_detsts {
	uint64_t u64;
	struct cvmx_gserx_rx_eie_detsts_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t cdrlock                      : 4;  /**< Lane X CDR lock time has been met after the detection of the electrical
                                                         idle exit condition. */
	uint64_t eiests                       : 4;  /**< Status from lane X's RX indicating the detection of a electical IDLE exit
                                                         condition.  Note that this is a dynamic indication and valid when the
                                                         associated mac_pcs_rx_eie_det_en[3:0] bit is set. */
	uint64_t eieltch                      : 4;  /**< Status from lane X's RX indicating the detection of a electical IDLE exit
                                                         condition.  Note that this is a latched indication that electrical IDLE
                                                         exit condition was met at least once during the period of time that the
                                                         associate mac_pcs_rx_eie_det_en[3:0] bit was set. */
#else
	uint64_t eieltch                      : 4;
	uint64_t eiests                       : 4;
	uint64_t cdrlock                      : 4;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_gserx_rx_eie_detsts_s     cn78xx;
};
typedef union cvmx_gserx_rx_eie_detsts cvmx_gserx_rx_eie_detsts_t;

/**
 * cvmx_gser#_rx_polarity
 */
union cvmx_gserx_rx_polarity {
	uint64_t u64;
	struct cvmx_gserx_rx_polarity_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t rx_inv                       : 4;  /**< Control signal to invert the polarity of received data.  When
                                                         asserted, the polarity of the received data is inverted. */
#else
	uint64_t rx_inv                       : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_rx_polarity_s       cn78xx;
};
typedef union cvmx_gserx_rx_polarity cvmx_gserx_rx_polarity_t;

/**
 * cvmx_gser#_rx_pstate
 */
union cvmx_gserx_rx_pstate {
	uint64_t u64;
	struct cvmx_gserx_rx_pstate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t rxpstate                     : 3;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         ties to the mac_pcs_rx_pstate[3:0] pins of the RAW PCS.
                                                          0x0 = P0.
                                                          0x1 = P0s.
                                                          0x2 = P1.
                                                          0x3 = P2.
                                                          else = Reserved. */
#else
	uint64_t rxpstate                     : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_rx_pstate_s         cn78xx;
};
typedef union cvmx_gserx_rx_pstate cvmx_gserx_rx_pstate_t;

/**
 * cvmx_gser#_rxtx_stat
 */
union cvmx_gserx_rxtx_stat {
	uint64_t u64;
	struct cvmx_gserx_rxtx_stat_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t lmc                          : 1;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         this bit is set for a lane mode change (a write
                                                         to GSER_LANE_MODE) that changes the value of the Lane Mode.
                                                         This bit is clear when each lane acknowledges the change. */
	uint64_t tpsc                         : 1;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         this bit is set for a TX Power state change (a write
                                                         to GSER_TX_PSTATE that changes the value of the Power State.
                                                         This bit is clear when each lane acknowledges the change. */
	uint64_t rpsc                         : 1;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         this bit is set for a RX Power state change (a write
                                                         to GSER_RX_PSTATE that changes the value of the Power State.
                                                         This bit is clear when each lane acknowledges the change. */
#else
	uint64_t rpsc                         : 1;
	uint64_t tpsc                         : 1;
	uint64_t lmc                          : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_rxtx_stat_s         cn78xx;
};
typedef union cvmx_gserx_rxtx_stat cvmx_gserx_rxtx_stat_t;

/**
 * cvmx_gser#_sata_cfg
 *
 * SATA Config Enable.
 *
 */
union cvmx_gserx_sata_cfg {
	uint64_t u64;
	struct cvmx_gserx_sata_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t sata_en                      : 1;  /**< When set, DLM2 is configured for SATA (as opposed to PCIE). */
#else
	uint64_t sata_en                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_sata_cfg_s          cn70xx;
};
typedef union cvmx_gserx_sata_cfg cvmx_gserx_sata_cfg_t;

/**
 * cvmx_gser#_sata_lane_rst
 *
 * Lane Reset Control.
 *
 */
union cvmx_gserx_sata_lane_rst {
	uint64_t u64;
	struct cvmx_gserx_sata_lane_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t l1_rst                       : 1;  /**< Independent reset for Lane 1. */
	uint64_t l0_rst                       : 1;  /**< Independent reset for Lane 0. */
#else
	uint64_t l0_rst                       : 1;
	uint64_t l1_rst                       : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_lane_rst_s     cn70xx;
};
typedef union cvmx_gserx_sata_lane_rst cvmx_gserx_sata_lane_rst_t;

/**
 * cvmx_gser#_sata_p0_tx_amp_gen#
 *
 * SATA Lane 0 Tx Launch Amplitude at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p0_tx_amp_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_amp_gen                   : 7;  /**< This status value sets the Tx driver launch amplitude in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_amp_gen                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p0_tx_amp_genx_s cn70xx;
};
typedef union cvmx_gserx_sata_p0_tx_amp_genx cvmx_gserx_sata_p0_tx_amp_genx_t;

/**
 * cvmx_gser#_sata_p0_tx_preemph_gen#
 *
 * SATA Lane 0 Tx Pre-emphasis at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p0_tx_preemph_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_preemph                   : 7;  /**< This static value sets the Tx driver de-emphasis value in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_preemph                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p0_tx_preemph_genx_s cn70xx;
};
typedef union cvmx_gserx_sata_p0_tx_preemph_genx cvmx_gserx_sata_p0_tx_preemph_genx_t;

/**
 * cvmx_gser#_sata_p1_tx_amp_gen#
 *
 * SATA Lane 1 Tx Launch Amplitude at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p1_tx_amp_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_amp_gen                   : 7;  /**< This status value sets the Tx driver launch amplitude in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_amp_gen                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p1_tx_amp_genx_s cn70xx;
};
typedef union cvmx_gserx_sata_p1_tx_amp_genx cvmx_gserx_sata_p1_tx_amp_genx_t;

/**
 * cvmx_gser#_sata_p1_tx_preemph_gen#
 *
 * SATA Lane 0 Tx Pre-emphasis at Gen 1,2 and 3 Speeds.
 *
 */
union cvmx_gserx_sata_p1_tx_preemph_genx {
	uint64_t u64;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t tx_preemph                   : 7;  /**< This static value sets the Tx driver de-emphasis value in the
                                                         case where the PHY is running at the Gen1, Gen2, and Gen3
                                                         rates. Used for tuning at the board level for Rx eye compliance. */
#else
	uint64_t tx_preemph                   : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_gserx_sata_p1_tx_preemph_genx_s cn70xx;
};
typedef union cvmx_gserx_sata_p1_tx_preemph_genx cvmx_gserx_sata_p1_tx_preemph_genx_t;

/**
 * cvmx_gser#_sata_ref_ssp_en
 *
 * SATA Reference Clock Enable for the PHY.
 *
 */
union cvmx_gserx_sata_ref_ssp_en {
	uint64_t u64;
	struct cvmx_gserx_sata_ref_ssp_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ref_ssp_en                   : 1;  /**< Reference Clock Enable for the PHY. */
#else
	uint64_t ref_ssp_en                   : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_sata_ref_ssp_en_s   cn70xx;
};
typedef union cvmx_gserx_sata_ref_ssp_en cvmx_gserx_sata_ref_ssp_en_t;

/**
 * cvmx_gser#_sata_rx_invert
 *
 * SATA Receive Polarity Inversion.
 *
 */
union cvmx_gserx_sata_rx_invert {
	uint64_t u64;
	struct cvmx_gserx_sata_rx_invert_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t rx1_invert                   : 1;  /**< Instructs the PHY to perform a polarity inversion on the Lane 1
                                                          received data.
                                                         - 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
	uint64_t rx0_invert                   : 1;  /**< 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
#else
	uint64_t rx0_invert                   : 1;
	uint64_t rx1_invert                   : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_rx_invert_s    cn70xx;
};
typedef union cvmx_gserx_sata_rx_invert cvmx_gserx_sata_rx_invert_t;

/**
 * cvmx_gser#_sata_ssc_clk_sel
 *
 * SATA Spread Spectrum Reference Clock Shifting.
 *
 */
union cvmx_gserx_sata_ssc_clk_sel {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_clk_sel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t ssc_clk_sel                  : 9;  /**< Enables non-standard oscillator frequencies to generate targeted
                                                         MPLL output rates.  Input corresponds to frequency-synthesis
                                                         coefficient.
                                                         [8:6]: modulous - 1
                                                         [5:0] = 2's compliment push amount. */
#else
	uint64_t ssc_clk_sel                  : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_clk_sel_s  cn70xx;
};
typedef union cvmx_gserx_sata_ssc_clk_sel cvmx_gserx_sata_ssc_clk_sel_t;

/**
 * cvmx_gser#_sata_ssc_en
 *
 * SATA Spread Spectrum Disable.
 *
 */
union cvmx_gserx_sata_ssc_en {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t ssc_en                       : 1;  /**< Enables spread spectrum clock production (0.5% down-spread
                                                         at ~31.5 KHz) in the SATA 6G PHY.  If the reference clock
                                                         already has spread spectrum applied, this bit must stay
                                                         deasserted. */
#else
	uint64_t ssc_en                       : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_en_s       cn70xx;
};
typedef union cvmx_gserx_sata_ssc_en cvmx_gserx_sata_ssc_en_t;

/**
 * cvmx_gser#_sata_ssc_range
 *
 * SATA Spread Spectrum Range.
 *
 */
union cvmx_gserx_sata_ssc_range {
	uint64_t u64;
	struct cvmx_gserx_sata_ssc_range_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t ssc_range                    : 3;  /**< Selects the range of spread spectrum modulation when SSC_EN is
                                                         asserted and the PHY is spreading the high-speed transmit clocks.
                                                         Applies a fixed offset to the accumulator.
                                                         - 000: -4.980 ppm
                                                         - 001: -4.492 ppm
                                                         - 010: -4.003 ppm
                                                         - 011: -2.000 ppm
                                                         - 100:  4.980 ppm
                                                         - 101:  4.492 ppm
                                                         - 110:  4.003 ppm
                                                         - 111:  2.000 ppm */
#else
	uint64_t ssc_range                    : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_sata_ssc_range_s    cn70xx;
};
typedef union cvmx_gserx_sata_ssc_range cvmx_gserx_sata_ssc_range_t;

/**
 * cvmx_gser#_sata_status
 *
 * SATA PHY Ready Status.
 *
 */
union cvmx_gserx_sata_status {
	uint64_t u64;
	struct cvmx_gserx_sata_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t p1_rdy                       : 1;  /**< PHY Lane 1 is ready to send and receive data. */
	uint64_t p0_rdy                       : 1;  /**< PHY Lane 0 is ready to send and receive data. */
#else
	uint64_t p0_rdy                       : 1;
	uint64_t p1_rdy                       : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_status_s       cn70xx;
};
typedef union cvmx_gserx_sata_status cvmx_gserx_sata_status_t;

/**
 * cvmx_gser#_sata_tx_invert
 *
 * SATA Transmit Polarity Inversion.
 *
 */
union cvmx_gserx_sata_tx_invert {
	uint64_t u64;
	struct cvmx_gserx_sata_tx_invert_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t tx1_invert                   : 1;  /**< Instructs the PHY to perform a polarity inversion on the Lane 1
                                                          transmitted data.
                                                         - 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
	uint64_t tx0_invert                   : 1;  /**< Instructs the PHY to perform a polarity inversion on the Lane 0
                                                          transmitted data.
                                                         - 0: PHY does not performs polarity inversion
                                                         - 1: PHY performs polarity inversion */
#else
	uint64_t tx0_invert                   : 1;
	uint64_t tx1_invert                   : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_gserx_sata_tx_invert_s    cn70xx;
};
typedef union cvmx_gserx_sata_tx_invert cvmx_gserx_sata_tx_invert_t;

/**
 * cvmx_gser#_slice#_p#_mode
 *
 * Slice Registers are shared across two adjacent lanes. SLICE0 access
 * lane pairs 0 & 1. SLICE1 acceses lane pairs 2 & 3.
 * The Protocol selects the specific protocol register as
 * enumerated by GSER_LMODE_E.
 */
union cvmx_gserx_slicex_px_mode {
	uint64_t u64;
	struct cvmx_gserx_slicex_px_mode_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t s_spare                      : 2;  /**< <14>: Enable rx1_div33 clock in the SerDes.
                                                         <13>: Enable rx0_div33 clock in the SerDes. */
	uint64_t ldll_isel                    : 2;  /**< Lane DLL current select. */
	uint64_t sdll_isel                    : 2;  /**< Slice DLL current select. */
	uint64_t pi_bwsel                     : 3;  /**< PI bandwidth select. */
	uint64_t ldll_bwsel                   : 3;  /**< Lane DLL bandwidth select. */
	uint64_t sdll_bwsel                   : 3;  /**< Slice DLL bandwidth select. */
#else
	uint64_t sdll_bwsel                   : 3;
	uint64_t ldll_bwsel                   : 3;
	uint64_t pi_bwsel                     : 3;
	uint64_t sdll_isel                    : 2;
	uint64_t ldll_isel                    : 2;
	uint64_t s_spare                      : 2;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_gserx_slicex_px_mode_s    cn78xx;
};
typedef union cvmx_gserx_slicex_px_mode cvmx_gserx_slicex_px_mode_t;

/**
 * cvmx_gser#_spd
 */
union cvmx_gserx_spd {
	uint64_t u64;
	struct cvmx_gserx_spd_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t spd                          : 4;  /**< For OCI links,
                                                         spd<3>: When set, indicates 125Mhz reference clock,
                                                                 When clear, indicates 100Mhz reference clock.
                                                         spd<2:0>:
                                                         0x0 = 1.25G
                                                         0x1 = 2.5G
                                                         0x2 = 3.125G
                                                         0x3 = 5G
                                                         0x4 = 6.25G
                                                         0x5 = 8G
                                                         0x6 = 10G
                                                         0x7 = Software mode, PHY comes up in powerdown state.
                                                         For non-OCI links these bits are not used. */
#else
	uint64_t spd                          : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_spd_s               cn78xx;
};
typedef union cvmx_gserx_spd cvmx_gserx_spd_t;

/**
 * cvmx_gser#_srst
 */
union cvmx_gserx_srst {
	uint64_t u64;
	struct cvmx_gserx_srst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t srst                         : 1;  /**< When asserted, resets all per lane state in the GSER
                                                         with the exception of the PHY. */
#else
	uint64_t srst                         : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_gserx_srst_s              cn78xx;
};
typedef union cvmx_gserx_srst cvmx_gserx_srst_t;

/**
 * cvmx_gser#_tx_pstate
 */
union cvmx_gserx_tx_pstate {
	uint64_t u64;
	struct cvmx_gserx_tx_pstate_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t txpstate                     : 3;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         ties to the mac_pcs_tx_pstate[3:0] pins of the RAW PCS.
                                                          0x0 = P0.
                                                          0x1 = P0s.
                                                          0x2 = P1.
                                                          0x3 = P2.
                                                          else = Reserved. */
#else
	uint64_t txpstate                     : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_gserx_tx_pstate_s         cn78xx;
};
typedef union cvmx_gserx_tx_pstate cvmx_gserx_tx_pstate_t;

/**
 * cvmx_gser#_tx_vboost
 */
union cvmx_gserx_tx_vboost {
	uint64_t u64;
	struct cvmx_gserx_tx_vboost_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t vboost                       : 4;  /**< For links that are not in PCIE mode (including all OCI links),
                                                         ties to the mac_pcs_tx_vboost_en[3:0] pins of the RAW PCS. */
#else
	uint64_t vboost                       : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_gserx_tx_vboost_s         cn78xx;
};
typedef union cvmx_gserx_tx_vboost cvmx_gserx_tx_vboost_t;

#endif
