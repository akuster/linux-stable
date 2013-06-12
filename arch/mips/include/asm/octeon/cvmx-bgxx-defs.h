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
 * cvmx-bgxx-defs.h
 *
 * Configuration and status register (CSR) type definitions for
 * Octeon bgxx.
 *
 * This file is auto generated. Do not edit.
 *
 * <hr>$Revision$<hr>
 *
 */
#ifndef __CVMX_BGXX_DEFS_H__
#define __CVMX_BGXX_DEFS_H__

#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_CONFIG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_CONFIG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_CONFIG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_INT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_INT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_INT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_PRT_CBFC_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_PRT_CBFC_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000408ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_PRT_CBFC_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000408ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_ADR_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_ADR_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00000A0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_ADR_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00000A0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_BP_DROP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_BP_DROP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000080ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_BP_DROP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000080ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_BP_OFF(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_BP_OFF(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000090ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_BP_OFF(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000090ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_BP_ON(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_BP_ON(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000088ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_BP_ON(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000088ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_BP_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_BP_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00000A8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_BP_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00000A8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_FIFO_LEN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_FIFO_LEN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00000C0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_FIFO_LEN(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00000C0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_ID_MAP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_ID_MAP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_ID_MAP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_LOGL_XOFF(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_LOGL_XOFF(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00000B0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_LOGL_XOFF(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00000B0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_LOGL_XON(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_LOGL_XON(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00000B8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_LOGL_XON(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00000B8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_PAUSE_DROP_TIME(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_PAUSE_DROP_TIME(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000030ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_PAUSE_DROP_TIME(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000030ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT3(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT3(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000050ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT3(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000050ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT4(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT4(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT4(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT5(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT5(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000060ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT5(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000060ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT6(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT6(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000068ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT6(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000068ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT7(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT7(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000070ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT7(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000070ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_STAT8(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_STAT8(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000078ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_STAT8(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000078ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_RX_WEIGHT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_RX_WEIGHT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000098ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_RX_WEIGHT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000098ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_CHANNEL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_CHANNEL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000400ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_CHANNEL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000400ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_FIFO_LEN(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_FIFO_LEN(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000418ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_FIFO_LEN(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000418ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_HG2_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_HG2_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000410ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_HG2_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000410ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_OVR_BP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_OVR_BP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000420ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_OVR_BP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000420ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT0(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT0(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000508ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT0(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000508ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000510ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000510ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT10(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT10(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000558ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT10(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000558ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT11(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT11(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000560ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT11(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000560ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT12(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT12(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000568ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT12(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000568ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT13(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT13(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000570ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT13(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000570ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT14(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT14(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000578ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT14(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000578ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT15(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT15(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000580ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT15(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000580ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT16(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT16(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000588ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT16(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000588ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT17(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT17(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000590ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT17(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000590ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000518ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000518ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT3(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT3(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000520ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT3(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000520ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT4(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT4(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000528ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT4(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000528ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT5(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT5(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000530ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT5(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000530ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT6(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT6(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000538ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT6(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000538ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT7(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT7(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000540ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT7(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000540ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT8(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT8(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000548ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT8(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000548ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMRX_TX_STAT9(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMRX_TX_STAT9(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000550ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_CMRX_TX_STAT9(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000550ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_BAD(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_BAD(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0001020ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_BAD(block_id) (CVMX_ADD_IO_SEG(0x00011800E0001020ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_BIST_STATUS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_BIST_STATUS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000300ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_BIST_STATUS(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000300ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_CHAN_MSK_AND(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_CHAN_MSK_AND(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000200ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_CHAN_MSK_AND(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000200ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_CHAN_MSK_OR(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_CHAN_MSK_OR(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000208ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_CHAN_MSK_OR(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000208ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_GLOBAL_CONFIG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_GLOBAL_CONFIG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000008ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_GLOBAL_CONFIG(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000008ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_MEM_CTRL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_MEM_CTRL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000018ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_MEM_CTRL(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000018ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_MEM_INT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_MEM_INT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000010ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_MEM_INT(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000010ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_NXC_ADR(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_NXC_ADR(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0001018ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_NXC_ADR(block_id) (CVMX_ADD_IO_SEG(0x00011800E0001018ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_RX_ADRX_CAM(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 31)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_CMR_RX_ADRX_CAM(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000100ull) + (((offset) & 31) + ((block_id) & 7) * 0x200000ull) * 8;
}
#else
#define CVMX_BGXX_CMR_RX_ADRX_CAM(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0000100ull) + (((offset) & 31) + ((block_id) & 7) * 0x200000ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_RX_LMACS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_RX_LMACS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000308ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_RX_LMACS(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000308ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_RX_OVR_BP(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_RX_OVR_BP(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0000318ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_RX_OVR_BP(block_id) (CVMX_ADD_IO_SEG(0x00011800E0000318ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_CMR_TX_LMACS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_CMR_TX_LMACS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0001000ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_CMR_TX_LMACS(block_id) (CVMX_ADD_IO_SEG(0x00011800E0001000ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_PRTX_CFG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_PRTX_CFG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_PRTX_CFG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_RXX_DECISION(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_RXX_DECISION(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_RXX_DECISION(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_RXX_FRM_CHK(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_RXX_FRM_CHK(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_RXX_FRM_CHK(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_RXX_FRM_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_RXX_FRM_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_RXX_FRM_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_RXX_IFG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_RXX_IFG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_RXX_IFG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_RXX_INT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_RXX_INT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_RXX_INT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_RXX_JABBER(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_RXX_JABBER(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_RXX_JABBER(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_RXX_UDD_SKP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_RXX_UDD_SKP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_RXX_UDD_SKP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_SMACX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_SMACX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038230ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_SMACX(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038230ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_APPEND(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_APPEND(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038218ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_APPEND(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038218ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_BURST(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_BURST(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038228ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_BURST(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038228ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038270ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038270ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_INT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_INT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038500ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_INT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038500ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_MIN_PKT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_MIN_PKT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038240ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_MIN_PKT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038240ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_PAUSE_PKT_INTERVAL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_PAUSE_PKT_INTERVAL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038248ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_PAUSE_PKT_INTERVAL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038248ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_PAUSE_PKT_TIME(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_PAUSE_PKT_TIME(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038238ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_PAUSE_PKT_TIME(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038238ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_PAUSE_TOGO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_PAUSE_TOGO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038258ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_PAUSE_TOGO(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038258ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_PAUSE_ZERO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_PAUSE_ZERO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038260ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_PAUSE_ZERO(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038260ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_SGMII_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_SGMII_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038300ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_SGMII_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038300ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_SLOT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_SLOT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038220ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_SLOT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038220ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_SOFT_PAUSE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_SOFT_PAUSE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038250ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_SOFT_PAUSE(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038250ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TXX_THRESH(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TXX_THRESH(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0038210ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_GMI_TXX_THRESH(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0038210ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TX_COL_ATTEMPT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TX_COL_ATTEMPT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0039010ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_GMP_GMI_TX_COL_ATTEMPT(block_id) (CVMX_ADD_IO_SEG(0x00011800E0039010ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TX_IFG(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TX_IFG(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0039000ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_GMP_GMI_TX_IFG(block_id) (CVMX_ADD_IO_SEG(0x00011800E0039000ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TX_JAM(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TX_JAM(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0039008ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_GMP_GMI_TX_JAM(block_id) (CVMX_ADD_IO_SEG(0x00011800E0039008ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TX_LFSR(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TX_LFSR(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0039028ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_GMP_GMI_TX_LFSR(block_id) (CVMX_ADD_IO_SEG(0x00011800E0039028ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TX_PAUSE_PKT_DMAC(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TX_PAUSE_PKT_DMAC(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0039018ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_GMP_GMI_TX_PAUSE_PKT_DMAC(block_id) (CVMX_ADD_IO_SEG(0x00011800E0039018ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_GMI_TX_PAUSE_PKT_TYPE(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_GMP_GMI_TX_PAUSE_PKT_TYPE(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0039020ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_GMP_GMI_TX_PAUSE_PKT_TYPE(block_id) (CVMX_ADD_IO_SEG(0x00011800E0039020ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_ANX_ADV(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_ANX_ADV(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_ANX_ADV(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_ANX_EXT_ST(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_ANX_EXT_ST(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_ANX_EXT_ST(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_ANX_LP_ABIL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_ANX_LP_ABIL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_ANX_LP_ABIL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_ANX_RESULTS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_ANX_RESULTS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_ANX_RESULTS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_INTX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_INTX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030080ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_INTX(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030080ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_LINKX_TIMER(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_LINKX_TIMER(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_LINKX_TIMER(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_MISCX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_MISCX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030078ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_MISCX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030078ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_MRX_CONTROL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_MRX_CONTROL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_MRX_CONTROL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_MRX_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_MRX_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030008ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_MRX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030008ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_RXX_STATES(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_RXX_STATES(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_RXX_STATES(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_RXX_SYNC(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_RXX_SYNC(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030050ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_RXX_SYNC(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030050ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_SGMX_AN_ADV(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_SGMX_AN_ADV(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030068ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_SGMX_AN_ADV(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030068ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_SGMX_LP_ADV(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_SGMX_LP_ADV(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030070ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_SGMX_LP_ADV(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030070ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_TXX_STATES(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_TXX_STATES(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030060ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_TXX_STATES(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030060ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_GMP_PCS_TX_RXX_POLARITY(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_GMP_PCS_TX_RXX_POLARITY(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0030048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_GMP_PCS_TX_RXX_POLARITY(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0030048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_CBFC_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_CBFC_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020218ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_CBFC_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020218ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_CTRL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_CTRL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020200ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_CTRL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020200ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_EXT_LOOPBACK(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_EXT_LOOPBACK(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020208ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_EXT_LOOPBACK(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020208ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_HG2_CONTROL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_HG2_CONTROL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020210ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_HG2_CONTROL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020210ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_BAD_COL_HI(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_BAD_COL_HI(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_BAD_COL_HI(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_BAD_COL_LO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_BAD_COL_LO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_BAD_COL_LO(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020030ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020030ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_DECISION(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_DECISION(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_DECISION(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_FRM_CHK(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_FRM_CHK(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_FRM_CHK(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_FRM_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_FRM_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020008ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_FRM_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020008ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_INT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_INT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_INT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_JABBER(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_JABBER(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_JABBER(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_RX_UDD_SKP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_RX_UDD_SKP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_RX_UDD_SKP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_SMAC(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_SMAC(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020108ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_SMAC(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020108ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_APPEND(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_APPEND(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020100ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_APPEND(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020100ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_CTL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_CTL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020160ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_CTL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020160ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_IFG(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_IFG(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020148ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_IFG(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020148ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_INT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_INT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020140ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_INT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020140ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_MIN_PKT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_MIN_PKT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020118ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_MIN_PKT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020118ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_PAUSE_PKT_DMAC(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_PAUSE_PKT_DMAC(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020150ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_PAUSE_PKT_DMAC(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020150ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_PAUSE_PKT_INTERVAL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_PAUSE_PKT_INTERVAL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020120ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_PAUSE_PKT_INTERVAL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020120ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_PAUSE_PKT_TIME(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_PAUSE_PKT_TIME(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020110ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_PAUSE_PKT_TIME(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020110ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_PAUSE_PKT_TYPE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_PAUSE_PKT_TYPE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020158ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_PAUSE_PKT_TYPE(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020158ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_PAUSE_TOGO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_PAUSE_TOGO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020130ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_PAUSE_TOGO(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020130ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_PAUSE_ZERO(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_PAUSE_ZERO(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020138ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_PAUSE_ZERO(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020138ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_SOFT_PAUSE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_SOFT_PAUSE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020128ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_SOFT_PAUSE(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020128ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SMUX_TX_THRESH(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SMUX_TX_THRESH(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0020168ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SMUX_TX_THRESH(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0020168ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_AN_ADV(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_AN_ADV(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100D8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_AN_ADV(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100D8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_AN_BP_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_AN_BP_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100F8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_AN_BP_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100F8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_AN_CONTROL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_AN_CONTROL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100C8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_AN_CONTROL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100C8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_AN_LP_BASE(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_AN_LP_BASE(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100E0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_AN_LP_BASE(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100E0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_AN_LP_XNP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_AN_LP_XNP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100F0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_AN_LP_XNP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100F0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_AN_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_AN_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100D0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_AN_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100D0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_AN_XNP_TX(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_AN_XNP_TX(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100E8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_AN_XNP_TX(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100E8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_ALGN_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_ALGN_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010050ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_ALGN_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010050ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_BIP_ERR_CNT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_BIP_ERR_CNT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_BIP_ERR_CNT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010058ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_LANE_MAP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_LANE_MAP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010060ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_LANE_MAP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010060ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_PMD_CONTROL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_PMD_CONTROL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010068ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_PMD_CONTROL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010068ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_PMD_LD_CUP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_PMD_LD_CUP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010088ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_PMD_LD_CUP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010088ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_PMD_LD_REP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_PMD_LD_REP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010090ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_PMD_LD_REP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010090ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_PMD_LP_CUP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_PMD_LP_CUP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010078ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_PMD_LP_CUP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010078ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_PMD_LP_REP(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_PMD_LP_REP(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010080ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_PMD_LP_REP(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010080ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_PMD_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_PMD_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010070ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_PMD_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010070ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_STATUS1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_STATUS1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010030ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_STATUS1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010030ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_STATUS2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_STATUS2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_STATUS2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010038ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_TP_CONTROL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_TP_CONTROL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_TP_CONTROL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010040ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BR_TP_ERR_CNT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BR_TP_ERR_CNT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BR_TP_ERR_CNT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010048ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_BX_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_BX_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_BX_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010028ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_CONTROL1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_CONTROL1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_CONTROL1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010000ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_CONTROL2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_CONTROL2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_CONTROL2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010018ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_FEC_ABIL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_FEC_ABIL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010098ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_FEC_ABIL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010098ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_FEC_CONTROL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_FEC_CONTROL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100A0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_FEC_CONTROL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100A0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_FEC_CORR_BLKS01(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_FEC_CORR_BLKS01(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100A8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_FEC_CORR_BLKS01(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100A8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_FEC_CORR_BLKS23(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_FEC_CORR_BLKS23(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100B0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_FEC_CORR_BLKS23(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100B0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_FEC_UNCORR_BLKS01(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_FEC_UNCORR_BLKS01(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100B8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_FEC_UNCORR_BLKS01(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100B8ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_FEC_UNCORR_BLKS23(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_FEC_UNCORR_BLKS23(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E00100C0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_FEC_UNCORR_BLKS23(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E00100C0ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_INT(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_INT(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010220ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_INT(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010220ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_LPCS_STATES(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_LPCS_STATES(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010208ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_LPCS_STATES(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010208ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_MISC_CONTROL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_MISC_CONTROL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010218ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_MISC_CONTROL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010218ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_SPD_ABIL(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_SPD_ABIL(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_SPD_ABIL(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010010ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_STATUS1(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_STATUS1(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010008ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_STATUS1(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010008ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPUX_STATUS2(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPUX_STATUS2(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576;
}
#else
#define CVMX_BGXX_SPUX_STATUS2(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010020ull) + (((offset) & 3) + ((block_id) & 7) * 0x10ull) * 1048576)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPU_BIST_STATUS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_SPU_BIST_STATUS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010318ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_SPU_BIST_STATUS(block_id) (CVMX_ADD_IO_SEG(0x00011800E0010318ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPU_DBG_CONTROL(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_SPU_DBG_CONTROL(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010300ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_SPU_DBG_CONTROL(block_id) (CVMX_ADD_IO_SEG(0x00011800E0010300ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPU_MEM_INT(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_SPU_MEM_INT(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010310ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_SPU_MEM_INT(block_id) (CVMX_ADD_IO_SEG(0x00011800E0010310ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPU_MEM_STATUS(unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && ((block_id <= 5)))))
		cvmx_warn("CVMX_BGXX_SPU_MEM_STATUS(%lu) is invalid on this chip\n", block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010308ull) + ((block_id) & 7) * 0x1000000ull;
}
#else
#define CVMX_BGXX_SPU_MEM_STATUS(block_id) (CVMX_ADD_IO_SEG(0x00011800E0010308ull) + ((block_id) & 7) * 0x1000000ull)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPU_SDSX_SKEW_STATUS(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPU_SDSX_SKEW_STATUS(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010320ull) + (((offset) & 3) + ((block_id) & 7) * 0x200000ull) * 8;
}
#else
#define CVMX_BGXX_SPU_SDSX_SKEW_STATUS(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010320ull) + (((offset) & 3) + ((block_id) & 7) * 0x200000ull) * 8)
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
static inline uint64_t CVMX_BGXX_SPU_SDSX_STATES(unsigned long offset, unsigned long block_id)
{
	if (!(
	      (OCTEON_IS_MODEL(OCTEON_CN78XX) && (((offset <= 3)) && ((block_id <= 5))))))
		cvmx_warn("CVMX_BGXX_SPU_SDSX_STATES(%lu,%lu) is invalid on this chip\n", offset, block_id);
	return CVMX_ADD_IO_SEG(0x00011800E0010340ull) + (((offset) & 3) + ((block_id) & 7) * 0x200000ull) * 8;
}
#else
#define CVMX_BGXX_SPU_SDSX_STATES(offset, block_id) (CVMX_ADD_IO_SEG(0x00011800E0010340ull) + (((offset) & 3) + ((block_id) & 7) * 0x200000ull) * 8)
#endif

/**
 * cvmx_bgx#_cmr#_config
 *
 * "***************************************************************
 * BGX Global per lmac related CSR (may be sent to any of GMP, SMU, SPU)
 * ***************************************************************
 * Logical PCS and MAC Configuration"
 */
union cvmx_bgxx_cmrx_config {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_config_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t enable                       : 1;  /**< Logical MAC/PCS Enable. This is the master enable for the LMAC. When clear, all the
                                                         dedicated BGX context state for the LMAC (state machines, FIFOs, counters, etc.) is reset,
                                                         and LMAC access to shared BGX resources (SMU/SPU data path, serdes lanes) is disabled.
                                                         When set, LMAC operation is enabled, including link bring-up, synchronization, and
                                                         transmit/receive of of idles and fault sequences. Note that configuration registers for an
                                                         LMAC are not reset when this bit is clear, allowing software to program them before
                                                         setting this bit to enable the LMAC.  This bit together with the LMAC_TYPE is also used
                                                         to enable the clocking to the GMP and/or blocks of the Super path(SMU and SPU).
                                                         CMR clocking will be enable when any of the paths are enabled. */
	uint64_t data_pkt_rx_en               : 1;  /**< Data Packet Receive Enable When ENABLE=1 and DATA_PKT_RX_EN=1, the reception of data
                                                         packets is enabled in the MAC layer. When ENABLE=1 and DATA_PKT_RX_EN=0, the MAC layer
                                                         drops received data and flow control packets. */
	uint64_t data_pkt_tx_en               : 1;  /**< Data Packet Transmit Enable When ENABLE=1 and DATA_PKT_TX_EN=1, the transmission of data
                                                         packets is enabled in the MAC layer. When ENABLE=1 and DATA_PKT_TX_EN=0, the MAC layer
                                                         suppresses the transmission of new data and packets for the LMAC */
	uint64_t int_beat_gen                 : 1;  /**< Internal Beat Generation This bit is used for debug/test purposes and should be clear
                                                         during normal operation. When set, the LMAC's PCS layer ignores RXVALID and
                                                         TXREADY/TXCREDIT from the associated serdes lane(s), internally generates fake (idle)
                                                         RXVALID and TXCREDIT pulses, and suppresses transmission to the serdes */
	uint64_t mix_en                       : 1;  /**< Managmenet enable(for 2 LMACs, namely
                                                         0 and 1 only). Setting this will pipe the
                                                         lmac to and from the MIX inteface. For
                                                         these LMACs LMAC_TYPE should be 0(SGMII) */
	uint64_t lmac_type                    : 3;  /**< Logical MAC/PCS Type:
                                                         ----------+----------------------------------------------------------
                                                         LMAC_TYPE | Name         Description                NUM_PCS_LANES
                                                         ----------+----------------------------------------------------------
                                                         0         | SGMII      SGMII/1000BASE-X             1
                                                         1         | XAUI       10GBASE-X/XAUI or DXAUI      4
                                                         2         | RXAUI      Reduced XAUI                 2
                                                         3         | 10G_R      10GBASE-R                    1
                                                         4         | 40G_R      40GBASE-R                    4
                                                         Other     | -          Reserved                     -
                                                         ----------+----------------------------------------------------------
                                                         NUM_PCS_LANES specifies the number of of PCS lanes that are valid for
                                                         each type. Each valid PCS lane is mapped to a physical serdes lane
                                                         based on the programming of the LANE_TO_SDS field below. */
	uint64_t lane_to_sds                  : 8;  /**< "PCS Lane to Serdes Mapping
                                                         This is an array of 2-bit values that map each logical PCS Lane to a
                                                         physical serdes lane, as follows:
                                                         ----------+----------------------------------------------------------
                                                         Bits     | Description                     Reset value
                                                         ----------+----------------------------------------------------------
                                                         <7:6>    | PCS Lane 3 Serdes ID            0x3
                                                         <5:4>    | PCS Lane 2 Serdes ID            0x2
                                                         <3:2>    | PCS Lane 1 Serdes ID            0x1
                                                         <1:0>    | PCS Lane 0 Serdes ID            0x0
                                                         ----------+----------------------------------------------------------
                                                         PCS lanes 0 through NUM_PCS_LANES-1 are valid, where NUM_PCS_LANES is
                                                         a function of the logical MAC/PCS type (see definition of
                                                         LMAC_TYPE field in this register). For example, when LMAC_TYPE =
                                                         RXAUI, then NUM_PCS_LANES = 2, PCS lanes 0 and 1 valid and the
                                                         associated physical serdes lanes are selected by bits <1:0> and
                                                         <3:2>, respectively.
                                                         For 40GBASE-R (LMAC_TYPE = 40G_R), all four PCS lanes are valid, and
                                                         the PCS lane IDs determine the block distribution order and
                                                         associated alignment markers on the *transmit* side. This is not
                                                         necessarily the order in which PCS lanes *receive* data because 802.3
                                                         allows multi-lane BASE-R receive lanes to be re-ordered. When a
                                                         lane (called 'service interface' in 802.3ba-2010) has achieved
                                                         alignment marker lock on the receive side (i.e. the associated
                                                         MARKER_LOCK bit is set in BR_ALGN_STATUS), then the actual detected
                                                         RX PCS lane number is recorded in the corresponding LNx_MAPPING
                                                         field in BR_LANE_MAP.
                                                         For SGMII, the lane serdes assignments are hardcoded. LMAC 0 will
                                                         always use lane 0 and is connected to sds 0. Same for LMAC 1, 2, 3." */
#else
	uint64_t lane_to_sds                  : 8;
	uint64_t lmac_type                    : 3;
	uint64_t mix_en                       : 1;
	uint64_t int_beat_gen                 : 1;
	uint64_t data_pkt_tx_en               : 1;
	uint64_t data_pkt_rx_en               : 1;
	uint64_t enable                       : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_cmrx_config_s        cn78xx;
};
typedef union cvmx_bgxx_cmrx_config cvmx_bgxx_cmrx_config_t;

/**
 * cvmx_bgx#_cmr#_int
 */
union cvmx_bgxx_cmrx_int {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t pko_nxc                      : 1;  /**< TX channel out-of-range from PKO Interface */
	uint64_t overflw                      : 1;  /**< RX Overflow */
	uint64_t pause_drp                    : 1;  /**< RX Pause packet was dropped due to full RXB FIFO */
#else
	uint64_t pause_drp                    : 1;
	uint64_t overflw                      : 1;
	uint64_t pko_nxc                      : 1;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_bgxx_cmrx_int_s           cn78xx;
};
typedef union cvmx_bgxx_cmrx_int cvmx_bgxx_cmrx_int_t;

/**
 * cvmx_bgx#_cmr#_prt_cbfc_ctl
 */
union cvmx_bgxx_cmrx_prt_cbfc_ctl {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_prt_cbfc_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_32_63               : 32;
	uint64_t phys_bp                      : 16; /**< When BGX_SMU_CBFC_CTL[RX_EN] is set and the HW is backpressuring any
                                                         lmacs (from either PFC/CBFC pause packets or the
                                                         BGX_CMR_TX_OVR_BP[TX_CHAN_BP] register) and all lmacs
                                                         indiciated by PHYS_BP are backpressured, simulate
                                                         physical backpressure by defering all packets on
                                                         the transmitter. */
	uint64_t reserved_0_15                : 16;
#else
	uint64_t reserved_0_15                : 16;
	uint64_t phys_bp                      : 16;
	uint64_t reserved_32_63               : 32;
#endif
	} s;
	struct cvmx_bgxx_cmrx_prt_cbfc_ctl_s  cn78xx;
};
typedef union cvmx_bgxx_cmrx_prt_cbfc_ctl cvmx_bgxx_cmrx_prt_cbfc_ctl_t;

/**
 * cvmx_bgx#_cmr#_rx_adr_ctl
 */
union cvmx_bgxx_cmrx_rx_adr_ctl {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_adr_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t cam_accept                   : 1;  /**< Allow or deny DMAC address filter
                                                         0 = reject the packet on DMAC CAM address match
                                                         1 = accept the packet on DMAC CAM address match */
	uint64_t mcst_mode                    : 2;  /**< Multicast Mode
                                                         0 = Force reject all multicast packets
                                                         1 = Force accept all multicast packets
                                                         2 = Use the Address Filter CAM
                                                         3 = Reserved. */
	uint64_t bcst_accept                  : 1;  /**< Allow or deny broadcast Packets
                                                         0 = reject all broadcast Packets
                                                         1 = accept all broadcast Packets */
#else
	uint64_t bcst_accept                  : 1;
	uint64_t mcst_mode                    : 2;
	uint64_t cam_accept                   : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_adr_ctl_s    cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_adr_ctl cvmx_bgxx_cmrx_rx_adr_ctl_t;

/**
 * cvmx_bgx#_cmr#_rx_bp_drop
 */
union cvmx_bgxx_cmrx_rx_bp_drop {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_bp_drop_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t mark                         : 7;  /**< Number of 8B cycles to reserve in the RX FIFO.
                                                         When the FIFO exceeds this count, packets will
                                                         be dropped and not buffered.
                                                         MARK should typically be programmed to BGX_CMR_RX_LMACS[LMACS]+1.
                                                         Failure to program correctly can lead to system
                                                         instability. */
#else
	uint64_t mark                         : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_bp_drop_s    cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_bp_drop cvmx_bgxx_cmrx_rx_bp_drop_t;

/**
 * cvmx_bgx#_cmr#_rx_bp_off
 */
union cvmx_bgxx_cmrx_rx_bp_off {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_bp_off_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t mark                         : 7;  /**< Water mark (8B cycles to deassert backpressure) */
#else
	uint64_t mark                         : 7;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_bp_off_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_bp_off cvmx_bgxx_cmrx_rx_bp_off_t;

/**
 * cvmx_bgx#_cmr#_rx_bp_on
 */
union cvmx_bgxx_cmrx_rx_bp_on {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_bp_on_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t mark                         : 12; /**< Hiwater mark (number of 8B cycles to assert bp)
                                                         Each register is for an individual lmac.
                                                         BGX_CMR_RX_BP_ON(MARK) must satisfy
                                                         BP_OFF <= BP_ON < (FIFO_SIZE - BP_DROP)
                                                         A value of zero will immediately assert back
                                                         pressure.
                                                         Recommended value is 1/4th the size of the per
                                                         lmac RX FIFO_SIZE as determined by BGX_CMR_RX_LMACS[LMACS].
                                                         For example, with 4 lmacs of type SGMII where
                                                         BGX_CMR_RX_LMACS[LMACS]=4, MARK=0x100(reset value) */
#else
	uint64_t mark                         : 12;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_bp_on_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_bp_on cvmx_bgxx_cmrx_rx_bp_on_t;

/**
 * cvmx_bgx#_cmr#_rx_bp_status
 */
union cvmx_bgxx_cmrx_rx_bp_status {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_bp_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t bp                           : 1;  /**< Per lmac backpressure status
                                                         0=lmac is not backpressued
                                                         1=lmac is backpressured */
#else
	uint64_t bp                           : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_bp_status_s  cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_bp_status cvmx_bgxx_cmrx_rx_bp_status_t;

/**
 * cvmx_bgx#_cmr#_rx_fifo_len
 */
union cvmx_bgxx_cmrx_rx_fifo_len {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_fifo_len_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t fifo_len                     : 13; /**< Per lmac fifo length. Useful for determining if fifo is empty when bringing an lmac down. */
#else
	uint64_t fifo_len                     : 13;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_fifo_len_s   cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_fifo_len cvmx_bgxx_cmrx_rx_fifo_len_t;

/**
 * cvmx_bgx#_cmr#_rx_id_map
 *
 * "**************************************************************
 * BGX CMR RXB related CSR per lmac
 * **************************************************************
 * BGX_CMR_RX_ID_MAP = RX LMAC ID mapping for X2P/PKI"
 */
union cvmx_bgxx_cmrx_rx_id_map {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_id_map_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t rid                          : 7;  /**< "Reassembly ID for this LMAC:
                                                         A shared pool of 96 reassembly ids (RIDs) exists for all MACs. See
                                                         description of RIDs in TBD.
                                                         The RID for this LMAC must be constrained such that it does not
                                                         overlap with any other MAC in the system. Its reset value has been
                                                         chosen such that this condition is satisified:
                                                         RID reset value = 4*(BGX_ID + 1) + LMAC_ID
                                                         Changes to RID must only occur when the LMAC is quiescent (i.e. the
                                                         LMAC receive interface is down and the RX fifo is empty)." */
	uint64_t pknd                         : 8;  /**< Port Kind for this LMAC. */
#else
	uint64_t pknd                         : 8;
	uint64_t rid                          : 7;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_id_map_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_id_map cvmx_bgxx_cmrx_rx_id_map_t;

/**
 * cvmx_bgx#_cmr#_rx_logl_xoff
 */
union cvmx_bgxx_cmrx_rx_logl_xoff {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_logl_xoff_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t xoff                         : 16; /**< Together with BGX(0..5)_CMR(0..3)_RX_LOGL_XON defines type of channel backpressure to
                                                         apply to the SMU.  Do not write when HiGig2 is enabled.
                                                         Writing 1 sets the same physical register as that which is cleared by XON.
                                                         An XOFF value of 1 will cause a backpressure on SMU. */
#else
	uint64_t xoff                         : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_logl_xoff_s  cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_logl_xoff cvmx_bgxx_cmrx_rx_logl_xoff_t;

/**
 * cvmx_bgx#_cmr#_rx_logl_xon
 */
union cvmx_bgxx_cmrx_rx_logl_xon {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_logl_xon_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t xon                          : 16; /**< Together with BGX(0..5)_CMR(0..3)_RX_LOGL_XOFF defines type of channel backpressure to
                                                         apply.  Do not write when HiGig2 is enabled.
                                                         Writing 1 clears the same physical register as that which is set by XOFF.
                                                         An XON value of 1 means only PKI channel BP can cause a backpressure on SMU. */
#else
	uint64_t xon                          : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_logl_xon_s   cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_logl_xon cvmx_bgxx_cmrx_rx_logl_xon_t;

/**
 * cvmx_bgx#_cmr#_rx_pause_drop_time
 */
union cvmx_bgxx_cmrx_rx_pause_drop_time {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_pause_drop_time_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t pause_time                   : 16; /**< Time extracted from the PAUSE packet dropped due to RXB fifo full */
#else
	uint64_t pause_time                   : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_pause_drop_time_s cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_pause_drop_time cvmx_bgxx_cmrx_rx_pause_drop_time_t;

/**
 * cvmx_bgx#_cmr#_rx_stat0
 *
 * Count of received packets - packets that are:
 * 1. not recognized as PAUSE packets
 * 2. not dropped due the DMAC filtering
 * 3. not dropped due FIFO full status
 * 4. not have have any other OPCODE (FCS, Length, etc).
 * Note: late collision packets (those signaled after eop) will be counted here
 * even though they are dropped by the CMR.
 */
union cvmx_bgxx_cmrx_rx_stat0 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Count of received packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat0_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat0 cvmx_bgxx_cmrx_rx_stat0_t;

/**
 * cvmx_bgx#_cmr#_rx_stat1
 *
 * Count of octets of recieved packets, refer to details above in STAT0 definition
 *
 */
union cvmx_bgxx_cmrx_rx_stat1 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Octet count of received packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat1_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat1 cvmx_bgxx_cmrx_rx_stat1_t;

/**
 * cvmx_bgx#_cmr#_rx_stat2
 *
 * Count of all packets received that were recognized as Flow Control or
 * PAUSE packets.  PAUSE packets with any kind of error are counted in
 * BGX_CMR_RX_STAT8(error stats register).  Pause packets
 * will never be counted in BGX_CMR_RX_STAT0. Pause packets dropped due to the dmac
 * filter will be counted in BGX_CMR_RX_STAT4 and not here.  Pause packets dropped due
 * full receive fifo will be counted in BGX_CMR_RX_STAT6 and not here.
 */
union cvmx_bgxx_cmrx_rx_stat2 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Count of received pause packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat2_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat2 cvmx_bgxx_cmrx_rx_stat2_t;

/**
 * cvmx_bgx#_cmr#_rx_stat3
 *
 * Count of octets of recieved pause and control packets
 *
 */
union cvmx_bgxx_cmrx_rx_stat3 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat3_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Octet count of received pause packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat3_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat3 cvmx_bgxx_cmrx_rx_stat3_t;

/**
 * cvmx_bgx#_cmr#_rx_stat4
 *
 * Count of all packets received that were dropped by the dmac filter.
 * Packets that match the DMAC will be dropped and counted here regardless
 * of whether they were err packets.  These packets will never be counted in
 * BGX_CMR_RX_STAT0.  DMAC drop packets that are dropped due to full receive fifo
 * will be counted in BGX_CMR_RX_STAT6 and not here.
 */
union cvmx_bgxx_cmrx_rx_stat4 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat4_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Count of filtered dmac packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat4_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat4 cvmx_bgxx_cmrx_rx_stat4_t;

/**
 * cvmx_bgx#_cmr#_rx_stat5
 *
 * Count of octets of filtered dmac packets
 *
 */
union cvmx_bgxx_cmrx_rx_stat5 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat5_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Octet count of filtered dmac packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat5_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat5 cvmx_bgxx_cmrx_rx_stat5_t;

/**
 * cvmx_bgx#_cmr#_rx_stat6
 *
 * Count of all packets received that were dropped due to a full receive FIFO.
 * It does not count any packet that is truncated at the point at the point of overflow
 * and sent on to the PKI.  This counts all entire packets dropped by the FIFO for a
 * given lmac regardless of whether they are errored, dmac drop packets
 * or control packets
 */
union cvmx_bgxx_cmrx_rx_stat6 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat6_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Count of dropped packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat6_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat6 cvmx_bgxx_cmrx_rx_stat6_t;

/**
 * cvmx_bgx#_cmr#_rx_stat7
 *
 * Count of octets of packets received that were dropped due to a full receive FIFO.
 *
 */
union cvmx_bgxx_cmrx_rx_stat7 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat7_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Octet count of dropped packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat7_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat7 cvmx_bgxx_cmrx_rx_stat7_t;

/**
 * cvmx_bgx#_cmr#_rx_stat8
 *
 * Count of all packets received with some error that were not dropped
 * either due to the dmac filter or lack of room in the receive FIFO.
 */
union cvmx_bgxx_cmrx_rx_stat8 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_stat8_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t cnt                          : 48; /**< Count of error packets */
#else
	uint64_t cnt                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_stat8_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_stat8 cvmx_bgxx_cmrx_rx_stat8_t;

/**
 * cvmx_bgx#_cmr#_rx_weight
 */
union cvmx_bgxx_cmrx_rx_weight {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_rx_weight_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t weight                       : 4;  /**< For the weighted round robin algorithm in CMR RXB.
                                                         Weight to assign for this LMAC relative to other
                                                         LMAC weights. Defaults to round robin(non weighted
                                                         minimum setting of 1). A setting of 0 effectively
                                                         takes the lmac out of eligibility. */
#else
	uint64_t weight                       : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_cmrx_rx_weight_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_rx_weight cvmx_bgxx_cmrx_rx_weight_t;

/**
 * cvmx_bgx#_cmr#_tx_channel
 *
 * "**************************************************************
 * BGX CMR TXB related CSR
 * **************************************************************
 * BGX_CMR_TX_CHANNEL"
 */
union cvmx_bgxx_cmrx_tx_channel {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_channel_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_32_63               : 32;
	uint64_t msk                          : 16; /**< BP channel mask
                                                         BGX can completely ignore the channel BP for
                                                         channel specified by the MSK field.  Any channel
                                                         in which MSK == 1, will never send BP information
                                                         to PKO. */
	uint64_t dis                          : 16; /**< Credit Return BP disable
                                                         BGX stops returning channel credits for any channel
                                                         that is backpressured.  These bits can be used to
                                                         override that.  DIS == 1 allows channel credits to
                                                         flow back regardless of the backpressure for that chan */
#else
	uint64_t dis                          : 16;
	uint64_t msk                          : 16;
	uint64_t reserved_32_63               : 32;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_channel_s    cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_channel cvmx_bgxx_cmrx_tx_channel_t;

/**
 * cvmx_bgx#_cmr#_tx_fifo_len
 */
union cvmx_bgxx_cmrx_tx_fifo_len {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_fifo_len_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t lmac_idle                    : 1;  /**< Idle signal to identify when all credits and other pipeline buffers are also cleared out
                                                         and lmac can be considered IDLE in the BGX CMR TX. */
	uint64_t fifo_len                     : 13; /**< Per lmac TXB main fifo length. Useful for determining if main fifo is empty when bringing
                                                         an lmac down. */
#else
	uint64_t fifo_len                     : 13;
	uint64_t lmac_idle                    : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_fifo_len_s   cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_fifo_len cvmx_bgxx_cmrx_tx_fifo_len_t;

/**
 * cvmx_bgx#_cmr#_tx_hg2_status
 */
union cvmx_bgxx_cmrx_tx_hg2_status {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_hg2_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_32_63               : 32;
	uint64_t xof                          : 16; /**< 16 bit xof back pressure vector from HiGig2 msg pkt
                                                         or from PFC/CBFC packets.
                                                         Non-zero only when logical back pressure is active
                                                         All bits will be 0 when LGTIM2GO=0 */
	uint64_t lgtim2go                     : 16; /**< Logical packet flow back pressure time remaining
                                                         Initial value set from xof time field of HiGig2
                                                         message packet received or a function of the
                                                         enabled and current timers for PFC/CBFC packets.
                                                         Non-zero only when logical back pressure is active */
#else
	uint64_t lgtim2go                     : 16;
	uint64_t xof                          : 16;
	uint64_t reserved_32_63               : 32;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_hg2_status_s cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_hg2_status cvmx_bgxx_cmrx_tx_hg2_status_t;

/**
 * cvmx_bgx#_cmr#_tx_ovr_bp
 */
union cvmx_bgxx_cmrx_tx_ovr_bp {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_ovr_bp_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t tx_chan_bp                   : 16; /**< Per channel BP sent to PKO
                                                         0=Channel is available
                                                         1=Channel should be back pressured */
#else
	uint64_t tx_chan_bp                   : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_ovr_bp_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_ovr_bp cvmx_bgxx_cmrx_tx_ovr_bp_t;

/**
 * cvmx_bgx#_cmr#_tx_stat0
 */
union cvmx_bgxx_cmrx_tx_stat0 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t xscol                        : 48; /**< Number of packets dropped (never successfully
                                                         sent) due to excessive collision.  Defined by
                                                         BGX_GMP_GMI_TX_COL_ATTEMPT[LIMIT].
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t xscol                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat0_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat0 cvmx_bgxx_cmrx_tx_stat0_t;

/**
 * cvmx_bgx#_cmr#_tx_stat1
 */
union cvmx_bgxx_cmrx_tx_stat1 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t xsdef                        : 48; /**< Number of packets dropped (never successfully
                                                         sent) due to excessive deferal
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t xsdef                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat1_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat1 cvmx_bgxx_cmrx_tx_stat1_t;

/**
 * cvmx_bgx#_cmr#_tx_stat10
 */
union cvmx_bgxx_cmrx_tx_stat10 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat10_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist4                        : 48; /**< Number of packets sent with an octet count
                                                         between 256 and 511 inclusive. */
#else
	uint64_t hist4                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat10_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat10 cvmx_bgxx_cmrx_tx_stat10_t;

/**
 * cvmx_bgx#_cmr#_tx_stat11
 */
union cvmx_bgxx_cmrx_tx_stat11 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat11_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist5                        : 48; /**< Number of packets sent with an octet count
                                                         between 512 and 1023 inclusive. */
#else
	uint64_t hist5                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat11_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat11 cvmx_bgxx_cmrx_tx_stat11_t;

/**
 * cvmx_bgx#_cmr#_tx_stat12
 */
union cvmx_bgxx_cmrx_tx_stat12 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat12_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist6                        : 48; /**< Number of packets sent with an octet count
                                                         between 1024 and 1518 inclusive. */
#else
	uint64_t hist6                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat12_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat12 cvmx_bgxx_cmrx_tx_stat12_t;

/**
 * cvmx_bgx#_cmr#_tx_stat13
 */
union cvmx_bgxx_cmrx_tx_stat13 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat13_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist7                        : 48; /**< Number of packets sent with an octet count
                                                         of > 1518. */
#else
	uint64_t hist7                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat13_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat13 cvmx_bgxx_cmrx_tx_stat13_t;

/**
 * cvmx_bgx#_cmr#_tx_stat14
 */
union cvmx_bgxx_cmrx_tx_stat14 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat14_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t bcst                         : 48; /**< Number of packets sent to broadcast DMAC.
                                                         Does not include MCST packets. */
#else
	uint64_t bcst                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat14_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat14 cvmx_bgxx_cmrx_tx_stat14_t;

/**
 * cvmx_bgx#_cmr#_tx_stat15
 */
union cvmx_bgxx_cmrx_tx_stat15 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat15_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t mcst                         : 48; /**< Number of packets sent to multicast DMAC.
                                                         Does not include BCST packets. */
#else
	uint64_t mcst                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat15_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat15 cvmx_bgxx_cmrx_tx_stat15_t;

/**
 * cvmx_bgx#_cmr#_tx_stat16
 */
union cvmx_bgxx_cmrx_tx_stat16 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat16_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t undflw                       : 48; /**< Number of underflow packets */
#else
	uint64_t undflw                       : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat16_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat16 cvmx_bgxx_cmrx_tx_stat16_t;

/**
 * cvmx_bgx#_cmr#_tx_stat17
 */
union cvmx_bgxx_cmrx_tx_stat17 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat17_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t ctl                          : 48; /**< Number of Control packets (PAUSE flow control)
                                                         generated by BGX.  It does not include control
                                                         packets forwarded or generated by the PP's.
                                                         CTL will count the number of generated PFC frames.
                                                         CTL will not track the number of generated HG2
                                                         messages. */
#else
	uint64_t ctl                          : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat17_s     cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat17 cvmx_bgxx_cmrx_tx_stat17_t;

/**
 * cvmx_bgx#_cmr#_tx_stat2
 */
union cvmx_bgxx_cmrx_tx_stat2 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t mcol                         : 48; /**< Number of packets sent with multiple collisions
                                                         but < BGX_GMP_GMI_TX_COL_ATTEMPT[LIMIT].
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t mcol                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat2_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat2 cvmx_bgxx_cmrx_tx_stat2_t;

/**
 * cvmx_bgx#_cmr#_tx_stat3
 */
union cvmx_bgxx_cmrx_tx_stat3 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat3_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t scol                         : 48; /**< Number of packets sent with a single collision
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t scol                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat3_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat3 cvmx_bgxx_cmrx_tx_stat3_t;

/**
 * cvmx_bgx#_cmr#_tx_stat4
 */
union cvmx_bgxx_cmrx_tx_stat4 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat4_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t octs                         : 48; /**< Number of total octets sent on the interface.
                                                         Does not count octets from frames that were
                                                         truncated due to collisions in halfdup mode. */
#else
	uint64_t octs                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat4_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat4 cvmx_bgxx_cmrx_tx_stat4_t;

/**
 * cvmx_bgx#_cmr#_tx_stat5
 */
union cvmx_bgxx_cmrx_tx_stat5 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat5_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t pkts                         : 48; /**< Number of total frames sent on the interface.
                                                         Does not count frames that were truncated due to
                                                         collisions in halfdup mode. */
#else
	uint64_t pkts                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat5_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat5 cvmx_bgxx_cmrx_tx_stat5_t;

/**
 * cvmx_bgx#_cmr#_tx_stat6
 */
union cvmx_bgxx_cmrx_tx_stat6 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat6_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist0                        : 48; /**< Number of packets sent with an octet count
                                                         of < 64. */
#else
	uint64_t hist0                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat6_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat6 cvmx_bgxx_cmrx_tx_stat6_t;

/**
 * cvmx_bgx#_cmr#_tx_stat7
 */
union cvmx_bgxx_cmrx_tx_stat7 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat7_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist1                        : 48; /**< Number of packets sent with an octet count
                                                         of 64. */
#else
	uint64_t hist1                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat7_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat7 cvmx_bgxx_cmrx_tx_stat7_t;

/**
 * cvmx_bgx#_cmr#_tx_stat8
 */
union cvmx_bgxx_cmrx_tx_stat8 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat8_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist2                        : 48; /**< Number of packets sent with an octet count
                                                         of > 64 and < 128. */
#else
	uint64_t hist2                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat8_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat8 cvmx_bgxx_cmrx_tx_stat8_t;

/**
 * cvmx_bgx#_cmr#_tx_stat9
 */
union cvmx_bgxx_cmrx_tx_stat9 {
	uint64_t u64;
	struct cvmx_bgxx_cmrx_tx_stat9_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t hist3                        : 48; /**< Number of packets sent with an octet count
                                                         between 128 and 255 inclusive. */
#else
	uint64_t hist3                        : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_cmrx_tx_stat9_s      cn78xx;
};
typedef union cvmx_bgxx_cmrx_tx_stat9 cvmx_bgxx_cmrx_tx_stat9_t;

/**
 * cvmx_bgx#_cmr_bad
 */
union cvmx_bgxx_cmr_bad {
	uint64_t u64;
	struct cvmx_bgxx_cmr_bad_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t rxb_nxl                      : 1;  /**< Receive side lmac_id > BGX_CMR_RX_LMACS */
#else
	uint64_t rxb_nxl                      : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_bgxx_cmr_bad_s            cn78xx;
};
typedef union cvmx_bgxx_cmr_bad cvmx_bgxx_cmr_bad_t;

/**
 * cvmx_bgx#_cmr_bist_status
 */
union cvmx_bgxx_cmr_bist_status {
	uint64_t u64;
	struct cvmx_bgxx_cmr_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_25_63               : 39;
	uint64_t status                       : 25; /**< "BIST Results.
                                                          HW sets a bit in BIST for memory that fails. INTERNAL:
                                                         - 0: bgx#.rxb.infif_gmp
                                                         - 1: bgx#.rxb.infif_smu
                                                         - 2: bgx#.rxb.fif_bnk00
                                                         - 3: bgx#.rxb.fif_bnk01
                                                         - 4: bgx#.rxb.fif_bnk10
                                                         - 5: bgx#.rxb.fif_bnk11
                                                         - 6: bgx#.rxb.skd_fif
                                                         - 7: bgx#.rxb_mix0_fif
                                                         - 8: bgx#.rxb_mix1_fif
                                                         - 9: RAZ
                                                          - 10: bgx#.txb_fif_bnk0
                                                          - 11: bgx#.txb_fif_bnk1
                                                          - 12: bgx#.txb_skd_fif
                                                          - 13: bgx#.txb_mix0_fif
                                                          - 14: bgx#.txb_mix1_fif
                                                          - 15: RAZ
                                                          - 16: RAZ
                                                          - 17: RAZ
                                                          - 18: RAZ
                                                          - 19: RAZ
                                                          - 20: RAZ
                                                          - 21: RAZ
                                                          - 22: RAZ
                                                          - 23: RAZ
                                                          - 24: RAZ" */
#else
	uint64_t status                       : 25;
	uint64_t reserved_25_63               : 39;
#endif
	} s;
	struct cvmx_bgxx_cmr_bist_status_s    cn78xx;
};
typedef union cvmx_bgxx_cmr_bist_status cvmx_bgxx_cmr_bist_status_t;

/**
 * cvmx_bgx#_cmr_chan_msk_and
 */
union cvmx_bgxx_cmr_chan_msk_and {
	uint64_t u64;
	struct cvmx_bgxx_cmr_chan_msk_and_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t msk_and                      : 64; /**< Assert physical BP when the BP channel vector
                                                         combined with MSK_AND indicates BP as follows.
                                                         phys_bp_msk_and =
                                                         (CHAN_VECTOR<x:y> & MSK_AND<x:y>) == MSK_AND<x:y>
                                                         phys_bp = phys_bp_msk_or || phys_bp_msk_and
                                                         In single LMACS configs, x=63, y=0
                                                         In multi LMAC configs, x/y are set as follows:
                                                         LMAC interface0, x=15, y=0
                                                         LMAC interface1, x=31, y=16
                                                         LMAC interface2, x=47, y=32
                                                         LMAC interface3, x=63, y=48 */
#else
	uint64_t msk_and                      : 64;
#endif
	} s;
	struct cvmx_bgxx_cmr_chan_msk_and_s   cn78xx;
};
typedef union cvmx_bgxx_cmr_chan_msk_and cvmx_bgxx_cmr_chan_msk_and_t;

/**
 * cvmx_bgx#_cmr_chan_msk_or
 */
union cvmx_bgxx_cmr_chan_msk_or {
	uint64_t u64;
	struct cvmx_bgxx_cmr_chan_msk_or_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t msk_or                       : 64; /**< Assert physical BP when the BP channel vector
                                                         combined with MSK_OR indicates BP as follows.
                                                         phys_bp_msk_or =
                                                         (CHAN_VECTOR<x:y> & MSK_OR<x:y>) != 0
                                                         phys_bp = phys_bp_msk_or || phys_bp_msk_and
                                                         In single LMAC config, x=63, y=0
                                                         In multi LMAC config, x/y are set as follows:
                                                         LMAC interface0, x=15, y=0
                                                         LMAC interface1, x=31, y=16
                                                         LMAC interface2, x=47, y=32
                                                         LMAC interface3, x=63, y=48 */
#else
	uint64_t msk_or                       : 64;
#endif
	} s;
	struct cvmx_bgxx_cmr_chan_msk_or_s    cn78xx;
};
typedef union cvmx_bgxx_cmr_chan_msk_or cvmx_bgxx_cmr_chan_msk_or_t;

/**
 * cvmx_bgx#_cmr_global_config
 *
 * "***************************************************************
 * BGX Global related CSR (affects all lmacs and may be sent to any of GMP, SMU, SPU)
 * ***************************************************************
 * Global CMR, PCS and MAC Configuration"
 */
union cvmx_bgxx_cmr_global_config {
	uint64_t u64;
	struct cvmx_bgxx_cmr_global_config_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t cmr_mix1_reset               : 1;  /**< If the MIX1 block is reset, software also needs to reset the the MIX interface in the BGX
                                                         by setting this bit to 1. It resets the MIX interface state in the BGX (mix FIFO and
                                                         pending requests to MIX) and prevents the RXB FIFOs for all LMACs from pushing data
                                                         to the interface. Setting this bit to 0 will not reset the MIX interface.
                                                         After MIX comes out of reset, software should clear CMR_MIX_RESET. */
	uint64_t cmr_mix0_reset               : 1;  /**< If the MIX0 block is reset, software also needs to reset the the MIX interface in the BGX
                                                         by setting this bit to 1. It resets the MIX interface state in the BGX (mix FIFO and
                                                         pending requests to MIX) and prevents the RXB FIFOs for all LMACs from pushing data
                                                         to the interface. Setting this bit to 0 will not reset the MIX interface.
                                                         After MIX comes out of reset, software should clear CMR_MIX_RESET. */
	uint64_t cmr_x2p_reset                : 1;  /**< If the PKI block is reset, software also needs to reset the the X2P interface in the BGX
                                                         by setting this bit to 1. It resets the X2P interface state in the BGX (skid FIFO and
                                                         pending requests to PKI) and prevents the RXB FIFOs for all LMACs from pushing data
                                                         to the interface. Setting this bit to 0 will not reset the X2P interface.
                                                         After PKI comes out of reset, software should clear CMR_X2P_RESET. */
	uint64_t bgx_clk_enable               : 1;  /**< The global clock enable for BGX.  Setting this bit will override clock enables set by the
                                                         BGX_CMR_CONFIG[ENABLE] and BGX_CMR_CONFIG[LMAC_TYPE] register bits, essentially
                                                         turning on clocks for the entire BGX.  Setting this bit to 0 will result in
                                                         not overriding clock enables set by BGX_CMR_CONFIG[ENABLE] and
                                                         BGX_CMR_CONFIG[LMAC_TYPE] register bits. */
	uint64_t pmux_sds_sel                 : 1;  /**< The global serdes output select for BGX.  Setting this bit to 1 will select serdes output
                                                         1 Setting this bit to 1 will select serdes output 0. */
#else
	uint64_t pmux_sds_sel                 : 1;
	uint64_t bgx_clk_enable               : 1;
	uint64_t cmr_x2p_reset                : 1;
	uint64_t cmr_mix0_reset               : 1;
	uint64_t cmr_mix1_reset               : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_bgxx_cmr_global_config_s  cn78xx;
};
typedef union cvmx_bgxx_cmr_global_config cvmx_bgxx_cmr_global_config_t;

/**
 * cvmx_bgx#_cmr_mem_ctrl
 */
union cvmx_bgxx_cmr_mem_ctrl {
	uint64_t u64;
	struct cvmx_bgxx_cmr_mem_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_24_63               : 40;
	uint64_t txb_skid_synd                : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for RXB SKID FIFO */
	uint64_t txb_skid_cor_dis             : 1;  /**< ECC correction disable for the RXB SKID FIFO */
	uint64_t txb_fif_bk1_syn              : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for TXB main Bank1 */
	uint64_t txb_fif_bk1_cdis             : 1;  /**< ECC corr disable for the TXB main Bank1 */
	uint64_t txb_fif_bk0_syn              : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for TXB main Bank0 */
	uint64_t txb_fif_bk0_cdis             : 1;  /**< ECC corr disable for the TXB main Bank0 */
	uint64_t rxb_skid_synd                : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for RXB SKID FIFO */
	uint64_t rxb_skid_cor_dis             : 1;  /**< ECC correction disable for the RXB SKID FIFO */
	uint64_t rxb_fif_bk1_syn1             : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for RXB main Bank1 srf1 */
	uint64_t rxb_fif_bk1_cdis1            : 1;  /**< ECC corr disable for the RXB main Bank1 srf1 */
	uint64_t rxb_fif_bk1_syn0             : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for RXB main Bank1 srf0 */
	uint64_t rxb_fif_bk1_cdis0            : 1;  /**< ECC corr disable for the RXB main Bank1 srf0 */
	uint64_t rxb_fif_bk0_syn1             : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for RXB main Bank0 srf1 */
	uint64_t rxb_fif_bk0_cdis1            : 1;  /**< ECC corr disable for the RXB main Bank0 srf1 */
	uint64_t rxb_fif_bk0_syn0             : 2;  /**< Syndrom to flip and generate 1-bit/2-bits error for RXB main Bank0 srf0 */
	uint64_t rxb_fif_bk0_cdis0            : 1;  /**< ECC corr disable for the RXB main Bank0 srf0 */
#else
	uint64_t rxb_fif_bk0_cdis0            : 1;
	uint64_t rxb_fif_bk0_syn0             : 2;
	uint64_t rxb_fif_bk0_cdis1            : 1;
	uint64_t rxb_fif_bk0_syn1             : 2;
	uint64_t rxb_fif_bk1_cdis0            : 1;
	uint64_t rxb_fif_bk1_syn0             : 2;
	uint64_t rxb_fif_bk1_cdis1            : 1;
	uint64_t rxb_fif_bk1_syn1             : 2;
	uint64_t rxb_skid_cor_dis             : 1;
	uint64_t rxb_skid_synd                : 2;
	uint64_t txb_fif_bk0_cdis             : 1;
	uint64_t txb_fif_bk0_syn              : 2;
	uint64_t txb_fif_bk1_cdis             : 1;
	uint64_t txb_fif_bk1_syn              : 2;
	uint64_t txb_skid_cor_dis             : 1;
	uint64_t txb_skid_synd                : 2;
	uint64_t reserved_24_63               : 40;
#endif
	} s;
	struct cvmx_bgxx_cmr_mem_ctrl_s       cn78xx;
};
typedef union cvmx_bgxx_cmr_mem_ctrl cvmx_bgxx_cmr_mem_ctrl_t;

/**
 * cvmx_bgx#_cmr_mem_int
 *
 * "***************************************************************************************
 * BGX CMR related CSR starting here with interrupts, then later RX and TX side registers
 * ***************************************************************************************
 * BGX_CMR_MEM_INT = Memory Interrupt Register"
 */
union cvmx_bgxx_cmr_mem_int {
	uint64_t u64;
	struct cvmx_bgxx_cmr_mem_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_18_63               : 46;
	uint64_t smu_in_overfl                : 1;  /**< RX SMU INFIFO Overflow */
	uint64_t gmp_in_overfl                : 1;  /**< RX GMP INFIFO Overflow */
	uint64_t txb_skid_sbe                 : 1;  /**< TXB SKID FIFO single bit error */
	uint64_t txb_skid_dbe                 : 1;  /**< TXB SKID FIFO double bit error */
	uint64_t txb_fif_bk1_sbe              : 1;  /**< TXB Main FIFO Bank1 single bit error */
	uint64_t txb_fif_bk1_dbe              : 1;  /**< TXB Main FIFO Bank1 double bit error */
	uint64_t txb_fif_bk0_sbe              : 1;  /**< TXB Main FIFO Bank0 single bit error */
	uint64_t txb_fif_bk0_dbe              : 1;  /**< TXB Main FIFO Bank0 double bit error */
	uint64_t rxb_skid_sbe                 : 1;  /**< RXB SKID FIFO single bit error */
	uint64_t rxb_skid_dbe                 : 1;  /**< RXB SKID FIFO double bit error */
	uint64_t rxb_fif_bk1_sbe1             : 1;  /**< RXB Main FIFO Bank1 srf1 single bit error */
	uint64_t rxb_fif_bk1_dbe1             : 1;  /**< RXB Main FIFO Bank1 srf1 double bit error */
	uint64_t rxb_fif_bk1_sbe0             : 1;  /**< RXB Main FIFO Bank1 srf0 single bit error */
	uint64_t rxb_fif_bk1_dbe0             : 1;  /**< RXB Main FIFO Bank1 srf0 double bit error */
	uint64_t rxb_fif_bk0_sbe1             : 1;  /**< RXB Main FIFO Bank0 srf1 single bit error */
	uint64_t rxb_fif_bk0_dbe1             : 1;  /**< RXB Main FIFO Bank0 srf1 double bit error */
	uint64_t rxb_fif_bk0_sbe0             : 1;  /**< RXB Main FIFO Bank0 srf0 single bit error */
	uint64_t rxb_fif_bk0_dbe0             : 1;  /**< RXB Main FIFO Bank0 srf0 double bit error */
#else
	uint64_t rxb_fif_bk0_dbe0             : 1;
	uint64_t rxb_fif_bk0_sbe0             : 1;
	uint64_t rxb_fif_bk0_dbe1             : 1;
	uint64_t rxb_fif_bk0_sbe1             : 1;
	uint64_t rxb_fif_bk1_dbe0             : 1;
	uint64_t rxb_fif_bk1_sbe0             : 1;
	uint64_t rxb_fif_bk1_dbe1             : 1;
	uint64_t rxb_fif_bk1_sbe1             : 1;
	uint64_t rxb_skid_dbe                 : 1;
	uint64_t rxb_skid_sbe                 : 1;
	uint64_t txb_fif_bk0_dbe              : 1;
	uint64_t txb_fif_bk0_sbe              : 1;
	uint64_t txb_fif_bk1_dbe              : 1;
	uint64_t txb_fif_bk1_sbe              : 1;
	uint64_t txb_skid_dbe                 : 1;
	uint64_t txb_skid_sbe                 : 1;
	uint64_t gmp_in_overfl                : 1;
	uint64_t smu_in_overfl                : 1;
	uint64_t reserved_18_63               : 46;
#endif
	} s;
	struct cvmx_bgxx_cmr_mem_int_s        cn78xx;
};
typedef union cvmx_bgxx_cmr_mem_int cvmx_bgxx_cmr_mem_int_t;

/**
 * cvmx_bgx#_cmr_nxc_adr
 */
union cvmx_bgxx_cmr_nxc_adr {
	uint64_t u64;
	struct cvmx_bgxx_cmr_nxc_adr_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t lmac_id                      : 2;  /**< Logged LMAC_ID associated with NXC exceptions */
	uint64_t channel                      : 12; /**< Logged channel for NXC exceptions */
#else
	uint64_t channel                      : 12;
	uint64_t lmac_id                      : 2;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_bgxx_cmr_nxc_adr_s        cn78xx;
};
typedef union cvmx_bgxx_cmr_nxc_adr cvmx_bgxx_cmr_nxc_adr_t;

/**
 * cvmx_bgx#_cmr_rx_adr#_cam
 *
 * "**************************************************************
 * Following regs are not per lane but shared in the BGX CMR RXB
 * **************************************************************
 * BGX_CMR_RX_ADR_CAM = Address Filtering CAM"
 */
union cvmx_bgxx_cmr_rx_adrx_cam {
	uint64_t u64;
	struct cvmx_bgxx_cmr_rx_adrx_cam_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_54_63               : 10;
	uint64_t id                           : 2;  /**< Logical Mac ID this DMAC CAM address will apply to
                                                         BGX has 32 DMAC CAM entries that can be accessed
                                                         with the BGX_CMR_RX_ADR_CAM[0..31] CSRs.
                                                         These 32 DMAC entries can be used by any of the
                                                         four SGMII MACs or the 10G/40G MACs using the
                                                         these register bits. A typical configuration is to
                                                         provide 8 CAM entries per lmac id which is
                                                         configured using the following settings:
                                                         lmac0 BGX_CMR_RX_ADR_CAM[0..7] ID= 2'b00
                                                         lmac1 BGX_CMR_RX_ADR_CAM[8..15] ID= 2'b01
                                                         lmac2 BGX_CMR_RX_ADR_CAM[16..23] ID= 2'b10
                                                         lmac3 BGX_CMR_RX_ADR_CAM[24..31] ID= 2'b11 */
	uint64_t reserved_49_51               : 3;
	uint64_t en                           : 1;  /**< CAM Entry Enable for this DMAC Address
                                                         A value of 1 means include this address in the
                                                         matching algorithm
                                                         A value of 0 means dont include this address in
                                                         matching algorigthm */
	uint64_t adr                          : 48; /**< DMAC address in the CAM used for matching
                                                         The CAM matches against unicast or multicast DMAC
                                                         addresses.
                                                         ALL BGX_CMR_RX_ADR_CAM[0..31] CSRs may be used
                                                         in any of the LMAC_TYPE combinations such that any BGX
                                                         MAC can use any of the 32 common DMAC entries. */
#else
	uint64_t adr                          : 48;
	uint64_t en                           : 1;
	uint64_t reserved_49_51               : 3;
	uint64_t id                           : 2;
	uint64_t reserved_54_63               : 10;
#endif
	} s;
	struct cvmx_bgxx_cmr_rx_adrx_cam_s    cn78xx;
};
typedef union cvmx_bgxx_cmr_rx_adrx_cam cvmx_bgxx_cmr_rx_adrx_cam_t;

/**
 * cvmx_bgx#_cmr_rx_lmacs
 */
union cvmx_bgxx_cmr_rx_lmacs {
	uint64_t u64;
	struct cvmx_bgxx_cmr_rx_lmacs_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t lmacs                        : 3;  /**< "Number of LMACS: Specifies the number of LMACs that can be enabled.
                                                         This determines the logical RX buffer size per LMAC and the maximum
                                                         LMAC ID that can be used:
                                                         ----------+---------------------------------------------------
                                                         LMACS     |   RX buffer           Maximum
                                                                   |   size per LMAC       LMAC ID
                                                         ----------+---------------------------------------------------
                                                         0         |   reserved
                                                         1         |   64KB                0
                                                         2         |   32KB                1
                                                         3         |   16KB                2
                                                         4         |   16KB                3
                                                         5-7       |   reserved
                                                         ----------+---------------------------------------------------
                                                         Note: The maximum LMAC ID is determined by the smaller of
                                                         BGX_CMR_RX_LMACS[LMACS] and BGX_CMR_TX_LMACS[LMACS]. The two fields
                                                         should be set to the same value for normal operation." */
#else
	uint64_t lmacs                        : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_bgxx_cmr_rx_lmacs_s       cn78xx;
};
typedef union cvmx_bgxx_cmr_rx_lmacs cvmx_bgxx_cmr_rx_lmacs_t;

/**
 * cvmx_bgx#_cmr_rx_ovr_bp
 */
union cvmx_bgxx_cmr_rx_ovr_bp {
	uint64_t u64;
	struct cvmx_bgxx_cmr_rx_ovr_bp_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t en                           : 4;  /**< Per lmac Enable back pressure override */
	uint64_t bp                           : 4;  /**< Per lmac BackPressure status to use
                                                         0=lmac is available
                                                         1=lmac should be back pressured */
	uint64_t ign_fifo_bp                  : 4;  /**< Ignore the RX FIFO BP_ON signal when computing BP.
                                                         CMR will not backpressure the mac due to the fifo length passing BP_ON mark. */
#else
	uint64_t ign_fifo_bp                  : 4;
	uint64_t bp                           : 4;
	uint64_t en                           : 4;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_bgxx_cmr_rx_ovr_bp_s      cn78xx;
};
typedef union cvmx_bgxx_cmr_rx_ovr_bp cvmx_bgxx_cmr_rx_ovr_bp_t;

/**
 * cvmx_bgx#_cmr_tx_lmacs
 *
 * "**************************************************************
 * Following regs are not per lane but shared in the BGX CMR TXB
 * **************************************************************
 * BGX_CMR_TX_LMACS = Number of TX lmacs"
 */
union cvmx_bgxx_cmr_tx_lmacs {
	uint64_t u64;
	struct cvmx_bgxx_cmr_tx_lmacs_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t lmacs                        : 3;  /**< "Number of LMACS: Specifies the number of LMACs that can be enabled.
                                                         This determines the logical TX buffer size per LMAC and the maximum
                                                         LMAC ID that can be used:
                                                         ----------+---------------------------------------------------
                                                         LMACS     |   TX buffer           Maximum
                                                                   |   size per LMAC       LMAC ID
                                                         ----------+---------------------------------------------------
                                                         0         |   reserved
                                                         1         |   32KB                0
                                                         2         |   16KB                1
                                                         3         |   8KB                 2
                                                         4         |   8KB                 3
                                                         5-7       |   reserved
                                                         ----------+---------------------------------------------------
                                                         Note: The maximum LMAC ID is determined by the smaller of
                                                         BGX_CMR_RX_LMACS[LMACS] and BGX_CMR_TX_LMACS[LMACS]. The two fields
                                                         should be set to the same value for normal operation." */
#else
	uint64_t lmacs                        : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_bgxx_cmr_tx_lmacs_s       cn78xx;
};
typedef union cvmx_bgxx_cmr_tx_lmacs cvmx_bgxx_cmr_tx_lmacs_t;

/**
 * cvmx_bgx#_gmp_gmi_prt#_cfg
 */
union cvmx_bgxx_gmp_gmi_prtx_cfg {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_prtx_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_14_63               : 50;
	uint64_t tx_idle                      : 1;  /**< TX Machine is idle */
	uint64_t rx_idle                      : 1;  /**< RX Machine is idle */
	uint64_t reserved_9_11                : 3;
	uint64_t speed_msb                    : 1;  /**< Link Speed MSB [SPEED_MSB:SPEED]
                                                         10 = 10Mbs operation
                                                         00 = 100Mbs operation
                                                         01 = 1000Mbs operation
                                                         11 = Reserved
                                                         (SGMII/1000Base-X only) */
	uint64_t reserved_4_7                 : 4;
	uint64_t slottime                     : 1;  /**< Slot Time for Half-Duplex operation
                                                         0 = 512 bitimes (10/100Mbs operation)
                                                         1 = 4096 bitimes (1000Mbs operation)
                                                         (SGMII/1000Base-X only) */
	uint64_t duplex                       : 1;  /**< Duplex
                                                         0 = Half Duplex (collisions/extentions/bursts)
                                                         1 = Full Duplex
                                                         (SGMII/1000Base-X only) */
	uint64_t speed                        : 1;  /**< Link Speed LSB [SPEED_MSB:SPEED]
                                                         10 = 10Mbs operation
                                                         00 = 100Mbs operation
                                                         01 = 1000Mbs operation
                                                         11 = Reserved
                                                         (SGMII/1000Base-X only) */
	uint64_t reserved_0_0                 : 1;
#else
	uint64_t reserved_0_0                 : 1;
	uint64_t speed                        : 1;
	uint64_t duplex                       : 1;
	uint64_t slottime                     : 1;
	uint64_t reserved_4_7                 : 4;
	uint64_t speed_msb                    : 1;
	uint64_t reserved_9_11                : 3;
	uint64_t rx_idle                      : 1;
	uint64_t tx_idle                      : 1;
	uint64_t reserved_14_63               : 50;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_prtx_cfg_s   cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_prtx_cfg cvmx_bgxx_gmp_gmi_prtx_cfg_t;

/**
 * cvmx_bgx#_gmp_gmi_rx#_decision
 *
 * Notes:
 * As each byte in a packet is received by GMX, the L2 byte count is compared
 * against the BGX_GMP_GMI_RX_DECISION[CNT].  The L2 byte count is the number of bytes
 * from the beginning of the L2 header (DMAC).  In normal operation, the L2
 * header begins after the PREAMBLE+SFD (BGX_GMP_GMI_RX_FRM_CTL[PRE_CHK]=1) and any
 * optional UDD skip data (BGX_GMP_GMI_RX_UDD_SKP[LEN]).
 * When BGX_GMP_GMI_RX_FRM_CTL[PRE_CHK] is clear, PREAMBLE+SFD are prepended to the
 * packet and would require UDD skip length to account for them.
 * Port Mode
 * - Full Duplex
 *     L2 Size <  BGX_RX_DECISION - Accept packet. No filtering is applied
 *     L2 Size >= BGX_RX_DECISION - Apply filter. Accept packet based on PAUSE packet filter
 * - Half Duplex
 *     L2 Size <  BGX_RX_DECISION - Drop packet. Packet is unconditionally dropped.
 *     L2 Size >= BGX_RX_DECISION - Accept packet.
 * where L2_size = MAX(0, total_packet_size - BGX_GMP_GMI_RX_UDD_SKP[LEN] -
 *                        ((BGX_GMP_GMI_RX_FRM_CTL[PRE_CHK]==1)*8))
 * BGX_GMP_GMI_RX_DECISION = The byte count to decide when to accept or filter a packet
 */
union cvmx_bgxx_gmp_gmi_rxx_decision {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_rxx_decision_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t cnt                          : 5;  /**< The byte count to decide when to accept or filter
                                                         a packet. */
#else
	uint64_t cnt                          : 5;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_rxx_decision_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_rxx_decision cvmx_bgxx_gmp_gmi_rxx_decision_t;

/**
 * cvmx_bgx#_gmp_gmi_rx#_frm_chk
 *
 * Notes:
 * If BGX_GMP_GMI_RX_UDD_SKP[LEN] != 0, then LENERR will be forced to zero in HW.
 * BGX_GMP_GMI_RX_FRM_CHK = Which frame errors will set the ERR bit of the frame
 */
union cvmx_bgxx_gmp_gmi_rxx_frm_chk {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_rxx_frm_chk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t skperr                       : 1;  /**< Skipper error */
	uint64_t rcverr                       : 1;  /**< Frame was received with Data reception error */
	uint64_t reserved_5_6                 : 2;
	uint64_t fcserr                       : 1;  /**< Frame was received with FCS/CRC error */
	uint64_t jabber                       : 1;  /**< Frame was received with length > sys_length */
	uint64_t reserved_2_2                 : 1;
	uint64_t carext                       : 1;  /**< Carrier extend error
                                                         (SGMII/1000Base-X only) */
	uint64_t minerr                       : 1;  /**< Pause Frame was received with length<minFrameSize */
#else
	uint64_t minerr                       : 1;
	uint64_t carext                       : 1;
	uint64_t reserved_2_2                 : 1;
	uint64_t jabber                       : 1;
	uint64_t fcserr                       : 1;
	uint64_t reserved_5_6                 : 2;
	uint64_t rcverr                       : 1;
	uint64_t skperr                       : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_rxx_frm_chk_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_rxx_frm_chk cvmx_bgxx_gmp_gmi_rxx_frm_chk_t;

/**
 * cvmx_bgx#_gmp_gmi_rx#_frm_ctl
 *
 * Notes:
 * PRE_STRP
 * When PRE_CHK is set (indicating that the PREAMBLE will be sent), PRE_STRP
 * determines if the PREAMBLE+SFD bytes are thrown away or sent to the Octane
 * core as part of the packet.
 * In either mode, the PREAMBLE+SFD bytes are not counted toward the packet
 * size when checking against the MIN and MAX bounds.  Furthermore, the bytes
 * are skipped when locating the start of the L2 header for DMAC and Control
 * frame recognition.
 * CTL_BCK/CTL_DRP
 * These bits control how the HW handles incoming PAUSE packets.  Here are
 * the most common modes of operation:
 * CTL_BCK=1,CTL_DRP=1   - HW does it all
 * CTL_BCK=0,CTL_DRP=0   - SW sees all pause frames
 * CTL_BCK=0,CTL_DRP=1   - all pause frames are completely ignored
 * These control bits should be set to CTL_BCK=0,CTL_DRP=0 in halfdup mode.
 * Since PAUSE packets only apply to fulldup operation, any PAUSE packet
 * would constitute an exception which should be handled by the processing
 * cores.  PAUSE packets should not be forwarded.
 */
union cvmx_bgxx_gmp_gmi_rxx_frm_ctl {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_rxx_frm_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t ptp_mode                     : 1;  /**< Timestamp mode
                                                         When PTP_MODE is set, a 64-bit timestamp will be
                                                         prepended to every incoming packet. The timestamp
                                                         bytes are added to the packet in such a way as to
                                                         not modify the packet's receive byte count.  This
                                                         implies that the BGX_GMP_GMI_RX_JABBER, MINERR,
                                                         BGX_GMP_GMI_RX_DECISION, BGX_GMP_GMI_RX_UDD_SKP, and the
                                                         BGX_GMP_GMI_RX_STATS_* do not require any adjustment
                                                         as they operate on the received packet size.
                                                         When the packet reaches PKI, its size will
                                                         reflect the additional bytes and is subject to
                                                         the restrictions below.
                                                         If PTP_MODE=1 and PRE_CHK=1, PRE_STRP must be 1.
                                                         If PTP_MODE=1,
                                                         PIP_PRT_CFGx[SKIP] should be increased by 8.
                                                         PIP_PRT_CFGx[HIGIG_EN] should be 0.
                                                         PIP_FRM_CHKx[MAXLEN] should be increased by 8.
                                                         PIP_FRM_CHKx[MINLEN] should be increased by 8.
                                                         PIP_TAG_INCx[EN] should be adjusted.
                                                         PIP_PRT_CFGBx[ALT_SKP_EN] should be 0. */
	uint64_t reserved_11_11               : 1;
	uint64_t null_dis                     : 1;  /**< When set, do not modify the MOD bits on NULL ticks
                                                         due to PARITAL packets */
	uint64_t pre_align                    : 1;  /**< When set, PREAMBLE parser aligns the the SFD byte
                                                         regardless of the number of previous PREAMBLE
                                                         nibbles.  In this mode, PRE_STRP should be set to
                                                         account for the variable nature of the PREAMBLE.
                                                         PRE_CHK must be set to enable this and all
                                                         PREAMBLE features.
                                                         (SGMII at 10/100Mbs only) */
	uint64_t reserved_7_8                 : 2;
	uint64_t pre_free                     : 1;  /**< When set, PREAMBLE checking is  less strict.
                                                         GMX will begin the frame at the first SFD.
                                                         PRE_CHK must be set to enable this and all
                                                         PREAMBLE features.
                                                         (SGMII/1000Base-X only) */
	uint64_t ctl_smac                     : 1;  /**< Control Pause Frames can match station SMAC */
	uint64_t ctl_mcst                     : 1;  /**< Control Pause Frames can match globally assign
                                                         Multicast address */
	uint64_t ctl_bck                      : 1;  /**< Forward pause information to TX block */
	uint64_t ctl_drp                      : 1;  /**< Drop Control Pause Frames */
	uint64_t pre_strp                     : 1;  /**< Strip off the preamble (when present)
                                                         0=PREAMBLE+SFD is sent to core as part of frame
                                                         1=PREAMBLE+SFD is dropped
                                                         PRE_CHK must be set to enable this and all
                                                         PREAMBLE features.
                                                         If PTP_MODE=1 and PRE_CHK=1, PRE_STRP must be 1. */
	uint64_t pre_chk                      : 1;  /**< This port is configured to send a valid 802.3
                                                         PREAMBLE to begin every frame. GMX checks that a
                                                         valid PREAMBLE is received (based on PRE_FREE).
                                                         When a problem does occur within the PREAMBLE
                                                         seqeunce, the frame is marked as bad and not sent
                                                         into the core.  The BGX_GMP_GMI_RX_INT[PCTERR]
                                                         interrupt is also raised.
                                                         If PTP_MODE=1 and PRE_CHK=1, PRE_STRP must be 1. */
#else
	uint64_t pre_chk                      : 1;
	uint64_t pre_strp                     : 1;
	uint64_t ctl_drp                      : 1;
	uint64_t ctl_bck                      : 1;
	uint64_t ctl_mcst                     : 1;
	uint64_t ctl_smac                     : 1;
	uint64_t pre_free                     : 1;
	uint64_t reserved_7_8                 : 2;
	uint64_t pre_align                    : 1;
	uint64_t null_dis                     : 1;
	uint64_t reserved_11_11               : 1;
	uint64_t ptp_mode                     : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_rxx_frm_ctl_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_rxx_frm_ctl cvmx_bgxx_gmp_gmi_rxx_frm_ctl_t;

/**
 * cvmx_bgx#_gmp_gmi_rx#_ifg
 *
 * BGX_GMP_GMI_RX_IFG = RX Min IFG
 *
 */
union cvmx_bgxx_gmp_gmi_rxx_ifg {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_rxx_ifg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t ifg                          : 4;  /**< Min IFG (in IFG*8 bits) between packets used to
                                                         determine IFGERR. Normally IFG is 96 bits.
                                                         Note in some operating modes, IFG cycles can be
                                                         inserted or removed in order to achieve clock rate
                                                         adaptation. For these reasons, the default value
                                                         is slightly conservative and does not check upto
                                                         the full 96 bits of IFG.
                                                         (SGMII/1000Base-X only) */
#else
	uint64_t ifg                          : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_rxx_ifg_s    cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_rxx_ifg cvmx_bgxx_gmp_gmi_rxx_ifg_t;

/**
 * cvmx_bgx#_gmp_gmi_rx#_int
 *
 * "Notes:
 * (2) exception conditions 10:0 can also set the rcv/opcode in the received
 * packet's workQ entry.  The BGX_GMP_GMI_RX_FRM_CHK register provides a bit mask
 * for configuring which conditions set the error.
 * (3) in half duplex operation, the expectation is that collisions will appear
 * as either MINERR o r CAREXT errors.
 * (4) JABBER An RX Jabber error indicates that a packet was received which
 * is longer than the maximum allowed packet as defined by the
 * system.  GMX will truncate the packet at the JABBER count.
 * Failure to do so could lead to system instabilty.
 * (5) NIBERR This error is illegal at 1000Mbs speeds
 * (BGX_GMP_GMI_RX_PRT_CFG[SPEED]==0) and will never assert.
 * (6) MAXERR for untagged frames, the total frame DA+SA+TL+DATA+PAD+FCS >
 * BGX_GMP_GMI_RX_FRM_MAX.  For tagged frames, DA+SA+VLAN+TL+DATA+PAD+FCS
 * > BGX_GMP_GMI_RX_FRM_MAX + 4*VLAN_VAL + 4*VLAN_STACKED.
 * (7) MINERR total frame DA+SA+TL+DATA+PAD+FCS < 64
 * (8) ALNERR Indicates that the packet received was not an integer number of
 * bytes.  If FCS checking is enabled, ALNERR will only assert if
 * the FCS is bad.  If FCS checking is disabled, ALNERR will
 * assert in all non-integer frame cases.
 * (9) Collisions Collisions can only occur in half-duplex mode.  A collision
 * is assumed by the receiver when the slottime
 * (BGX_GMP_GMI_PRT_CFG[SLOTTIME]) is not satisfied.  In 10/100 mode,
 * this will result in a frame < SLOTTIME.  In 1000 mode, it
 * could result either in frame < SLOTTIME or a carrier extend
 * error with the SLOTTIME.  These conditions are visible by...
 * . transfer ended before slottime COLDET
 * . carrier extend error           CAREXT
 * (A) LENERR Length errors occur when the received packet does not match the
 * length field.  LENERR is only checked for packets between 64
 * and 1500 bytes.  For untagged frames, the length must exact
 * match.  For tagged frames the length or length+4 must match.
 * (B) PCTERR checks that the frame begins with a valid PREAMBLE sequence.
 * Does not check the number of PREAMBLE cycles.
 * (C) OVRERR
 * OVRERR is an architectural assertion check internal to GMX to
 * make sure no assumption was violated.  In a correctly operating
 * system, this interrupt can never fire.
 * GMX has an internal arbiter which selects which of 4 ports to
 * buffer in the main RX FIFO.  If we normally buffer 8 bytes,
 * then each port will typically push a tick every 8 cycles if
 * the packet interface is going as fast as possible.  If there
 * are four ports, they push every two cycles.  So that's the
 * assumption.  That the inbound module will always be able to
 * consume the tick before another is produced.  If that doesn't
 * happen that's when OVRERR will assert."
 */
union cvmx_bgxx_gmp_gmi_rxx_int {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_rxx_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t ifgerr                       : 1;  /**< Interframe Gap Violation
                                                         Does not necessarily indicate a failure
                                                         (SGMII/1000Base-X only) */
	uint64_t coldet                       : 1;  /**< Collision Detection
                                                         (SGMII/1000Base-X half-duplex only) */
	uint64_t falerr                       : 1;  /**< False carrier error or extend error after slottime
                                                         (SGMII/1000Base-X only) */
	uint64_t rsverr                       : 1;  /**< Reserved opcodes */
	uint64_t pcterr                       : 1;  /**< Bad Preamble / Protocol */
	uint64_t ovrerr                       : 1;  /**< Internal Data Aggregation Overflow ??
                                                         This interrupt should never assert
                                                         (SGMII/1000Base-X only) */
	uint64_t skperr                       : 1;  /**< Skipper error */
	uint64_t rcverr                       : 1;  /**< Frame was received with Data reception error */
	uint64_t fcserr                       : 1;  /**< Frame was received with FCS/CRC error */
	uint64_t jabber                       : 1;  /**< Frame was received with length > sys_length */
	uint64_t carext                       : 1;  /**< Carrier extend error
                                                         (SGMII/1000Base-X only) */
	uint64_t minerr                       : 1;  /**< Pause Frame was received with length<minFrameSize
                                                         Frame length checks are typically handled in PIP
                                                         (PIP_INT[MINERR]), but pause frames are
                                                         normally discarded before being inspected by PIP. */
#else
	uint64_t minerr                       : 1;
	uint64_t carext                       : 1;
	uint64_t jabber                       : 1;
	uint64_t fcserr                       : 1;
	uint64_t rcverr                       : 1;
	uint64_t skperr                       : 1;
	uint64_t ovrerr                       : 1;
	uint64_t pcterr                       : 1;
	uint64_t rsverr                       : 1;
	uint64_t falerr                       : 1;
	uint64_t coldet                       : 1;
	uint64_t ifgerr                       : 1;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_rxx_int_s    cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_rxx_int cvmx_bgxx_gmp_gmi_rxx_int_t;

/**
 * cvmx_bgx#_gmp_gmi_rx#_jabber
 *
 * Notes:
 * CNT must be 8-byte aligned such that CNT[2:0] == 0
 * The packet that will be sent to the packet input logic will have an
 * additionl 8 bytes if BGX_GMP_GMI_RX_FRM_CTL[PRE_CHK] is set and
 * BGX_GMP_GMI_RX_FRM_CTL[PRE_STRP] is clear.  The max packet that will be sent is
 * defined as...
 * max_sized_packet = BGX_GMP_GMI_RX_JABBER[CNT]+((BGX_GMP_GMI_RX_FRM_CTL[PRE_CHK] &
 * !BGX_GMP_GMI_RX_FRM_CTL[PRE_STRP])*8)
 * BGX_GMP_GMI_RX_JABBER = The max size packet after which GMX will truncate
 */
union cvmx_bgxx_gmp_gmi_rxx_jabber {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_rxx_jabber_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t cnt                          : 16; /**< Byte count for jabber check
                                                         Failing packets set the JABBER interrupt and are
                                                         optionally sent with opcode==JABBER
                                                         GMX will truncate the packet to CNT bytes */
#else
	uint64_t cnt                          : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_rxx_jabber_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_rxx_jabber cvmx_bgxx_gmp_gmi_rxx_jabber_t;

/**
 * cvmx_bgx#_gmp_gmi_rx#_udd_skp
 *
 * Notes:
 * (1) The skip bytes are part of the packet and will be sent down the NCB
 * packet interface and will be handled by PKI.
 * (2) The system can determine if the UDD bytes are included in the FCS check
 * by using the FCSSEL field - if the FCS check is enabled.
 * (3) Assume that the preamble/sfd is always at the start of the frame - even
 * before UDD bytes.  In most cases, there will be no preamble in these
 * cases since it will be packet interface in direct communication to
 * another packet interface (MAC to MAC) without a PHY involved.
 * (4) We can still do address filtering and control packet filtering is the
 * user desires.
 * (5) UDD_SKP must be 0 in half-duplex operation unless
 * BGX_GMP_GMI_RX_FRM_CTL[PRE_CHK] is clear.  If BGX_GMP_GMI_RX_FRM_CTL[PRE_CHK] is clear,
 * then UDD_SKP will normally be 8.
 * (6) In all cases, the UDD bytes will be sent down the packet interface as
 * part of the packet.  The UDD bytes are never stripped from the actual
 * packet.
 * (7) If LEN != 0, then BGX_GMP_GMI_RX_FRM_CHK[LENERR] will be disabled and
 * BGX_GMP_GMI_RX_INT[LENERR] will be zero
 * BGX_GMP_GMI_RX_UDD_SKP = Amount of User-defined data before the start of the L2 data
 */
union cvmx_bgxx_gmp_gmi_rxx_udd_skp {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_rxx_udd_skp_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t fcssel                       : 1;  /**< Include the skip bytes in the FCS calculation
                                                         0 = all skip bytes are included in FCS
                                                         1 = the skip bytes are not included in FCS */
	uint64_t reserved_7_7                 : 1;
	uint64_t len                          : 7;  /**< Amount of User-defined data before the start of
                                                         the L2 data.  Zero means L2 comes first.
                                                         Max value is 64. */
#else
	uint64_t len                          : 7;
	uint64_t reserved_7_7                 : 1;
	uint64_t fcssel                       : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_rxx_udd_skp_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_rxx_udd_skp cvmx_bgxx_gmp_gmi_rxx_udd_skp_t;

/**
 * cvmx_bgx#_gmp_gmi_smac#
 */
union cvmx_bgxx_gmp_gmi_smacx {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_smacx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t smac                         : 48; /**< The SMAC field is used for generating and
                                                         accepting Control Pause packets */
#else
	uint64_t smac                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_smacx_s      cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_smacx cvmx_bgxx_gmp_gmi_smacx_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_append
 */
union cvmx_bgxx_gmp_gmi_txx_append {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_append_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t force_fcs                    : 1;  /**< Append the Ethernet FCS on each pause packet
                                                         when FCS is clear. Pause packets are normally
                                                         padded to 60 bytes.
                                                         If BGX_GMP_GMI_TX_MIN_PKT[MIN_SIZE]
                                                         exceeds 59, then FORCE_FCS will not be used. */
	uint64_t fcs                          : 1;  /**< Append the Ethernet FCS on each packet */
	uint64_t pad                          : 1;  /**< Append PAD bytes such that min sized */
	uint64_t preamble                     : 1;  /**< Prepend the Ethernet preamble on each transfer */
#else
	uint64_t preamble                     : 1;
	uint64_t pad                          : 1;
	uint64_t fcs                          : 1;
	uint64_t force_fcs                    : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_append_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_append cvmx_bgxx_gmp_gmi_txx_append_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_burst
 */
union cvmx_bgxx_gmp_gmi_txx_burst {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_burst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t burst                        : 16; /**< Burst (refer to 802.3 to set correctly)
                                                         Only valid for 1000Mbs half-duplex operation
                                                         halfdup / 1000Mbs: 0x2000
                                                         all other modes:   0x0
                                                         (SGMII/1000Base-X only) */
#else
	uint64_t burst                        : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_burst_s  cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_burst cvmx_bgxx_gmp_gmi_txx_burst_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_ctl
 */
union cvmx_bgxx_gmp_gmi_txx_ctl {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t xsdef_en                     : 1;  /**< Enables the excessive deferral check for stats
                                                         and interrupts
                                                         (SGMII/1000Base-X half-duplex only) */
	uint64_t xscol_en                     : 1;  /**< Enables the excessive collision check for stats
                                                         and interrupts
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t xscol_en                     : 1;
	uint64_t xsdef_en                     : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_ctl_s    cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_ctl cvmx_bgxx_gmp_gmi_txx_ctl_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_int
 */
union cvmx_bgxx_gmp_gmi_txx_int {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t ptp_lost                     : 1;  /**< A packet with a PTP request was not able to be
                                                         sent due to XSCOL */
	uint64_t late_col                     : 1;  /**< TX Late Collision
                                                         (SGMII/1000Base-X half-duplex only) */
	uint64_t xsdef                        : 1;  /**< TX Excessive deferral
                                                         (SGMII/1000Base-X half-duplex only) */
	uint64_t xscol                        : 1;  /**< TX Excessive collisions
                                                         (SGMII/1000Base-X half-duplex only) */
	uint64_t undflw                       : 1;  /**< TX Underflow */
#else
	uint64_t undflw                       : 1;
	uint64_t xscol                        : 1;
	uint64_t xsdef                        : 1;
	uint64_t late_col                     : 1;
	uint64_t ptp_lost                     : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_int_s    cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_int cvmx_bgxx_gmp_gmi_txx_int_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_min_pkt
 *
 * BGX_GMP_GMI_TX_MIN_PKT = Packet TX Min Size Packet (PAD upto min size)
 *
 */
union cvmx_bgxx_gmp_gmi_txx_min_pkt {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_min_pkt_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t min_size                     : 8;  /**< Min frame in bytes before the FCS is applied
                                                         Padding is only appened when
                                                         BGX_GMP_GMI_TX_APPEND[PAD] for the coresponding port
                                                         is set.
                                                         In SGMII mode, packets will be padded to
                                                         MIN_SIZE+1. The reset value will pad to 60 bytes. */
#else
	uint64_t min_size                     : 8;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_min_pkt_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_min_pkt cvmx_bgxx_gmp_gmi_txx_min_pkt_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_pause_pkt_interval
 *
 * Notes:
 * Choosing proper values of BGX_GMP_GMI_TX_PAUSE_PKT_TIME[TIME] and
 * BGX_GMP_GMI_TX_PAUSE_PKT_INTERVAL[INTERVAL] can be challenging to the system
 * designer.  It is suggested that TIME be much greater than INTERVAL and
 * BGX_GMP_GMI_TX_PAUSE_ZERO[SEND] be set.  This allows a periodic refresh of the PAUSE
 * count and then when the backpressure condition is lifted, a PAUSE packet
 * with TIME==0 will be sent indicating that Octane is ready for additional
 * data.
 * If the system chooses to not set BGX_GMP_GMI_TX_PAUSE_ZERO[SEND], then it is
 * suggested that TIME and INTERVAL are programmed such that they satisify the
 * following rule...
 * INTERVAL <= TIME - (largest_pkt_size + IFG + pause_pkt_size)
 * where largest_pkt_size is that largest packet that the system can send
 * (normally 1518B), IFG is the interframe gap and pause_pkt_size is the size
 * of the PAUSE packet (normally 64B).
 */
union cvmx_bgxx_gmp_gmi_txx_pause_pkt_interval {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_pause_pkt_interval_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t interval                     : 16; /**< Arbitrate for a 802.3 pause packet,
                                                         or CBFC pause packet every (INTERVAL*512)
                                                         bit-times.
                                                         Normally, 0 < INTERVAL < BGX_GMP_GMI_TX_PAUSE_PKT_TIME
                                                         INTERVAL=0, will only send a single PAUSE packet
                                                         for each backpressure event */
#else
	uint64_t interval                     : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_pause_pkt_interval_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_pause_pkt_interval cvmx_bgxx_gmp_gmi_txx_pause_pkt_interval_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_pause_pkt_time
 *
 * Notes:
 * Choosing proper values of BGX_GMP_GMI_TX_PAUSE_PKT_TIME[TIME] and
 * BGX_GMP_GMI_TX_PAUSE_PKT_INTERVAL[INTERVAL] can be challenging to the system
 * designer.  It is suggested that TIME be much greater than INTERVAL and
 * BGX_GMP_GMI_TX_PAUSE_ZERO[SEND] be set.  This allows a periodic refresh of the PAUSE
 * count and then when the backpressure condition is lifted, a PAUSE packet
 * with TIME==0 will be sent indicating that Octane is ready for additional
 * data.
 * If the system chooses to not set BGX_GMP_GMI_TX_PAUSE_ZERO[SEND], then it is
 * suggested that TIME and INTERVAL are programmed such that they satisify the
 * following rule...
 * INTERVAL <= TIME - (largest_pkt_size + IFG + pause_pkt_size)
 * where largest_pkt_size is that largest packet that the system can send
 * (normally 1518B), IFG is the interframe gap and pause_pkt_size is the size
 * of the PAUSE packet (normally 64B).
 */
union cvmx_bgxx_gmp_gmi_txx_pause_pkt_time {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_pause_pkt_time_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ptime                        : 16; /**< The pause_time field placed in outbnd 802.3 pause
                                                         packets, or CBFC pause packets.
                                                         pause_time is in 512 bit-times
                                                         Normally, TIME > BGX_GMP_GMI_TX_PAUSE_PKT_INTERVAL */
#else
	uint64_t ptime                        : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_pause_pkt_time_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_pause_pkt_time cvmx_bgxx_gmp_gmi_txx_pause_pkt_time_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_pause_togo
 */
union cvmx_bgxx_gmp_gmi_txx_pause_togo {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_pause_togo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ptime                        : 16; /**< Amount of time remaining to backpressure
                                                         From the standard 802.3 pause timer */
#else
	uint64_t ptime                        : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_pause_togo_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_pause_togo cvmx_bgxx_gmp_gmi_txx_pause_togo_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_pause_zero
 */
union cvmx_bgxx_gmp_gmi_txx_pause_zero {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_pause_zero_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t send                         : 1;  /**< When backpressure condition clear, send PAUSE
                                                         packet with pause_time of zero to enable the
                                                         channel */
#else
	uint64_t send                         : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_pause_zero_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_pause_zero cvmx_bgxx_gmp_gmi_txx_pause_zero_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_sgmii_ctl
 */
union cvmx_bgxx_gmp_gmi_txx_sgmii_ctl {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_sgmii_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t align                        : 1;  /**< Align the transmission to even cycles
                                                         Recommended value is:
                                                         ALIGN = !BGX_GMP_GMI_TX_APPEND[PREAMBLE]
                                                         (See the Transmit Conversion to Code groups
                                                         section in the SGMII Interface chapter of the
                                                         HRM for a complete discussion)
                                                         0 = Data can be sent on any cycle
                                                         In this mode, the interface will function at
                                                         maximum bandwidth. It is possible to for the
                                                         TX PCS machine to drop first byte of the TX
                                                         frame.  When BGX_GMP_GMI_TX_APPEND[PREAMBLE] is
                                                         set, the first byte will be a preamble byte
                                                         which can be dropped to compensate for an
                                                         extended IPG.
                                                         1 = Data will only be sent on even cycles.
                                                         In this mode, there can be bandwidth
                                                         implications when sending odd-byte packets as
                                                         the IPG can extend an extra cycle.
                                                         There will be no loss of data.
                                                         (SGMII/1000Base-X only) */
#else
	uint64_t align                        : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_sgmii_ctl_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_sgmii_ctl cvmx_bgxx_gmp_gmi_txx_sgmii_ctl_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_slot
 */
union cvmx_bgxx_gmp_gmi_txx_slot {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_slot_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t slot                         : 10; /**< Slottime (refer to 802.3 to set correctly)
                                                         10/100Mbs: 0x40
                                                         1000Mbs:   0x200
                                                         (SGMII/1000Base-X only) */
#else
	uint64_t slot                         : 10;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_slot_s   cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_slot cvmx_bgxx_gmp_gmi_txx_slot_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_soft_pause
 *
 * BGX_GMP_GMI_TX_SOFT_PAUSE = Packet TX Software Pause
 *
 */
union cvmx_bgxx_gmp_gmi_txx_soft_pause {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_soft_pause_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ptime                        : 16; /**< Back off the TX bus for (TIME*512) bit-times */
#else
	uint64_t ptime                        : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_soft_pause_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_soft_pause cvmx_bgxx_gmp_gmi_txx_soft_pause_t;

/**
 * cvmx_bgx#_gmp_gmi_tx#_thresh
 *
 * Per Port
 * BGX_GMP_GMI_TX_THRESH = Packet TX Threshold
 */
union cvmx_bgxx_gmp_gmi_txx_thresh {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_txx_thresh_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t cnt                          : 9;  /**< Number of 128b words to accumulate in the TX FIFO
                                                         before sending on the packet interface
                                                         This register should be large enough to prevent
                                                         underflow on the packet interface and must never
                                                         be set to zero.
                                                         10G/40G Mode, CNT == 0x100
                                                         In all modes, this register cannot exceed the
                                                         the TX FIFO depth which is...
                                                         BGX_CMR_TX_LMACS==0,1:  CNT MAX = 0x7FF
                                                         BGX_CMR_TX_LMACS==2  :  CNT MAX = 0x3FF
                                                         BGX_CMR_TX_LMACS==3  :  CNT MAX = 0x1FF */
#else
	uint64_t cnt                          : 9;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_txx_thresh_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_txx_thresh cvmx_bgxx_gmp_gmi_txx_thresh_t;

/**
 * cvmx_bgx#_gmp_gmi_tx_col_attempt
 */
union cvmx_bgxx_gmp_gmi_tx_col_attempt {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_tx_col_attempt_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t limit                        : 5;  /**< Collision Attempts
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t limit                        : 5;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_tx_col_attempt_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_tx_col_attempt cvmx_bgxx_gmp_gmi_tx_col_attempt_t;

/**
 * cvmx_bgx#_gmp_gmi_tx_ifg
 *
 * Notes:
 * * Programming IFG1 and IFG2.
 * For 10/100/1000Mbs half-duplex systems that require IEEE 802.3
 * compatibility, IFG1 must be in the range of 1-8, IFG2 must be in the range
 * of 4-12, and the IFG1+IFG2 sum must be 12.
 * For 10/100/1000Mbs full-duplex systems that require IEEE 802.3
 * compatibility, IFG1 must be in the range of 1-11, IFG2 must be in the range
 * of 1-11, and the IFG1+IFG2 sum must be 12.
 * For all other systems, IFG1 and IFG2 can be any value in the range of
 * 1-15.  Allowing for a total possible IFG sum of 2-30.
 * Common BGX_GMP_GMI_TX_IFG = Packet TX Interframe Gap
 */
union cvmx_bgxx_gmp_gmi_tx_ifg {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_tx_ifg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t ifg2                         : 4;  /**< 1/3 of the interframe gap timing (in IFG2*8 bits)
                                                         If CRS is detected during IFG2, then the
                                                         interFrameSpacing timer is not reset and a frame
                                                         is transmited once the timer expires. */
	uint64_t ifg1                         : 4;  /**< 2/3 of the interframe gap timing (in IFG1*8 bits)
                                                         If CRS is detected during IFG1, then the
                                                         interFrameSpacing timer is reset and a frame is
                                                         not transmited. */
#else
	uint64_t ifg1                         : 4;
	uint64_t ifg2                         : 4;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_tx_ifg_s     cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_tx_ifg cvmx_bgxx_gmp_gmi_tx_ifg_t;

/**
 * cvmx_bgx#_gmp_gmi_tx_jam
 *
 * BGX_GMP_GMI_TX_JAM = Packet TX Jam Pattern
 *
 */
union cvmx_bgxx_gmp_gmi_tx_jam {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_tx_jam_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t jam                          : 8;  /**< Jam pattern
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t jam                          : 8;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_tx_jam_s     cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_tx_jam cvmx_bgxx_gmp_gmi_tx_jam_t;

/**
 * cvmx_bgx#_gmp_gmi_tx_lfsr
 */
union cvmx_bgxx_gmp_gmi_tx_lfsr {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_tx_lfsr_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t lfsr                         : 16; /**< The current state of the LFSR used to feed random
                                                         numbers to compute truncated binary exponential
                                                         backoff.
                                                         (SGMII/1000Base-X half-duplex only) */
#else
	uint64_t lfsr                         : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_tx_lfsr_s    cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_tx_lfsr cvmx_bgxx_gmp_gmi_tx_lfsr_t;

/**
 * cvmx_bgx#_gmp_gmi_tx_pause_pkt_dmac
 */
union cvmx_bgxx_gmp_gmi_tx_pause_pkt_dmac {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_tx_pause_pkt_dmac_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t dmac                         : 48; /**< The DMAC field placed is outbnd pause pkts */
#else
	uint64_t dmac                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_tx_pause_pkt_dmac_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_tx_pause_pkt_dmac cvmx_bgxx_gmp_gmi_tx_pause_pkt_dmac_t;

/**
 * cvmx_bgx#_gmp_gmi_tx_pause_pkt_type
 */
union cvmx_bgxx_gmp_gmi_tx_pause_pkt_type {
	uint64_t u64;
	struct cvmx_bgxx_gmp_gmi_tx_pause_pkt_type_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ptype                        : 16; /**< The TYPE field placed is outbnd pause pkts */
#else
	uint64_t ptype                        : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_gmi_tx_pause_pkt_type_s cn78xx;
};
typedef union cvmx_bgxx_gmp_gmi_tx_pause_pkt_type cvmx_bgxx_gmp_gmi_tx_pause_pkt_type_t;

/**
 * cvmx_bgx#_gmp_pcs_an#_adv
 *
 * BGX_GMP_PCS_AN_ADV = AN Advertisement Register4
 *
 */
union cvmx_bgxx_gmp_pcs_anx_adv {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_anx_adv_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t np                           : 1;  /**< Always 0, no next page capability supported */
	uint64_t reserved_14_14               : 1;
	uint64_t rem_flt                      : 2;  /**< [<13>,<12>]
                                                         0    0  Link OK  XMIT=DATA
                                                         0    1  Link failure (loss of sync, XMIT!= DATA)
                                                         1    0  local device Offline
                                                         1    1  AN Error failure to complete AN
                                                         AN Error is set if resolution function
                                                         precludes operation with link partner */
	uint64_t reserved_9_11                : 3;
	uint64_t pause                        : 2;  /**< [<8>, <7>] Pause frame flow capability across link
                                                         Exchanged during Auto Negotiation
                                                         0    0  No Pause
                                                         0    1  Symmetric pause
                                                         1    0  Asymmetric Pause
                                                         1    1  Both symm and asymm pause to local device */
	uint64_t hfd                          : 1;  /**< 1 means local device Half Duplex capable */
	uint64_t fd                           : 1;  /**< 1 means local device Full Duplex capable */
	uint64_t reserved_0_4                 : 5;
#else
	uint64_t reserved_0_4                 : 5;
	uint64_t fd                           : 1;
	uint64_t hfd                          : 1;
	uint64_t pause                        : 2;
	uint64_t reserved_9_11                : 3;
	uint64_t rem_flt                      : 2;
	uint64_t reserved_14_14               : 1;
	uint64_t np                           : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_anx_adv_s    cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_anx_adv cvmx_bgxx_gmp_pcs_anx_adv_t;

/**
 * cvmx_bgx#_gmp_pcs_an#_ext_st
 *
 * BGX_GMP_PCS_AN_EXT_ST = AN Extended Status Register15
 * as per IEEE802.3 Clause 22
 */
union cvmx_bgxx_gmp_pcs_anx_ext_st {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_anx_ext_st_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t thou_xfd                     : 1;  /**< 1 means PHY is 1000BASE-X Full Dup capable */
	uint64_t thou_xhd                     : 1;  /**< 1 means PHY is 1000BASE-X Half Dup capable */
	uint64_t thou_tfd                     : 1;  /**< 1 means PHY is 1000BASE-T Full Dup capable */
	uint64_t thou_thd                     : 1;  /**< 1 means PHY is 1000BASE-T Half Dup capable */
	uint64_t reserved_0_11                : 12;
#else
	uint64_t reserved_0_11                : 12;
	uint64_t thou_thd                     : 1;
	uint64_t thou_tfd                     : 1;
	uint64_t thou_xhd                     : 1;
	uint64_t thou_xfd                     : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_anx_ext_st_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_anx_ext_st cvmx_bgxx_gmp_pcs_anx_ext_st_t;

/**
 * cvmx_bgx#_gmp_pcs_an#_lp_abil
 *
 * as per IEEE802.3 Clause 37
 *
 */
union cvmx_bgxx_gmp_pcs_anx_lp_abil {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_anx_lp_abil_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t np                           : 1;  /**< 1=lp next page capable, 0=lp not next page capable */
	uint64_t ack                          : 1;  /**< 1=Acknowledgement received */
	uint64_t rem_flt                      : 2;  /**< [<13>,<12>] Link Partner's link status
                                                         0    0  Link OK
                                                         0    1  Offline
                                                         1    0  Link failure
                                                         1    1  AN Error */
	uint64_t reserved_9_11                : 3;
	uint64_t pause                        : 2;  /**< [<8>, <7>] Link Partner Pause setting
                                                         0    0  No Pause
                                                         0    1  Symmetric pause
                                                         1    0  Asymmetric Pause
                                                         1    1  Both symm and asymm pause to local device */
	uint64_t hfd                          : 1;  /**< 1 means link partner Half Duplex capable */
	uint64_t fd                           : 1;  /**< 1 means link partner Full Duplex capable */
	uint64_t reserved_0_4                 : 5;
#else
	uint64_t reserved_0_4                 : 5;
	uint64_t fd                           : 1;
	uint64_t hfd                          : 1;
	uint64_t pause                        : 2;
	uint64_t reserved_9_11                : 3;
	uint64_t rem_flt                      : 2;
	uint64_t ack                          : 1;
	uint64_t np                           : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_anx_lp_abil_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_anx_lp_abil cvmx_bgxx_gmp_pcs_anx_lp_abil_t;

/**
 * cvmx_bgx#_gmp_pcs_an#_results
 *
 * NOTE:
 * an_results_reg is don't care when AN_OVRD is set to 1. If AN_OVRD=0 and AN_CPT=1
 * the an_results_reg is valid.
 */
union cvmx_bgxx_gmp_pcs_anx_results {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_anx_results_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t pause                        : 2;  /**< [<6>, <5>] PAUSE Selection (Don't care for SGMII)
                                                         0    0  Disable Pause, TX and RX
                                                         0    1  Enable pause frames RX only
                                                         1    0  Enable Pause frames TX only
                                                         1    1  Enable pause frames TX and RX */
	uint64_t spd                          : 2;  /**< [<4>, <3>] Link Speed Selection
                                                         0    0  10Mb/s
                                                         0    1  100Mb/s
                                                         1    0  1000Mb/s
                                                         1    1  NS */
	uint64_t an_cpt                       : 1;  /**< 1=AN Completed, 0=AN not completed or failed */
	uint64_t dup                          : 1;  /**< 1=Full Duplex, 0=Half Duplex */
	uint64_t link_ok                      : 1;  /**< 1=Link up(OK), 0=Link down */
#else
	uint64_t link_ok                      : 1;
	uint64_t dup                          : 1;
	uint64_t an_cpt                       : 1;
	uint64_t spd                          : 2;
	uint64_t pause                        : 2;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_anx_results_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_anx_results cvmx_bgxx_gmp_pcs_anx_results_t;

/**
 * cvmx_bgx#_gmp_pcs_int#
 *
 * PCS Interrupt Register
 *
 */
union cvmx_bgxx_gmp_pcs_intx {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_intx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t dbg_sync                     : 1;  /**< Code Group sync failure debug help */
	uint64_t dup                          : 1;  /**< Set whenever Duplex mode changes on the link */
	uint64_t sync_bad                     : 1;  /**< Set by HW whenever rx sync st machine reaches a bad
                                                         state. Should never be set during normal operation */
	uint64_t an_bad                       : 1;  /**< Set by HW whenever AN st machine reaches a bad
                                                         state. Should never be set during normal operation */
	uint64_t rxlock                       : 1;  /**< Set by HW whenever code group Sync or bit lock
                                                         failure occurs
                                                         Cannot fire in loopback1 mode */
	uint64_t rxbad                        : 1;  /**< Set by HW whenever rx st machine reaches a  bad
                                                         state. Should never be set during normal operation */
	uint64_t rxerr                        : 1;  /**< Set whenever RX receives a code group error in
                                                         10 bit to 8 bit decode logic
                                                         Cannot fire in loopback1 mode */
	uint64_t txbad                        : 1;  /**< Set by HW whenever tx st machine reaches a bad
                                                         state. Should never be set during normal operation */
	uint64_t txfifo                       : 1;  /**< Set whenever HW detects a TX fifo overflow
                                                         condition */
	uint64_t txfifu                       : 1;  /**< Set whenever HW detects a TX fifo underflowflow
                                                         condition */
	uint64_t an_err                       : 1;  /**< AN Error, AN resolution function failed */
	uint64_t xmit                         : 1;  /**< Set whenever HW detects a change in the XMIT
                                                         variable. XMIT variable states are IDLE, CONFIG and
                                                         DATA */
	uint64_t lnkspd                       : 1;  /**< Set by HW whenever Link Speed has changed */
#else
	uint64_t lnkspd                       : 1;
	uint64_t xmit                         : 1;
	uint64_t an_err                       : 1;
	uint64_t txfifu                       : 1;
	uint64_t txfifo                       : 1;
	uint64_t txbad                        : 1;
	uint64_t rxerr                        : 1;
	uint64_t rxbad                        : 1;
	uint64_t rxlock                       : 1;
	uint64_t an_bad                       : 1;
	uint64_t sync_bad                     : 1;
	uint64_t dup                          : 1;
	uint64_t dbg_sync                     : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_intx_s       cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_intx cvmx_bgxx_gmp_pcs_intx_t;

/**
 * cvmx_bgx#_gmp_pcs_link#_timer
 */
union cvmx_bgxx_gmp_pcs_linkx_timer {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_linkx_timer_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t count                        : 16; /**< (core clock period times 1024) times "COUNT" should
                                                         be 1.6ms(SGMII)/10ms(otherwise) which is the link
                                                         timer used in auto negotiation.
                                                         Reset assums a 700MHz sclk for 1.6ms link timer */
#else
	uint64_t count                        : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_linkx_timer_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_linkx_timer cvmx_bgxx_gmp_pcs_linkx_timer_t;

/**
 * cvmx_bgx#_gmp_pcs_misc#_ctl
 *
 * SGMII bit [12] is really a misnomer, it is a decode  of pi_qlm_cfg pins to indicate SGMII or
 * 1000Base-X modes.
 * Note: MODE bit
 * When MODE=1,  1000Base-X mode is selected. Auto negotiation will follow IEEE 802.3 clause 37.
 * When MODE=0,  SGMII mode is selected and the following note will apply.
 * Repeat note from SGM_AN_ADV register
 * NOTE: The SGMII AN Advertisement Register above will be sent during Auto Negotiation if the
 * MAC_PHY mode bit in misc_ctl_reg
 * is set (1=PHY mode). If the bit is not set (0=MAC mode), the tx_config_reg[14] becomes ACK bit
 * and [0] is always 1.
 * All other bits in tx_config_reg sent will be 0. The PHY dictates the Auto Negotiation results.
 * SGMII Misc Control Register
 */
union cvmx_bgxx_gmp_pcs_miscx_ctl {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_miscx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t sgmii                        : 1;  /**< 1=SGMII or 1000Base-X mode selected.
                                                         0=XAUI or PCIE mode selected.
                                                         See GSERx_LANE_MODE[LMODE]. */
	uint64_t gmxeno                       : 1;  /**< GMX Enable override. When set to 1, forces GMX to
                                                         appear disabled. The enable/disable status of GMX
                                                         is checked only at SOP of every packet. */
	uint64_t loopbck2                     : 1;  /**< Sets external loopback mode to return rx data back
                                                         out via tx data path. 0=no loopback, 1=loopback */
	uint64_t mac_phy                      : 1;  /**< 0=MAC, 1=PHY decides the tx_config_reg value to be
                                                         sent during auto negotiation.
                                                         See SGMII spec ENG-46158 from CISCO */
	uint64_t mode                         : 1;  /**< 0=SGMII or 1= 1000 Base X */
	uint64_t an_ovrd                      : 1;  /**< 0=disable, 1= enable over ride AN results
                                                         Auto negotiation is allowed to happen but the
                                                         results are ignored when set. Duplex and Link speed
                                                         values are set from the pcs_mr_ctrl reg */
	uint64_t samp_pt                      : 7;  /**< "Byte# in elongated frames for 10/100Mb/s operation
                                                         for data sampling on RX side in PCS.
                                                         Recommended values are 0x5 for 100Mb/s operation
                                                         and 0x32 for 10Mb/s operation.
                                                         For 10Mb/s operaton this field should be set to a
                                                         value less than 99 and greater than 0. If set out
                                                         of this range a value of 50 will be used for actual
                                                         sampling internally without affecting the CSR field
                                                         For 100Mb/s operation this field should be set to a
                                                         value less than 9 and greater than 0. If set out of
                                                         this range a value of 5 will be used for actual
                                                         sampling internally without affecting the CSR field" */
#else
	uint64_t samp_pt                      : 7;
	uint64_t an_ovrd                      : 1;
	uint64_t mode                         : 1;
	uint64_t mac_phy                      : 1;
	uint64_t loopbck2                     : 1;
	uint64_t gmxeno                       : 1;
	uint64_t sgmii                        : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_miscx_ctl_s  cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_miscx_ctl cvmx_bgxx_gmp_pcs_miscx_ctl_t;

/**
 * cvmx_bgx#_gmp_pcs_mr#_control
 *
 * NOTE:
 * Whenever AN_EN bit[12] is set, Auto negotiation is allowed to happen. The results
 * of the auto negotiation process set the fields in the AN_RESULTS reg. When AN_EN is not set,
 * AN_RESULTS reg is don't care. The effective SPD, DUP etc.. get their values
 * from the pcs_mr_ctrl reg.
 */
union cvmx_bgxx_gmp_pcs_mrx_control {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_mrx_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t reset                        : 1;  /**< 1=SW Reset, the bit will return to 0 after pcs has
                                                         been reset. Takes 32 sclk cycles to reset pcs */
	uint64_t loopbck1                     : 1;  /**< 0=normal operation, 1=loopback. The loopback mode
                                                         will return(loopback) tx data from GMII tx back to
                                                         GMII rx interface. The loopback happens in the pcs
                                                         module. Auto Negotiation will be disabled even if
                                                         the AN_EN bit is set, during loopback */
	uint64_t spdlsb                       : 1;  /**< See bit 6 description */
	uint64_t an_en                        : 1;  /**< 1=AN Enable, 0=AN Disable */
	uint64_t pwr_dn                       : 1;  /**< 1=Power Down(HW reset), 0=Normal operation */
	uint64_t reserved_10_10               : 1;
	uint64_t rst_an                       : 1;  /**< If bit 12 is set and bit 3 of status reg is 1
                                                         Auto Negotiation begins. Else,SW writes are ignored
                                                         and this bit remians at 0. This bit clears itself
                                                         to 0, when AN starts. */
	uint64_t dup                          : 1;  /**< 1=full duplex, 0=half duplex; effective only if AN
                                                         disabled. If status register bits [15:9] and and
                                                         extended status reg bits [15:12] allow only one
                                                         duplex mode|, this bit will correspond to that
                                                         value and any attempt to write will be ignored. */
	uint64_t coltst                       : 1;  /**< 1=enable COL signal test, 0=disable test
                                                         During COL test, the COL signal will reflect the
                                                         GMII TX_EN signal with less than 16BT delay */
	uint64_t spdmsb                       : 1;  /**< [<6>, <13>]Link Speed effective only if AN disabled
                                                         0    0  10Mb/s
                                                         0    1  100Mb/s
                                                         1    0  1000Mb/s
                                                         1    1  NS */
	uint64_t uni                          : 1;  /**< Unidirectional (Std 802.3-2005, Clause 66.2)
                                                         This bit will override the AN_EN bit and disable
                                                         auto-negotiation variable mr_an_enable, when set
                                                         Used in both 1000Base-X and SGMII modes */
	uint64_t reserved_0_4                 : 5;
#else
	uint64_t reserved_0_4                 : 5;
	uint64_t uni                          : 1;
	uint64_t spdmsb                       : 1;
	uint64_t coltst                       : 1;
	uint64_t dup                          : 1;
	uint64_t rst_an                       : 1;
	uint64_t reserved_10_10               : 1;
	uint64_t pwr_dn                       : 1;
	uint64_t an_en                        : 1;
	uint64_t spdlsb                       : 1;
	uint64_t loopbck1                     : 1;
	uint64_t reset                        : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_mrx_control_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_mrx_control cvmx_bgxx_gmp_pcs_mrx_control_t;

/**
 * cvmx_bgx#_gmp_pcs_mr#_status
 *
 * Bits [15:9] in the Status Register indicate ability to operate as per those signalling
 * specification,
 * when misc ctl reg MAC_PHY bit is set to MAC mode. Bits [15:9] will all, always read 0,
 * indicating
 * that the chip cannot operate in the corresponding modes.
 * Bit [4] RM_FLT is a don't care when the selected mode is SGMII.
 * BGX_GMP_PCS_MR_STATUS = Status Register1
 */
union cvmx_bgxx_gmp_pcs_mrx_status {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_mrx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t hun_t4                       : 1;  /**< 1 means 100Base-T4 capable */
	uint64_t hun_xfd                      : 1;  /**< 1 means 100Base-X Full Duplex */
	uint64_t hun_xhd                      : 1;  /**< 1 means 100Base-X Half Duplex */
	uint64_t ten_fd                       : 1;  /**< 1 means 10Mb/s Full Duplex */
	uint64_t ten_hd                       : 1;  /**< 1 means 10Mb/s Half Duplex */
	uint64_t hun_t2fd                     : 1;  /**< 1 means 100Base-T2 Full Duplex */
	uint64_t hun_t2hd                     : 1;  /**< 1 means 100Base-T2 Half Duplex */
	uint64_t ext_st                       : 1;  /**< 1 means extended status info in reg15 */
	uint64_t reserved_7_7                 : 1;
	uint64_t prb_sup                      : 1;  /**< 1 means able to work without preamble bytes at the
                                                         beginning of frames. 0 means not able to accept
                                                         frames without preamble bytes preceding them. */
	uint64_t an_cpt                       : 1;  /**< 1 means Auto Negotiation is complete and the
                                                         contents of the an_results_reg are valid. */
	uint64_t rm_flt                       : 1;  /**< Set to 1 when remote flt condition occurs. This bit
                                                         implements a latching Hi behavior. It is cleared by
                                                         SW read of this reg or when reset bit [15] in
                                                         Control Reg is asserted.
                                                         See an adv reg[13:12] for flt conditions */
	uint64_t an_abil                      : 1;  /**< 1 means Auto Negotiation capable */
	uint64_t lnk_st                       : 1;  /**< 1=link up, 0=link down. Set during AN process
                                                         Set whenever XMIT=DATA. Latching Lo behavior when
                                                         link goes down. Link down value of the bit stays
                                                         low until SW reads the reg. */
	uint64_t reserved_1_1                 : 1;
	uint64_t extnd                        : 1;  /**< Always 0, no extended capability regs present */
#else
	uint64_t extnd                        : 1;
	uint64_t reserved_1_1                 : 1;
	uint64_t lnk_st                       : 1;
	uint64_t an_abil                      : 1;
	uint64_t rm_flt                       : 1;
	uint64_t an_cpt                       : 1;
	uint64_t prb_sup                      : 1;
	uint64_t reserved_7_7                 : 1;
	uint64_t ext_st                       : 1;
	uint64_t hun_t2hd                     : 1;
	uint64_t hun_t2fd                     : 1;
	uint64_t ten_hd                       : 1;
	uint64_t ten_fd                       : 1;
	uint64_t hun_xhd                      : 1;
	uint64_t hun_xfd                      : 1;
	uint64_t hun_t4                       : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_mrx_status_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_mrx_status cvmx_bgxx_gmp_pcs_mrx_status_t;

/**
 * cvmx_bgx#_gmp_pcs_rx#_states
 */
union cvmx_bgxx_gmp_pcs_rxx_states {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_rxx_states_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t rx_bad                       : 1;  /**< Receive state machine in an illegal state */
	uint64_t rx_st                        : 5;  /**< Receive state machine state */
	uint64_t sync_bad                     : 1;  /**< Receive synchronization SM in an illegal state */
	uint64_t sync                         : 4;  /**< Receive synchronization SM state */
	uint64_t an_bad                       : 1;  /**< Auto Negotiation state machine in an illegal state */
	uint64_t an_st                        : 4;  /**< Auto Negotiation state machine state */
#else
	uint64_t an_st                        : 4;
	uint64_t an_bad                       : 1;
	uint64_t sync                         : 4;
	uint64_t sync_bad                     : 1;
	uint64_t rx_st                        : 5;
	uint64_t rx_bad                       : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_rxx_states_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_rxx_states cvmx_bgxx_gmp_pcs_rxx_states_t;

/**
 * cvmx_bgx#_gmp_pcs_rx#_sync
 *
 * BGX_GMP_PCS_RX_SYNC = Code Group synchronization reg
 *
 */
union cvmx_bgxx_gmp_pcs_rxx_sync {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_rxx_sync_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t sync                         : 1;  /**< 1 means code group synchronization achieved */
	uint64_t bit_lock                     : 1;  /**< 1 means bit lock achieved */
#else
	uint64_t bit_lock                     : 1;
	uint64_t sync                         : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_rxx_sync_s   cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_rxx_sync cvmx_bgxx_gmp_pcs_rxx_sync_t;

/**
 * cvmx_bgx#_gmp_pcs_sgm#_an_adv
 *
 * NOTE: The SGMII AN Advertisement Register will be sent during Auto Negotiation if the
 * MAC_PHY mode bit in misc_ctl_reg
 * is set (1=PHY mode). If the bit is not set (0=MAC mode), the tx_config_reg[14] becomes ACK bit
 * and [0] is always 1.
 * All other bits in tx_config_reg sent will be 0. The PHY dictates the Auto Negotiation results.
 * SGMII AN Advertisement Register (sent out as tx_config_reg)
 */
union cvmx_bgxx_gmp_pcs_sgmx_an_adv {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_sgmx_an_adv_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t link                         : 1;  /**< Link status 1 Link Up, 0 Link Down */
	uint64_t ack                          : 1;  /**< Auto negotiation ack */
	uint64_t reserved_13_13               : 1;
	uint64_t dup                          : 1;  /**< Duplex mode 1=full duplex, 0=half duplex */
	uint64_t speed                        : 2;  /**< Link Speed
                                                         0    0  10Mb/s
                                                         0    1  100Mb/s
                                                         1    0  1000Mb/s
                                                         1    1  NS */
	uint64_t reserved_1_9                 : 9;
	uint64_t one                          : 1;  /**< Always set to match tx_config_reg<0> */
#else
	uint64_t one                          : 1;
	uint64_t reserved_1_9                 : 9;
	uint64_t speed                        : 2;
	uint64_t dup                          : 1;
	uint64_t reserved_13_13               : 1;
	uint64_t ack                          : 1;
	uint64_t link                         : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_sgmx_an_adv_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_sgmx_an_adv cvmx_bgxx_gmp_pcs_sgmx_an_adv_t;

/**
 * cvmx_bgx#_gmp_pcs_sgm#_lp_adv
 *
 * SGMII LP Advertisement Register (received as rx_config_reg)
 *
 */
union cvmx_bgxx_gmp_pcs_sgmx_lp_adv {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_sgmx_lp_adv_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t link                         : 1;  /**< Link status 1 Link Up, 0 Link Down */
	uint64_t reserved_13_14               : 2;
	uint64_t dup                          : 1;  /**< Duplex mode 1=full duplex, 0=half duplex */
	uint64_t speed                        : 2;  /**< Link Speed
                                                         0    0  10Mb/s
                                                         0    1  100Mb/s
                                                         1    0  1000Mb/s
                                                         1    1  NS */
	uint64_t reserved_1_9                 : 9;
	uint64_t one                          : 1;  /**< Always set to match tx_config_reg<0> */
#else
	uint64_t one                          : 1;
	uint64_t reserved_1_9                 : 9;
	uint64_t speed                        : 2;
	uint64_t dup                          : 1;
	uint64_t reserved_13_14               : 2;
	uint64_t link                         : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_sgmx_lp_adv_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_sgmx_lp_adv cvmx_bgxx_gmp_pcs_sgmx_lp_adv_t;

/**
 * cvmx_bgx#_gmp_pcs_tx#_states
 */
union cvmx_bgxx_gmp_pcs_txx_states {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_txx_states_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_7_63                : 57;
	uint64_t xmit                         : 2;  /**< 0=undefined, 1=config, 2=idle, 3=data */
	uint64_t tx_bad                       : 1;  /**< Xmit state machine in a bad state */
	uint64_t ord_st                       : 4;  /**< Xmit ordered set state machine state */
#else
	uint64_t ord_st                       : 4;
	uint64_t tx_bad                       : 1;
	uint64_t xmit                         : 2;
	uint64_t reserved_7_63                : 57;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_txx_states_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_txx_states cvmx_bgxx_gmp_pcs_txx_states_t;

/**
 * cvmx_bgx#_gmp_pcs_tx_rx#_polarity
 *
 * Note:
 * r_tx_rx_polarity_reg bit [2] will show correct polarity needed on the link receive path after
 * code grp synchronization is achieved.
 * BGX_GMP_PCS_POLARITY = TX_RX polarity reg
 */
union cvmx_bgxx_gmp_pcs_tx_rxx_polarity {
	uint64_t u64;
	struct cvmx_bgxx_gmp_pcs_tx_rxx_polarity_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t rxovrd                       : 1;  /**< When 0, <2> determines polarity
                                                         when 1, <1> determines polarity */
	uint64_t autorxpl                     : 1;  /**< Auto RX polarity detected. 1=inverted, 0=normal
                                                         This bit always represents the correct rx polarity
                                                         setting needed for successful rx path operartion,
                                                         once a successful code group sync is obtained */
	uint64_t rxplrt                       : 1;  /**< 1 is inverted polarity, 0 is normal polarity */
	uint64_t txplrt                       : 1;  /**< 1 is inverted polarity, 0 is normal polarity */
#else
	uint64_t txplrt                       : 1;
	uint64_t rxplrt                       : 1;
	uint64_t autorxpl                     : 1;
	uint64_t rxovrd                       : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_gmp_pcs_tx_rxx_polarity_s cn78xx;
};
typedef union cvmx_bgxx_gmp_pcs_tx_rxx_polarity cvmx_bgxx_gmp_pcs_tx_rxx_polarity_t;

/**
 * cvmx_bgx#_smu#_cbfc_ctl
 */
union cvmx_bgxx_smux_cbfc_ctl {
	uint64_t u64;
	struct cvmx_bgxx_smux_cbfc_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t phys_en                      : 16; /**< Determines which ports will have physical
                                                         backpressure pause packets.
                                                         The value placed in the Class Enable Vector
                                                         field of the PFC/CBFC pause packet will be
                                                         PHYS_EN | LOGL_EN */
	uint64_t logl_en                      : 16; /**< Determines which ports will have logical
                                                         backpressure pause packets.
                                                         The value placed in the Class Enable Vector
                                                         field of the PFC/CBFC pause packet will be
                                                         PHYS_EN | LOGL_EN */
	uint64_t reserved_4_31                : 28;
	uint64_t bck_en                       : 1;  /**< Forward PFC/CBFC Pause information to BP block */
	uint64_t drp_en                       : 1;  /**< Drop Control PFC/CBFC Pause Frames */
	uint64_t tx_en                        : 1;  /**< When set, allow for PFC/CBFC Pause Packets
                                                         Must be clear in HiGig2 mode i.e. when
                                                         BGX_TX_CTL[HG_EN]=1 and
                                                         BGX_RX_UDD_SKP[SKIP]=16. */
	uint64_t rx_en                        : 1;  /**< When set, allow for PFC/CBFC Pause Packets
                                                         Must be clear in HiGig2 mode i.e. when
                                                         BGX_TX_CTL[HG_EN]=1 and
                                                         BGX_RX_UDD_SKP[SKIP]=16. */
#else
	uint64_t rx_en                        : 1;
	uint64_t tx_en                        : 1;
	uint64_t drp_en                       : 1;
	uint64_t bck_en                       : 1;
	uint64_t reserved_4_31                : 28;
	uint64_t logl_en                      : 16;
	uint64_t phys_en                      : 16;
#endif
	} s;
	struct cvmx_bgxx_smux_cbfc_ctl_s      cn78xx;
};
typedef union cvmx_bgxx_smux_cbfc_ctl cvmx_bgxx_smux_cbfc_ctl_t;

/**
 * cvmx_bgx#_smu#_ctrl
 *
 * "**************************************************************
 * BGX TX common (to all LMACs) registers                       *
 * **************************************************************
 * **************************************************************
 * BGX TX/RX registers                                          *
 * **************************************************************
 * BGX_SMU_CTRL = SMU Control Register"
 */
union cvmx_bgxx_smux_ctrl {
	uint64_t u64;
	struct cvmx_bgxx_smux_ctrl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t tx_idle                      : 1;  /**< TX Machine is idle This indication pertains to the framer FSM and ignores the effects on
                                                         the data-path controls or values which occur when BGX_SMU_TX_CTL[LS_BYP] is set */
	uint64_t rx_idle                      : 1;  /**< RX Machine is idle */
#else
	uint64_t rx_idle                      : 1;
	uint64_t tx_idle                      : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_bgxx_smux_ctrl_s          cn78xx;
};
typedef union cvmx_bgxx_smux_ctrl cvmx_bgxx_smux_ctrl_t;

/**
 * cvmx_bgx#_smu#_ext_loopback
 */
union cvmx_bgxx_smux_ext_loopback {
	uint64_t u64;
	struct cvmx_bgxx_smux_ext_loopback_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t en                           : 1;  /**< Loopback enable
                                                         Puts the packet interface in external loopback
                                                         mode where the RX lines are reflected on the TX lines. */
	uint64_t thresh                       : 4;  /**< Threshhold on the TX FIFO
                                                         SW must only write the typical value.  Any other
                                                         value will cause loopback mode not to function
                                                         correctly. */
#else
	uint64_t thresh                       : 4;
	uint64_t en                           : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_bgxx_smux_ext_loopback_s  cn78xx;
};
typedef union cvmx_bgxx_smux_ext_loopback cvmx_bgxx_smux_ext_loopback_t;

/**
 * cvmx_bgx#_smu#_hg2_control
 */
union cvmx_bgxx_smux_hg2_control {
	uint64_t u64;
	struct cvmx_bgxx_smux_hg2_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_19_63               : 45;
	uint64_t hg2tx_en                     : 1;  /**< Enable Transmission of HG2 phys and logl messages
                                                         When set, also disables HW auto-generated (802.3
                                                         and PFC/CBFC) pause frames. (OCTEON cannot generate
                                                         proper 802.3 or PFC/CBFC pause frames in HiGig2
                                                         mode.) */
	uint64_t hg2rx_en                     : 1;  /**< Enable extraction and processing of HG2 message
                                                         packet from RX flow. Physical logical pause info
                                                         is used to pause physical link, back pressure PKO
                                                         HG2RX_EN must be set when HiGig2 messages are
                                                         present in the receive stream. */
	uint64_t phys_en                      : 1;  /**< 1 bit physical link pause enable for recevied
                                                         HiGig2 physical pause message. This bit enables the SMU TX
                                                         to CMR HG2 deferring counter to be set every time SMU RX
                                                         receives and filters out a valid physical HG2 message. */
	uint64_t logl_en                      : 16; /**< 16 bit xof enables for recevied HiGig2 messages
                                                         or PFC/CBFC packets. This field is NOT used by SMU at all.
                                                         It is forwarded to CMR without alteration. It appears here
                                                         for backward compatibility tieh O68. */
#else
	uint64_t logl_en                      : 16;
	uint64_t phys_en                      : 1;
	uint64_t hg2rx_en                     : 1;
	uint64_t hg2tx_en                     : 1;
	uint64_t reserved_19_63               : 45;
#endif
	} s;
	struct cvmx_bgxx_smux_hg2_control_s   cn78xx;
};
typedef union cvmx_bgxx_smux_hg2_control cvmx_bgxx_smux_hg2_control_t;

/**
 * cvmx_bgx#_smu#_rx_bad_col_hi
 */
union cvmx_bgxx_smux_rx_bad_col_hi {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_bad_col_hi_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_17_63               : 47;
	uint64_t val                          : 1;  /**< Set when BGX_RX_INT[PCTERR] is set. */
	uint64_t state                        : 8;  /**< When BGX_RX_INT[PCTERR] is set, STATE will
                                                         contain the receive state and the LMAC ID at the time of the
                                                         error. */
	uint64_t lane_rxc                     : 8;  /**< When BGX_RX_INT[PCTERR] is set, LANE_RXC will
                                                         contain the column at the time of the error. */
#else
	uint64_t lane_rxc                     : 8;
	uint64_t state                        : 8;
	uint64_t val                          : 1;
	uint64_t reserved_17_63               : 47;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_bad_col_hi_s cn78xx;
};
typedef union cvmx_bgxx_smux_rx_bad_col_hi cvmx_bgxx_smux_rx_bad_col_hi_t;

/**
 * cvmx_bgx#_smu#_rx_bad_col_lo
 */
union cvmx_bgxx_smux_rx_bad_col_lo {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_bad_col_lo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t lane_rxd                     : 64; /**< When BGX_RX_INT[PCTERR] is set, LANE_RXD will
                                                         contain the column at the time of the error. */
#else
	uint64_t lane_rxd                     : 64;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_bad_col_lo_s cn78xx;
};
typedef union cvmx_bgxx_smux_rx_bad_col_lo cvmx_bgxx_smux_rx_bad_col_lo_t;

/**
 * cvmx_bgx#_smu#_rx_ctl
 */
union cvmx_bgxx_smux_rx_ctl {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t status                       : 2;  /**< Link Status
                                                         0=Link OK
                                                         1=Local Fault
                                                         2=Remote Fault
                                                         3=Reserved */
#else
	uint64_t status                       : 2;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_ctl_s        cn78xx;
};
typedef union cvmx_bgxx_smux_rx_ctl cvmx_bgxx_smux_rx_ctl_t;

/**
 * cvmx_bgx#_smu#_rx_decision
 */
union cvmx_bgxx_smux_rx_decision {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_decision_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t cnt                          : 5;  /**< The byte count to decide when to accept or filter
                                                         a packet. */
#else
	uint64_t cnt                          : 5;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_decision_s   cn78xx;
};
typedef union cvmx_bgxx_smux_rx_decision cvmx_bgxx_smux_rx_decision_t;

/**
 * cvmx_bgx#_smu#_rx_frm_chk
 */
union cvmx_bgxx_smux_rx_frm_chk {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_frm_chk_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t skperr                       : 1;  /**< Skipper error */
	uint64_t rcverr                       : 1;  /**< Frame was received with Data reception error */
	uint64_t reserved_6_6                 : 1;
	uint64_t fcserr_c                     : 1;  /**< Control Frame was received with FCS/CRC error */
	uint64_t fcserr_d                     : 1;  /**< Data Frame was received with FCS/CRC error */
	uint64_t jabber                       : 1;  /**< Frame was received with length > sys_length */
	uint64_t reserved_0_2                 : 3;
#else
	uint64_t reserved_0_2                 : 3;
	uint64_t jabber                       : 1;
	uint64_t fcserr_d                     : 1;
	uint64_t fcserr_c                     : 1;
	uint64_t reserved_6_6                 : 1;
	uint64_t rcverr                       : 1;
	uint64_t skperr                       : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_frm_chk_s    cn78xx;
};
typedef union cvmx_bgxx_smux_rx_frm_chk cvmx_bgxx_smux_rx_frm_chk_t;

/**
 * cvmx_bgx#_smu#_rx_frm_ctl
 */
union cvmx_bgxx_smux_rx_frm_ctl {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_frm_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t ptp_mode                     : 1;  /**< Timestamp mode
                                                         When PTP_MODE is set, a 64-bit timestamp will be
                                                         prepended to every incoming packet. The timestamp
                                                         bytes are added to the packet in such a way as to
                                                         not modify the packet's receive byte count.
                                                         This implies that the BGX_RX_JABBER,
                                                         BGX_RX_DECISION, and BGX_RX_UDD_SKP do not require
                                                         any adjustment as
                                                         they operate on the received packet size.
                                                         When the packet reaches PKI, its size will
                                                         reflect the additional bytes and is subject to
                                                         the restrictions below.
                                                         If PTP_MODE=1 and PRE_CHK=1, PRE_STRP must be 1.
                                                         If PTP_MODE=1,
                                                         PIP_PRT_CFGx[SKIP] should be increased by 8.
                                                         PIP_PRT_CFGx[HIGIG_EN] should be 0.
                                                         PIP_FRM_CHKx[MAXLEN] should be increased by 8.
                                                         PIP_FRM_CHKx[MINLEN] should be increased by 8.
                                                         PIP_TAG_INCx[EN] should be adjusted.
                                                         PIP_PRT_CFGBx[ALT_SKP_EN] should be 0. */
	uint64_t reserved_6_11                : 6;
	uint64_t ctl_smac                     : 1;  /**< Control Pause Frames can match station SMAC */
	uint64_t ctl_mcst                     : 1;  /**< Control Pause Frames can match globally assign
                                                         Multicast address */
	uint64_t ctl_bck                      : 1;  /**< Forward pause information to TX block */
	uint64_t ctl_drp                      : 1;  /**< Drop Control Pause Frames */
	uint64_t pre_strp                     : 1;  /**< Strip off the preamble (when present)
                                                         0=PREAMBLE+SFD is sent to core as part of frame
                                                         1=PREAMBLE+SFD is dropped
                                                         PRE_CHK must be set to enable this and all
                                                         PREAMBLE features.
                                                         If PTP_MODE=1 and PRE_CHK=1, PRE_STRP must be 1. */
	uint64_t pre_chk                      : 1;  /**< This port is configured to send a valid 802.3
                                                         PREAMBLE to begin every frame. BGX checks that a
                                                         valid PREAMBLE is received (based on PRE_FREE).
                                                         When a problem does occur within the PREAMBLE
                                                         seqeunce, the frame is marked as bad and not sent
                                                         into the core.  The BGX_RX_INT[PCTERR]
                                                         interrupt is also raised.
                                                         When BGX_TX_CTL[HG_EN] is set, PRE_CHK
                                                         must be zero.
                                                         If PTP_MODE=1 and PRE_CHK=1, PRE_STRP must be 1. */
#else
	uint64_t pre_chk                      : 1;
	uint64_t pre_strp                     : 1;
	uint64_t ctl_drp                      : 1;
	uint64_t ctl_bck                      : 1;
	uint64_t ctl_mcst                     : 1;
	uint64_t ctl_smac                     : 1;
	uint64_t reserved_6_11                : 6;
	uint64_t ptp_mode                     : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_frm_ctl_s    cn78xx;
};
typedef union cvmx_bgxx_smux_rx_frm_ctl cvmx_bgxx_smux_rx_frm_ctl_t;

/**
 * cvmx_bgx#_smu#_rx_int
 *
 * "**************************************************************
 * BGX RX per LMAC registers                                    *
 * **************************************************************
 * BGX_SMU_RX_INT = Interrupt Register"
 */
union cvmx_bgxx_smux_rx_int {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t hg2cc                        : 1;  /**< HiGig2 received message CRC or Control char  error
                                                         Set when either CRC8 error detected or when
                                                         a Control Character is found in the message
                                                         bytes after the K.SOM
                                                         NOTE: HG2CC has higher priority than HG2FLD
                                                         i.e. a HiGig2 message that results in HG2CC
                                                         getting set, will never set HG2FLD. */
	uint64_t hg2fld                       : 1;  /**< HiGig2 received message field error, as below
                                                         1) MSG_TYPE field not 6'b00_0000
                                                         i.e. it is not a FLOW CONTROL message, which
                                                         is the only defined type for HiGig2
                                                         2) FWD_TYPE field not 2'b00 i.e. Link Level msg
                                                         which is the only defined type for HiGig2
                                                         3) FC_OBJECT field is neither 4'b0000 for
                                                         Physical Link nor 4'b0010 for Logical Link.
                                                         Those are the only two defined types in HiGig2 */
	uint64_t bad_term                     : 1;  /**< Frame is terminated by control character other
                                                         than /T/.  The error propagation control
                                                         character /E/ will be included as part of the
                                                         frame and does not cause a frame termination. */
	uint64_t bad_seq                      : 1;  /**< Reserved Sequence Deteted */
	uint64_t rem_fault                    : 1;  /**< Remote Fault Sequence Deteted */
	uint64_t loc_fault                    : 1;  /**< Local Fault Sequence Deteted */
	uint64_t rsverr                       : 1;  /**< Reserved opcodes */
	uint64_t pcterr                       : 1;  /**< Bad Preamble / Protocol
                                                         The column of data that was
                                                         bad will be logged in BGX_RX_BAD_COL */
	uint64_t skperr                       : 1;  /**< Skipper error */
	uint64_t rcverr                       : 1;  /**< Frame was received with Data reception error */
	uint64_t fcserr                       : 1;  /**< Frame was received with FCS/CRC error */
	uint64_t jabber                       : 1;  /**< Frame was received with length > sys_length */
#else
	uint64_t jabber                       : 1;
	uint64_t fcserr                       : 1;
	uint64_t rcverr                       : 1;
	uint64_t skperr                       : 1;
	uint64_t pcterr                       : 1;
	uint64_t rsverr                       : 1;
	uint64_t loc_fault                    : 1;
	uint64_t rem_fault                    : 1;
	uint64_t bad_seq                      : 1;
	uint64_t bad_term                     : 1;
	uint64_t hg2fld                       : 1;
	uint64_t hg2cc                        : 1;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_int_s        cn78xx;
};
typedef union cvmx_bgxx_smux_rx_int cvmx_bgxx_smux_rx_int_t;

/**
 * cvmx_bgx#_smu#_rx_jabber
 */
union cvmx_bgxx_smux_rx_jabber {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_jabber_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t cnt                          : 16; /**< Byte count for jabber check
                                                         Failing packets set the JABBER interrupt and are
                                                         optionally sent with opcode==JABBER
                                                         BGX will truncate the packet to CNT+1 to CNT+8 bytes */
#else
	uint64_t cnt                          : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_jabber_s     cn78xx;
};
typedef union cvmx_bgxx_smux_rx_jabber cvmx_bgxx_smux_rx_jabber_t;

/**
 * cvmx_bgx#_smu#_rx_udd_skp
 */
union cvmx_bgxx_smux_rx_udd_skp {
	uint64_t u64;
	struct cvmx_bgxx_smux_rx_udd_skp_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t fcssel                       : 1;  /**< Include the skip bytes in the FCS calculation
                                                         0 = all skip bytes are included in FCS
                                                         1 = the skip bytes are not included in FCS
                                                         When BGX_TX_CTL[HG_EN] is set, FCSSEL must
                                                         be zero. */
	uint64_t reserved_7_7                 : 1;
	uint64_t len                          : 7;  /**< Amount of User-defined data before the start of
                                                         the L2 data.  Zero means L2 comes first.
                                                         Max value is 64.
                                                         When BGX_TX_CTL[HG_EN] is set, LEN must be
                                                         set to 12 or 16 (depending on HiGig header size)
                                                         to account for the HiGig header. LEN=12 selects
                                                         HiGig/HiGig+, and LEN=16 selects HiGig2. */
#else
	uint64_t len                          : 7;
	uint64_t reserved_7_7                 : 1;
	uint64_t fcssel                       : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_bgxx_smux_rx_udd_skp_s    cn78xx;
};
typedef union cvmx_bgxx_smux_rx_udd_skp cvmx_bgxx_smux_rx_udd_skp_t;

/**
 * cvmx_bgx#_smu#_smac
 */
union cvmx_bgxx_smux_smac {
	uint64_t u64;
	struct cvmx_bgxx_smux_smac_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t smac                         : 48; /**< The SMAC field is used for generating and
                                                         accepting Control Pause packets */
#else
	uint64_t smac                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_smux_smac_s          cn78xx;
};
typedef union cvmx_bgxx_smux_smac cvmx_bgxx_smux_smac_t;

/**
 * cvmx_bgx#_smu#_tx_append
 */
union cvmx_bgxx_smux_tx_append {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_append_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t fcs_c                        : 1;  /**< Append the Ethernet FCS on each pause packet
                                                         Pause packets are normally padded to 60 bytes. */
	uint64_t fcs_d                        : 1;  /**< Append the Ethernet FCS on each data packet */
	uint64_t pad                          : 1;  /**< Append PAD bytes such that min sized */
	uint64_t preamble                     : 1;  /**< Prepend the Ethernet preamble on each transfer
                                                         When BGX_TX_CTL[HG_EN] is set, PREAMBLE
                                                         must be zero. */
#else
	uint64_t preamble                     : 1;
	uint64_t pad                          : 1;
	uint64_t fcs_d                        : 1;
	uint64_t fcs_c                        : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_append_s     cn78xx;
};
typedef union cvmx_bgxx_smux_tx_append cvmx_bgxx_smux_tx_append_t;

/**
 * cvmx_bgx#_smu#_tx_ctl
 */
union cvmx_bgxx_smux_tx_ctl {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_31_63               : 33;
	uint64_t spu_mrk_cnt                  : 20; /**< 40GBASE-R Transmit Marker Interval Count: Specifies the interval
                                                         (number of 66-bit BASE-R blocks) at which the LMAC transmit logic
                                                         inserts 40GBASE-R alignment markers. An internal counter in SMU is
                                                         initialized to this value, counts down for each BASE-R block
                                                         transmitted by the LMAC, and wraps back to the initial value from 0.
                                                         The LMAC transmit logic inserts alignment markers for lanes 0, 1, 2
                                                         and 3, respectively, in the last four BASE-R blocks before the
                                                         counter wraps (3, 2, 1, 0). The default value corresponds to an
                                                         alignment marker period of 16363 blocks (exclusive) per lane, as
                                                         specified in 802.3ba-2010. The default value should always be used
                                                         for normal operation. */
	uint64_t hg_pause_hgi                 : 2;  /**< HGI Field for HW generated HiGig pause packets */
	uint64_t hg_en                        : 1;  /**< Enable HiGig Mode
                                                         When HG_EN is set and BGX_RX_UDD_SKP[SKIP]=12
                                                         the interface is in HiGig/HiGig+ mode and the
                                                         following must be set:
                                                         BGX_RX_FRM_CTL[PRE_CHK] == 0
                                                         BGX_RX_UDD_SKP[FCSSEL] == 0
                                                         BGX_RX_UDD_SKP[SKIP] == 12
                                                         BGX_TX_APPEND[PREAMBLE] == 0
                                                         When HG_EN is set and BGX_RX_UDD_SKP[SKIP]=16
                                                         the interface is in HiGig2 mode and the
                                                         following must be set:
                                                         BGX_RX_FRM_CTL[PRE_CHK] == 0
                                                         BGX_RX_UDD_SKP[FCSSEL] == 0
                                                         BGX_RX_UDD_SKP[SKIP] == 16
                                                         BGX_TX_APPEND[PREAMBLE] == 0
                                                         BGX_SMUX_CBFC_CTL[RX_EN] == 0
                                                         BGX_SMUX_CBFC_CTL[TX_EN] == 0 */
	uint64_t l2p_bp_conv                  : 1;  /**< If set will cause TX to generate 802.3 pause packets when CMR applies logical backpressure
                                                         (XOFF), if and only if BGX_SMUX_CBFC_CTL[TX_EN] == 0 and
                                                         BGX(0..5)_SMU(0..3)_HG2_CONTROL[HG2TX_EN] == 0. */
	uint64_t ls_byp                       : 1;  /**< Bypass the link status as determined by the XGMII
                                                         receiver and set the link status of the
                                                         transmitter to LS. */
	uint64_t ls                           : 2;  /**< Link Status
                                                         0 = Link Ok
                                                         Link runs normally. RS passes MAC data to PCS
                                                         1 = Local Fault
                                                         RS layer sends continuous remote fault
                                                         sequences.
                                                         2 = Remote Fault
                                                         RS layer sends continuous idles sequences
                                                         3 = Link Drain
                                                         RS layer drops full packets to allow BGX and
                                                         PKO to drain their FIFOs */
	uint64_t reserved_2_3                 : 2;
	uint64_t uni_en                       : 1;  /**< Enable Unidirectional Mode (IEEE Clause 66) */
	uint64_t dic_en                       : 1;  /**< Enable the deficit idle counter for IFG averaging */
#else
	uint64_t dic_en                       : 1;
	uint64_t uni_en                       : 1;
	uint64_t reserved_2_3                 : 2;
	uint64_t ls                           : 2;
	uint64_t ls_byp                       : 1;
	uint64_t l2p_bp_conv                  : 1;
	uint64_t hg_en                        : 1;
	uint64_t hg_pause_hgi                 : 2;
	uint64_t spu_mrk_cnt                  : 20;
	uint64_t reserved_31_63               : 33;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_ctl_s        cn78xx;
};
typedef union cvmx_bgxx_smux_tx_ctl cvmx_bgxx_smux_tx_ctl_t;

/**
 * cvmx_bgx#_smu#_tx_ifg
 */
union cvmx_bgxx_smux_tx_ifg {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_ifg_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t ifg2                         : 4;  /**< 1/2 of the interframe gap timing (in IFG2*8 bits) */
	uint64_t ifg1                         : 4;  /**< 1/2 of the interframe gap timing (in IFG1*8 bits) */
#else
	uint64_t ifg1                         : 4;
	uint64_t ifg2                         : 4;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_ifg_s        cn78xx;
};
typedef union cvmx_bgxx_smux_tx_ifg cvmx_bgxx_smux_tx_ifg_t;

/**
 * cvmx_bgx#_smu#_tx_int
 */
union cvmx_bgxx_smux_tx_int {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_5_63                : 59;
	uint64_t lb_ovrflw                    : 1;  /**< TX Loopback Overflow */
	uint64_t lb_undflw                    : 1;  /**< TX Loopback Underflow */
	uint64_t fake_commit                  : 1;  /**< TX SMU started a packet with PTP on SOP and has not seen a commit for it
                                                         from TX SPU after 2^SMU_TX_PTP_TIMEOUT_WIDTH (2^8) cycles so it faked a
                                                         commit to CMR */
	uint64_t xchange                      : 1;  /**< link status changed - this denotes a
                                                         change to BGX_RX_CTL[STATUS] */
	uint64_t undflw                       : 1;  /**< TX Underflow */
#else
	uint64_t undflw                       : 1;
	uint64_t xchange                      : 1;
	uint64_t fake_commit                  : 1;
	uint64_t lb_undflw                    : 1;
	uint64_t lb_ovrflw                    : 1;
	uint64_t reserved_5_63                : 59;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_int_s        cn78xx;
};
typedef union cvmx_bgxx_smux_tx_int cvmx_bgxx_smux_tx_int_t;

/**
 * cvmx_bgx#_smu#_tx_min_pkt
 */
union cvmx_bgxx_smux_tx_min_pkt {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_min_pkt_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t min_size                     : 8;  /**< Min frame in bytes inclusive of FCS, if applied.
                                                         Padding is only appended when BGX_TX_APPEND[PAD]
                                                         for the coresponding port is set.
                                                         When FCS is added to a packet which was padded,
                                                         the FCS will always appear in the 4 octets
                                                         preceding /T/ or /E/ */
#else
	uint64_t min_size                     : 8;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_min_pkt_s    cn78xx;
};
typedef union cvmx_bgxx_smux_tx_min_pkt cvmx_bgxx_smux_tx_min_pkt_t;

/**
 * cvmx_bgx#_smu#_tx_pause_pkt_dmac
 */
union cvmx_bgxx_smux_tx_pause_pkt_dmac {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_pause_pkt_dmac_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t dmac                         : 48; /**< The DMAC field placed is outbnd pause pkts */
#else
	uint64_t dmac                         : 48;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_pause_pkt_dmac_s cn78xx;
};
typedef union cvmx_bgxx_smux_tx_pause_pkt_dmac cvmx_bgxx_smux_tx_pause_pkt_dmac_t;

/**
 * cvmx_bgx#_smu#_tx_pause_pkt_interval
 */
union cvmx_bgxx_smux_tx_pause_pkt_interval {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_pause_pkt_interval_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_33_63               : 31;
	uint64_t hg2_intra_en                 : 1;  /**< Allow intrapacket HiGig2 message generation
                                                         Relevant only if HiGig2 message generation is enabled */
	uint64_t hg2_intra_interval           : 16; /**< Arbitrate for a HiGig2 message, every (INTERVAL*512)
                                                         bit-times whilst sending regular packet data
                                                         Relevant only if HiGig2 message generation and HG2_INTRA_EN
                                                         are both set.
                                                         Normally, 0 < INTERVAL < BGX_TX_PAUSE_PKT_TIME
                                                         INTERVAL=0, will only send a single PAUSE packet
                                                         for each backpressure event */
	uint64_t interval                     : 16; /**< Arbitrate for a 802.3 pause packet, HiGig2 message,
                                                         or PFC/CBFC pause packet every (INTERVAL*512)
                                                         bit-times.
                                                         Normally, 0 < INTERVAL < BGX_TX_PAUSE_PKT_TIME
                                                         INTERVAL=0, will only send a single PAUSE packet
                                                         for each backpressure event */
#else
	uint64_t interval                     : 16;
	uint64_t hg2_intra_interval           : 16;
	uint64_t hg2_intra_en                 : 1;
	uint64_t reserved_33_63               : 31;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_pause_pkt_interval_s cn78xx;
};
typedef union cvmx_bgxx_smux_tx_pause_pkt_interval cvmx_bgxx_smux_tx_pause_pkt_interval_t;

/**
 * cvmx_bgx#_smu#_tx_pause_pkt_time
 */
union cvmx_bgxx_smux_tx_pause_pkt_time {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_pause_pkt_time_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t p_time                       : 16; /**< The pause_time field placed in outbnd 802.3 pause
                                                         packets, HiGig2 messages, or PFC/CBFC pause
                                                         packets.
                                                         pause_time is in 512 bit-times
                                                         Normally, P_TIME > BGX_TX_PAUSE_PKT_INTERVAL */
#else
	uint64_t p_time                       : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_pause_pkt_time_s cn78xx;
};
typedef union cvmx_bgxx_smux_tx_pause_pkt_time cvmx_bgxx_smux_tx_pause_pkt_time_t;

/**
 * cvmx_bgx#_smu#_tx_pause_pkt_type
 */
union cvmx_bgxx_smux_tx_pause_pkt_type {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_pause_pkt_type_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t p_type                       : 16; /**< The P_TYPE field placed is outbnd pause pkts */
#else
	uint64_t p_type                       : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_pause_pkt_type_s cn78xx;
};
typedef union cvmx_bgxx_smux_tx_pause_pkt_type cvmx_bgxx_smux_tx_pause_pkt_type_t;

/**
 * cvmx_bgx#_smu#_tx_pause_togo
 */
union cvmx_bgxx_smux_tx_pause_togo {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_pause_togo_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_32_63               : 32;
	uint64_t msg_time                     : 16; /**< Amount of time remaining to backpressure
                                                         From the higig2 physical message pause timer
                                                         (only valid on port0) */
	uint64_t p_time                       : 16; /**< Amount of time remaining to backpressure
                                                         From the standard 802.3 pause timer */
#else
	uint64_t p_time                       : 16;
	uint64_t msg_time                     : 16;
	uint64_t reserved_32_63               : 32;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_pause_togo_s cn78xx;
};
typedef union cvmx_bgxx_smux_tx_pause_togo cvmx_bgxx_smux_tx_pause_togo_t;

/**
 * cvmx_bgx#_smu#_tx_pause_zero
 */
union cvmx_bgxx_smux_tx_pause_zero {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_pause_zero_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t send                         : 1;  /**< When backpressure condition clear, send PAUSE
                                                         packet with pause_time of zero to enable the
                                                         channel */
#else
	uint64_t send                         : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_pause_zero_s cn78xx;
};
typedef union cvmx_bgxx_smux_tx_pause_zero cvmx_bgxx_smux_tx_pause_zero_t;

/**
 * cvmx_bgx#_smu#_tx_soft_pause
 */
union cvmx_bgxx_smux_tx_soft_pause {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_soft_pause_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t p_time                       : 16; /**< Back off the TX bus for (P_TIME*512) bit-times */
#else
	uint64_t p_time                       : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_soft_pause_s cn78xx;
};
typedef union cvmx_bgxx_smux_tx_soft_pause cvmx_bgxx_smux_tx_soft_pause_t;

/**
 * cvmx_bgx#_smu#_tx_thresh
 */
union cvmx_bgxx_smux_tx_thresh {
	uint64_t u64;
	struct cvmx_bgxx_smux_tx_thresh_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_11_63               : 53;
	uint64_t cnt                          : 11; /**< Number of 128b words to accumulate in the TX FIFO
                                                         before sending on the packet interface
                                                         This register should be large enough to prevent
                                                         underflow on the packet interface and must never
                                                         be set to zero.
                                                         10G/40G Mode, CNT == 0x100
                                                         In all modes, this register cannot exceed the
                                                         the TX FIFO depth which is...
                                                         BGX_CMR_TX_LMACS==0,1:  CNT MAX = 0x7FF
                                                         BGX_CMR_TX_LMACS==2  :  CNT MAX = 0x3FF
                                                         BGX_CMR_TX_LMACS==3  :  CNT MAX = 0x1FF */
#else
	uint64_t cnt                          : 11;
	uint64_t reserved_11_63               : 53;
#endif
	} s;
	struct cvmx_bgxx_smux_tx_thresh_s     cn78xx;
};
typedef union cvmx_bgxx_smux_tx_thresh cvmx_bgxx_smux_tx_thresh_t;

/**
 * cvmx_bgx#_spu#_an_adv
 *
 * "Auto Negotiation Advertisement:
 * Software programs the AN_ADV register with the contents of the AN link
 * codeword base page to be transmitted during Auto-Negotiation. See section 802.3
 * section 73.6 for details.
 * Any writes to this register prior to completion of Auto-Negotiation, as indicated
 * by the AN_COMPLETE bit in AN_STATUS, should be followed by a
 * renegotiation for the new values to take effect. Renegotiation is initiated by
 * setting the AN_RESTART bit in AN_CONTROL.
 * Once Auto-Negotiation has completed, software may examine this register along with
 * the LP base page ability register to determine the highest common denominator
 * technology."
 */
union cvmx_bgxx_spux_an_adv {
	uint64_t u64;
	struct cvmx_bgxx_spux_an_adv_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t fec_req                      : 1;  /**< FEC Requested */
	uint64_t fec_able                     : 1;  /**< FEC Ability */
	uint64_t arsv                         : 19; /**< Technology Ability reserved bits
                                                         Should always be 0. */
	uint64_t a100g_cr10                   : 1;  /**< 100GBASE-CR10 Ability
                                                         Should always be 0; 100GBASE-R is not supported. */
	uint64_t a40g_cr4                     : 1;  /**< 40GBASE-CR4 Ability */
	uint64_t a40g_kr4                     : 1;  /**< 40GBASE-KR4 Ability */
	uint64_t a10g_kr                      : 1;  /**< 10GBASE-KR Ability */
	uint64_t a10g_kx4                     : 1;  /**< 10GBASE-KX4 Ability */
	uint64_t a1g_kx                       : 1;  /**< 1000BASE-KX Ability */
	uint64_t t                            : 5;  /**< "Transmitted Nonce: This field is automatically updated with a
                                                         pseudo-random value on entry to the AN Ability Detect state." */
	uint64_t np                           : 1;  /**< Next Page. */
	uint64_t ack                          : 1;  /**< Ack: Always 0 in this register. */
	uint64_t rf                           : 1;  /**< Remote Fault */
	uint64_t xnp_able                     : 1;  /**< Extended Next Page ability. */
	uint64_t asm_dir                      : 1;  /**< Asymmetric Pause */
	uint64_t pause                        : 1;  /**< Pause Ability */
	uint64_t e                            : 5;  /**< Echoed Nonce
                                                         Echoed Nonce value to use when ACK=0 in transmitted DME page. Should
                                                         always be 0. */
	uint64_t s                            : 5;  /**< Selector
                                                         Should be 0x1 (encoding for IEEE Std 802.3). */
#else
	uint64_t s                            : 5;
	uint64_t e                            : 5;
	uint64_t pause                        : 1;
	uint64_t asm_dir                      : 1;
	uint64_t xnp_able                     : 1;
	uint64_t rf                           : 1;
	uint64_t ack                          : 1;
	uint64_t np                           : 1;
	uint64_t t                            : 5;
	uint64_t a1g_kx                       : 1;
	uint64_t a10g_kx4                     : 1;
	uint64_t a10g_kr                      : 1;
	uint64_t a40g_kr4                     : 1;
	uint64_t a40g_cr4                     : 1;
	uint64_t a100g_cr10                   : 1;
	uint64_t arsv                         : 19;
	uint64_t fec_able                     : 1;
	uint64_t fec_req                      : 1;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_an_adv_s        cn78xx;
};
typedef union cvmx_bgxx_spux_an_adv cvmx_bgxx_spux_an_adv_t;

/**
 * cvmx_bgx#_spu#_an_bp_status
 *
 * "Backplane Ethernet & BASE-R Copper Status:
 * The contents of the AN_BP_STATUS register (with the exception of the
 * static BP_AN_ABLE bit) are updated during Auto-Negotiation and are valid
 * when the AN_COMPLETE bit is set in AN_STATUS. At that time, one of the
 * port type bits (A100G_CR10, A40G_CR4, A40G_KR4, A10G_KR, A10G_KX4, A1G_KX)
 * will be set depending on the AN priority resolution. If a BASE-R type is
 * negotiated, then the FEC bit will be set to indicate that FEC operation
 * has been negotiated, and will be clear otherwise."
 */
union cvmx_bgxx_spux_an_bp_status {
	uint64_t u64;
	struct cvmx_bgxx_spux_an_bp_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t n100g_cr10                   : 1;  /**< "100GBASE-CR10 negotiated:
                                                         Expected to always be 0; 100GBASE-R is not supported." */
	uint64_t reserved_7_7                 : 1;
	uint64_t n40g_cr4                     : 1;  /**< 40GBASE-CR4 negotiated */
	uint64_t n40g_kr4                     : 1;  /**< 40GBASE-KR4 negotiated */
	uint64_t fec                          : 1;  /**< BASE-R FEC negotiated */
	uint64_t n10g_kr                      : 1;  /**< 10GBASE-KR negotiated */
	uint64_t n10g_kx4                     : 1;  /**< 10GBASE-KX4 or CX4 negotiated (XAUI) */
	uint64_t n1g_kx                       : 1;  /**< 1000BASE-KX negotiated */
	uint64_t bp_an_able                   : 1;  /**< "Backplane or BASE-R Copper AN Ability:
                                                         Always 1." */
#else
	uint64_t bp_an_able                   : 1;
	uint64_t n1g_kx                       : 1;
	uint64_t n10g_kx4                     : 1;
	uint64_t n10g_kr                      : 1;
	uint64_t fec                          : 1;
	uint64_t n40g_kr4                     : 1;
	uint64_t n40g_cr4                     : 1;
	uint64_t reserved_7_7                 : 1;
	uint64_t n100g_cr10                   : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_bgxx_spux_an_bp_status_s  cn78xx;
};
typedef union cvmx_bgxx_spux_an_bp_status cvmx_bgxx_spux_an_bp_status_t;

/**
 * cvmx_bgx#_spu#_an_control
 *
 * Auto Negotiation Control
 *
 */
union cvmx_bgxx_spux_an_control {
	uint64_t u64;
	struct cvmx_bgxx_spux_an_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t an_reset                     : 1;  /**< "Auto-Negotiation Reset:
                                                         Writing a 1 to this bit or to the RESET bit in register CONTROL1
                                                         resets the logical PCS (LPCS), sets the 802.3 PCS, FEC and AN
                                                         registers for the LPCS to their default states, and resets the
                                                         associated serdes lanes. It takes up to 32 sclk cycles to reset the
                                                         LPCS, after which this bit is automatically cleared." */
	uint64_t reserved_14_14               : 1;
	uint64_t xnp_en                       : 1;  /**< Extended Next Page Enable. */
	uint64_t an_en                        : 1;  /**< Auto-Negotiation Enable. This bit should not be set when
                                                         BGX_CMR_CONFIG[LMAC_TYPE] is set to RXAUI; auto-negotiation is not
                                                         supported in RXAUI mode. */
	uint64_t reserved_10_11               : 2;
	uint64_t an_restart                   : 1;  /**< "Auto-Negotiation Restart:
                                                         Writing a 1 to this bit restarts the Auto-Negotiation process if the
                                                         AN_EN bit in the register is also set. This is a self-clearing bit." */
	uint64_t reserved_0_8                 : 9;
#else
	uint64_t reserved_0_8                 : 9;
	uint64_t an_restart                   : 1;
	uint64_t reserved_10_11               : 2;
	uint64_t an_en                        : 1;
	uint64_t xnp_en                       : 1;
	uint64_t reserved_14_14               : 1;
	uint64_t an_reset                     : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_spux_an_control_s    cn78xx;
};
typedef union cvmx_bgxx_spux_an_control cvmx_bgxx_spux_an_control_t;

/**
 * cvmx_bgx#_spu#_an_lp_base
 *
 * "Auto Negotiation Link Partner Base Page Ability:
 * The AN_LP_BASE register captures the contents of the latest AN link
 * codeword base page received from the link partner during Auto-Negotiation. See
 * section 802.3 section 73.6 for details. The PAGE_RX bit in AN_STATUS is
 * set when this register is updated by hardware."
 */
union cvmx_bgxx_spux_an_lp_base {
	uint64_t u64;
	struct cvmx_bgxx_spux_an_lp_base_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t fec_req                      : 1;  /**< FEC Requested */
	uint64_t fec_able                     : 1;  /**< FEC Ability */
	uint64_t arsv                         : 19; /**< Technology Ability reserved bits */
	uint64_t a100g_cr10                   : 1;  /**< 100GBASE-CR10 Ability */
	uint64_t a40g_cr4                     : 1;  /**< 40GBASE-CR4 Ability */
	uint64_t a40g_kr4                     : 1;  /**< 40GBASE-KR4 Ability */
	uint64_t a10g_kr                      : 1;  /**< 10GBASE-KR Ability */
	uint64_t a10g_kx4                     : 1;  /**< 10GBASE-KX4 Ability */
	uint64_t a1g_kx                       : 1;  /**< 1000BASE-KX Ability */
	uint64_t t                            : 5;  /**< Transmitted Nonce */
	uint64_t np                           : 1;  /**< Next Page */
	uint64_t ack                          : 1;  /**< Acknowledge */
	uint64_t rf                           : 1;  /**< Remote Fault */
	uint64_t xnp_able                     : 1;  /**< Extended Next Page ability. */
	uint64_t asm_dir                      : 1;  /**< Asymmetric Pause */
	uint64_t pause                        : 1;  /**< Pause Ability */
	uint64_t e                            : 5;  /**< Echoed Nonce */
	uint64_t s                            : 5;  /**< Selector */
#else
	uint64_t s                            : 5;
	uint64_t e                            : 5;
	uint64_t pause                        : 1;
	uint64_t asm_dir                      : 1;
	uint64_t xnp_able                     : 1;
	uint64_t rf                           : 1;
	uint64_t ack                          : 1;
	uint64_t np                           : 1;
	uint64_t t                            : 5;
	uint64_t a1g_kx                       : 1;
	uint64_t a10g_kx4                     : 1;
	uint64_t a10g_kr                      : 1;
	uint64_t a40g_kr4                     : 1;
	uint64_t a40g_cr4                     : 1;
	uint64_t a100g_cr10                   : 1;
	uint64_t arsv                         : 19;
	uint64_t fec_able                     : 1;
	uint64_t fec_req                      : 1;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_an_lp_base_s    cn78xx;
};
typedef union cvmx_bgxx_spux_an_lp_base cvmx_bgxx_spux_an_lp_base_t;

/**
 * cvmx_bgx#_spu#_an_lp_xnp
 *
 * "Auto Negotiation Link Partner Extended Next Page (XNP) Ability:
 * The AN_LP_XNP register captures the contents of the latest Next Page
 * codeword received from the link partner during Auto-Negotiation, if any.
 * See section 802.3 section 73.7.7 for details."
 */
union cvmx_bgxx_spux_an_lp_xnp {
	uint64_t u64;
	struct cvmx_bgxx_spux_an_lp_xnp_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t u                            : 32; /**< Unformatted Code field. */
	uint64_t np                           : 1;  /**< Next Page. */
	uint64_t ack                          : 1;  /**< Acknowledge. */
	uint64_t mp                           : 1;  /**< Message Page. */
	uint64_t ack2                         : 1;  /**< Acknowledge 2. */
	uint64_t toggle                       : 1;  /**< Toggle. */
	uint64_t m_u                          : 11; /**< Message/Unformatted Code field. */
#else
	uint64_t m_u                          : 11;
	uint64_t toggle                       : 1;
	uint64_t ack2                         : 1;
	uint64_t mp                           : 1;
	uint64_t ack                          : 1;
	uint64_t np                           : 1;
	uint64_t u                            : 32;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_an_lp_xnp_s     cn78xx;
};
typedef union cvmx_bgxx_spux_an_lp_xnp cvmx_bgxx_spux_an_lp_xnp_t;

/**
 * cvmx_bgx#_spu#_an_status
 *
 * Auto Negotiation Status
 *
 */
union cvmx_bgxx_spux_an_status {
	uint64_t u64;
	struct cvmx_bgxx_spux_an_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_10_63               : 54;
	uint64_t prl_flt                      : 1;  /**< "Parallel Detection Fault:
                                                         Always 0; SPU does not support parallel detection as part of the
                                                         Auto-Negotiation protocol." */
	uint64_t reserved_8_8                 : 1;
	uint64_t xnp_stat                     : 1;  /**< Extended Next Page Status. */
	uint64_t page_rx                      : 1;  /**< "Page Received:
                                                         This bit is set when a New Page has been received and stored in the
                                                         AN_LP_BASE or AN_LP_XNP register. Latching High bit; stays set until a
                                                         1 is written by software, Auto-Negotiation is disabled or restarted,
                                                         or Next page exchange is initiated.
                                                         Note that in order to avoid read side effects, this is implemented as
                                                         a write-1-to-clear bit, rather than latching high read-only as
                                                         specified in 802.3." */
	uint64_t an_complete                  : 1;  /**< "Auto-Negotiation Complete:
                                                         This bit is set when the Auto-Negotiation process has been completed
                                                         and the link is up and running using the negotiated Highest Common
                                                         Denominator (HCD) technology.
                                                           If AN is enabled (AN_EN=1 in register AN_CONTROL) and this bit is
                                                         read as a zero, it indicates that the AN process has not been
                                                         completed, and the contents of the AN_LP_BASE, AN_XNP_TX and
                                                         AN_LP_XNP registers are as defined by the current state of the
                                                         Auto-Negotiation protocol, or as written for manual configuration.
                                                         This bit is always zero when AN is disabled (AN_EN=0)." */
	uint64_t rmt_flt                      : 1;  /**< Remote Fault: Always 0 . */
	uint64_t an_able                      : 1;  /**< Auto-Negotiation Ability: Always 1. */
	uint64_t link_status                  : 1;  /**< Link Status:
                                                         "This bit captures the state of the link_status variable as defined in
                                                         802.3 section 73.9.1.  When set, indicates that a valid link has been
                                                         established.  When clear, indicates that the link has been invalid
                                                         after this bit was last set by software. Latching Low bit; stays clear
                                                         until a 1 is written by software.
                                                         Note that in order to avoid read side effects, this is implemented as
                                                         a write-1-to-set bit, rather than latching low read-only as specified
                                                         in 802.3." */
	uint64_t reserved_1_1                 : 1;
	uint64_t lp_an_able                   : 1;  /**< "Link Partner AN Ability:
                                                         Set to indicate that the link partner is able to participate in the
                                                         Auto-Negotiation function, and cleared otherwise." */
#else
	uint64_t lp_an_able                   : 1;
	uint64_t reserved_1_1                 : 1;
	uint64_t link_status                  : 1;
	uint64_t an_able                      : 1;
	uint64_t rmt_flt                      : 1;
	uint64_t an_complete                  : 1;
	uint64_t page_rx                      : 1;
	uint64_t xnp_stat                     : 1;
	uint64_t reserved_8_8                 : 1;
	uint64_t prl_flt                      : 1;
	uint64_t reserved_10_63               : 54;
#endif
	} s;
	struct cvmx_bgxx_spux_an_status_s     cn78xx;
};
typedef union cvmx_bgxx_spux_an_status cvmx_bgxx_spux_an_status_t;

/**
 * cvmx_bgx#_spu#_an_xnp_tx
 *
 * "Auto Negotiation Extended Next Page (XNP) Transmit:
 * Software programs the AN_XNP_TX register with the contents of the AN
 * Message next page or Unformatted next page link code word to be
 * transmitted during Auto-Negotiation. Next page exchange occurs after the
 * base link codewords have been exchanged if either end of the link segment
 * sets the NP bit to 1, indicating that it has at least one next page to
 * send. Once initiated, Next page exchange continues until both end of the
 * link segment set their NP bits to 0. See section 802.3 section 73.7.7 for
 * details."
 */
union cvmx_bgxx_spux_an_xnp_tx {
	uint64_t u64;
	struct cvmx_bgxx_spux_an_xnp_tx_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_48_63               : 16;
	uint64_t u                            : 32; /**< "Unformatted Code field: When the MP bit is set, this field contains
                                                         the 32-bit Unformatted Code field of the Message next page. When MP is
                                                         clear, this field contains the upper 32 bits of the 43-bit Unformatted
                                                         Code field of the Unformatted next page." */
	uint64_t np                           : 1;  /**< Next Page. */
	uint64_t ack                          : 1;  /**< Ack: Always 0 in this register. */
	uint64_t mp                           : 1;  /**< "Message Page: Set to indicate that this register contains a Message
                                                         next page. Clear to indicate that the register contains an Unformatted
                                                         next page." */
	uint64_t ack2                         : 1;  /**< "Acknowledge 2: Indicates that the receiver is able to act on the
                                                         information (or perform the task) defined in the message." */
	uint64_t toggle                       : 1;  /**< "Used to ensure proper synchronization between the local device and
                                                         the link partner. This bit takes the opposite value of the Toggle bit
                                                         in the previously exchanged link codeword." */
	uint64_t m_u                          : 11; /**< "Message/Unformatted Code field: When the MP bit is set, this field
                                                         contains the Message Code field (M) of the Message next page. When MP
                                                         is clear, this field contains the lower 11 bits of the 43-bit
                                                         Unformatted Code field of the Unformatted next page." */
#else
	uint64_t m_u                          : 11;
	uint64_t toggle                       : 1;
	uint64_t ack2                         : 1;
	uint64_t mp                           : 1;
	uint64_t ack                          : 1;
	uint64_t np                           : 1;
	uint64_t u                            : 32;
	uint64_t reserved_48_63               : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_an_xnp_tx_s     cn78xx;
};
typedef union cvmx_bgxx_spux_an_xnp_tx cvmx_bgxx_spux_an_xnp_tx_t;

/**
 * cvmx_bgx#_spu#_br_algn_status
 *
 * "Multi-lane BASE-R PCS alignment status:
 * This register implements the 802.3 Multi-lane BASE-R PCS alignment status 1-4
 * registers (3.50-3.53). The register is only valid when the logical PCS type is
 * 40GBASE-R (LMAC_TYPE = 40G_R in the associated BGX_CMR_CONFIG register in the
 * CMR sub-block), and always returns 0 for all other LPCS types. 802.3 bits that are
 * not applicable to 40GBASE-R (i.e. status bits for PCS lanes 19-4) are not
 * implemented and marked as reserved. PCS lanes 3-0 are valid and are mapped to
 * physical serdes lanes based on the programming of the LANE_TO_SDS field in
 * BGX_CMR_CONFIG."
 */
union cvmx_bgxx_spux_br_algn_status {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_algn_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_36_63               : 28;
	uint64_t marker_lock                  : 4;  /**< Marker locked status for PCS lanes 3-0 */
	uint64_t reserved_13_31               : 19;
	uint64_t alignd                       : 1;  /**< All lanes locked & aligned:
                                                         This bit returns 1 when the logical PCS has locked and aligned all
                                                         associated receive lanes, and returns 0 otherwise. For all other PCS
                                                         types, this bit always returns 0. */
	uint64_t reserved_4_11                : 8;
	uint64_t block_lock                   : 4;  /**< Block lock status for PCS lanes 3-0 */
#else
	uint64_t block_lock                   : 4;
	uint64_t reserved_4_11                : 8;
	uint64_t alignd                       : 1;
	uint64_t reserved_13_31               : 19;
	uint64_t marker_lock                  : 4;
	uint64_t reserved_36_63               : 28;
#endif
	} s;
	struct cvmx_bgxx_spux_br_algn_status_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_algn_status cvmx_bgxx_spux_br_algn_status_t;

/**
 * cvmx_bgx#_spu#_br_bip_err_cnt
 *
 * "40GBASE-R Bit Interleaved Parity error counters
 * This register implements the 802.3 BIP error counter registers for PCS
 * lanes 0-3 (3.200-3.203). The register is only valid when the logical PCS
 * type is 40GBASE-R (LMAC_TYPE = 40G_R in the associated BGX_CMR_CONFIG
 * register in the CMR sub-block), and always returns 0 for all other LPCS
 * types. The counters are indexed by the RX PCS lane number based on the
 * Alignment Marker detected on each lane and captured in the BR_LANE_MAP
 * register. Each counter counts the BIP errors for its PCS lane, and is
 * held at all ones in case of overflow. The counters are reset to all
 * zeros when this register is read by software. The reset operation takes
 * precedence over the increment operation; if the register is read on the
 * same clock cycle an increment operation, the counter will be reset to
 * all zeros and the increment operation will be lost.  The counters are
 * writable for test purposes, rather than read-only as specified in
 * 802.3."
 */
union cvmx_bgxx_spux_br_bip_err_cnt {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_bip_err_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t bip_err_cnt_ln3              : 16; /**< "BIP error counter for lane on which PCS lane 3 markers are
                                                         received." */
	uint64_t bip_err_cnt_ln2              : 16; /**< "BIP error counter for lane on which PCS lane 2 markers are
                                                         received." */
	uint64_t bip_err_cnt_ln1              : 16; /**< "BIP error counter for lane on which PCS lane 1 markers are
                                                         received." */
	uint64_t bip_err_cnt_ln0              : 16; /**< "BIP error counter for lane on which PCS lane 0 markers are
                                                         received." */
#else
	uint64_t bip_err_cnt_ln0              : 16;
	uint64_t bip_err_cnt_ln1              : 16;
	uint64_t bip_err_cnt_ln2              : 16;
	uint64_t bip_err_cnt_ln3              : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_br_bip_err_cnt_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_bip_err_cnt cvmx_bgxx_spux_br_bip_err_cnt_t;

/**
 * cvmx_bgx#_spu#_br_lane_map
 *
 * "40GBASE-R PCS lane mapping registers:
 * This register implements the 802.3 lane 0-3 mapping registers
 * (3.400-3.403).  The register is only valid when the logical PCS type is
 * 40GBASE-R (LMAC_TYPE = 40G_R in the associated BGX_CMR_CONFIG register
 * in the CMR sub-block), and always returns 0 for all other LPCS types.
 * The LNx_MAPPING field for each programmed PCS lane (called 'service
 * interface' in 802.3ba-2010) is valid when that lane has achieved
 * alignment marker lock on the receive side (i.e. the associated
 * MARKER_LOCK bit is set in BR_ALGN_STATUS), and is invalid otherwise.
 * When valid, it returns the actual detected receive PCS lane number based
 * on the received alignment marker contents received on that service
 * interface. The mapping is flexible because 802.3 allows multi-lane
 * BASE-R receive lanes to be re-ordered.
 * Note that for the transmit side, each PCS lane is mapped to a physical
 * serdes lane based on the programming of the LANE_TO_SDS field in
 * BGX_CMR_CONFIG.
 * For the receive side, LANE_TO_SDS specifies the service interface to
 * physical serdes lane mapping, and this register specifies the PCS lane
 * to service interface mapping."
 */
union cvmx_bgxx_spux_br_lane_map {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_lane_map_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_54_63               : 10;
	uint64_t ln3_mapping                  : 6;  /**< PCS lane number received on service interface 3 */
	uint64_t reserved_38_47               : 10;
	uint64_t ln2_mapping                  : 6;  /**< PCS lane number received on service interface 2 */
	uint64_t reserved_22_31               : 10;
	uint64_t ln1_mapping                  : 6;  /**< PCS lane number received on service interface 1 */
	uint64_t reserved_6_15                : 10;
	uint64_t ln0_mapping                  : 6;  /**< PCS lane number received on service interface 0 */
#else
	uint64_t ln0_mapping                  : 6;
	uint64_t reserved_6_15                : 10;
	uint64_t ln1_mapping                  : 6;
	uint64_t reserved_22_31               : 10;
	uint64_t ln2_mapping                  : 6;
	uint64_t reserved_38_47               : 10;
	uint64_t ln3_mapping                  : 6;
	uint64_t reserved_54_63               : 10;
#endif
	} s;
	struct cvmx_bgxx_spux_br_lane_map_s   cn78xx;
};
typedef union cvmx_bgxx_spux_br_lane_map cvmx_bgxx_spux_br_lane_map_t;

/**
 * cvmx_bgx#_spu#_br_pmd_control
 *
 * BASE-R PMD control
 *
 */
union cvmx_bgxx_spux_br_pmd_control {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_pmd_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t train_en                     : 1;  /**< BASE-R Training Enable */
	uint64_t train_restart                : 1;  /**< "BASE-R Training Restart:
                                                         Writing a 1 to this bit restarts the training process if the
                                                         TRAIN_EN bit in this register is also set. This is a self-clearing
                                                         bit." */
#else
	uint64_t train_restart                : 1;
	uint64_t train_en                     : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_bgxx_spux_br_pmd_control_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_pmd_control cvmx_bgxx_spux_br_pmd_control_t;

/**
 * cvmx_bgx#_spu#_br_pmd_ld_cup
 *
 * "BASE-R PMD local device coefficient update:
 * This register implements 802.3 MDIO register 1.153 for 10GBASE-R (when
 * LMAC_TYPE = 10G_R in the associated BGX_CMR_CONFIG register) and MDIO
 * registers 1.1300-1.1303 for 40GBASE-R (when LMAC_TYPE = 40G_R). It is
 * automatically cleared at the start of training. When link training is in
 * progress, each field reflects the contents of the coefficient update
 * field in the associated lane's outgoing training frame.
 * The fields in this register are read/write even though they are
 * specified as read-only in 802.3. If DBG_CONTROL[BR_PMD_TRAIN_SOFT_EN] is
 * set, then this register must be updated by software during link training
 * and hardware updates are disabled. If DBG_CONTROL[BR_PMD_TRAIN_SOFT_EN]
 * is clear, this register is automatically updated by hardware, and it
 * should not be written by software.
 * The lane fields in this register are indexed by logical PCS lane ID. The
 * lane 0 field (LN0_*) is valid for both 10GBASE-R and 40GBASE-R . The
 * remaining fields (LN1_*, LN2_*, LN3_*) are only valid for 40GBASE-R."
 */
union cvmx_bgxx_spux_br_pmd_ld_cup {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_pmd_ld_cup_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln3_cup                      : 16; /**< "PCS lane 3 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S. Not valid for 10GBASE-R" */
	uint64_t ln2_cup                      : 16; /**< "PCS lane 2 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S. Not valid for 10GBASE-R" */
	uint64_t ln1_cup                      : 16; /**< "PCS lane 1 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S. Not valid for 10GBASE-R" */
	uint64_t ln0_cup                      : 16; /**< "PCS lane 0 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S." */
#else
	uint64_t ln0_cup                      : 16;
	uint64_t ln1_cup                      : 16;
	uint64_t ln2_cup                      : 16;
	uint64_t ln3_cup                      : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_br_pmd_ld_cup_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_pmd_ld_cup cvmx_bgxx_spux_br_pmd_ld_cup_t;

/**
 * cvmx_bgx#_spu#_br_pmd_ld_rep
 *
 * "BASE-R PMD local device status report:
 * This register implements 802.3 MDIO register 1.154 for 10GBASE-R (when
 * LMAC_TYPE = 10G_R in the associated BGX_CMR_CONFIG register) and MDIO
 * registers 1.1400-1.1403 for 40GBASE-R (when LMAC_TYPE = 40G_R). It is
 * automatically cleared at the start of training. Each field reflects the
 * contents of the status report field in the associated lane's outgoing
 * training frame.
 * The fields in this register are read/write even though they are
 * specified as read-only in 802.3. If DBG_CONTROL[BR_PMD_TRAIN_SOFT_EN] is
 * set, then this register must be updated by software during link training
 * and hardware updates are disabled. If DBG_CONTROL[BR_PMD_TRAIN_SOFT_EN]
 * is clear, this register is automatically updated by hardware, and it
 * should not be written by software.
 * The lane fields in this register are indexed by logical PCS lane ID. The
 * lane 0 field (LN0_*) is valid for both 10GBASE-R and 40GBASE-R . The
 * remaining fields (LN1_*, LN2_*, LN3_*) are only valid for 40GBASE-R."
 */
union cvmx_bgxx_spux_br_pmd_ld_rep {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_pmd_ld_rep_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln3_rep                      : 16; /**< "PCS lane 3 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S. Not
                                                         valid for 10GBASE-R" */
	uint64_t ln2_rep                      : 16; /**< "PCS lane 2 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S. Not
                                                         valid for 10GBASE-R" */
	uint64_t ln1_rep                      : 16; /**< "PCS lane 1 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S. Not
                                                         valid for 10GBASE-R" */
	uint64_t ln0_rep                      : 16; /**< "PCS lane 0 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S." */
#else
	uint64_t ln0_rep                      : 16;
	uint64_t ln1_rep                      : 16;
	uint64_t ln2_rep                      : 16;
	uint64_t ln3_rep                      : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_br_pmd_ld_rep_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_pmd_ld_rep cvmx_bgxx_spux_br_pmd_ld_rep_t;

/**
 * cvmx_bgx#_spu#_br_pmd_lp_cup
 *
 * "BASE-R PMD link partner coefficient update:
 * This register implements 802.3 MDIO register 1.152 for 10GBASE-R (when
 * LMAC_TYPE = 10G_R in the associated BGX_CMR_CONFIG register) and MDIO
 * registers 1.1100-1.1103 for 40GBASE-R (when LMAC_TYPE = 40G_R). It is
 * automatically cleared at the start of training. Each field reflects the
 * contents of the coefficient update field in the lane's most recently
 * received training frame. This register should not be written when link
 * training is enabled, i.e. when TRAIN_EN is set BR_PMD_CONTROL.
 * The lane fields in this register are indexed by logical PCS lane ID. The
 * lane 0 field (LN0_*) is valid for both 10GBASE-R and 40GBASE-R . The
 * remaining fields (LN1_*, LN2_*, LN3_*) are only valid for 40GBASE-R."
 */
union cvmx_bgxx_spux_br_pmd_lp_cup {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_pmd_lp_cup_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln3_cup                      : 16; /**< "PCS lane 3 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S. Not valid for 10GBASE-R" */
	uint64_t ln2_cup                      : 16; /**< "PCS lane 2 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S. Not valid for 10GBASE-R" */
	uint64_t ln1_cup                      : 16; /**< "PCS lane 1 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S. Not valid for 10GBASE-R" */
	uint64_t ln0_cup                      : 16; /**< "PCS lane 0 Coefficient Update: Format defined by
                                                         BGX_SPU_BR_TRAIN_CUP_S." */
#else
	uint64_t ln0_cup                      : 16;
	uint64_t ln1_cup                      : 16;
	uint64_t ln2_cup                      : 16;
	uint64_t ln3_cup                      : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_br_pmd_lp_cup_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_pmd_lp_cup cvmx_bgxx_spux_br_pmd_lp_cup_t;

/**
 * cvmx_bgx#_spu#_br_pmd_lp_rep
 *
 * "BASE-R PMD link partner status report:
 * This register implements 802.3 MDIO register 1.153 for 10GBASE-R (when
 * LMAC_TYPE = 10G_R in the associated BGX_CMR_CONFIG register) and MDIO
 * registers 1.1200-1.1203 for 40GBASE-R (when LMAC_TYPE = 40G_R). It is
 * automatically cleared at the start of training. Each field reflects the
 * contents of the status report field in the associated lane's most
 * recently received training frame.
 * The lane fields in this register are indexed by logical PCS lane ID. The
 * lane 0 field (LN0_*) is valid for both 10GBASE-R and 40GBASE-R . The
 * remaining fields (LN1_*, LN2_*, LN3_*) are only valid for 40GBASE-R."
 */
union cvmx_bgxx_spux_br_pmd_lp_rep {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_pmd_lp_rep_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln3_rep                      : 16; /**< "PCS lane 3 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S. Not
                                                         valid for 10GBASE-R" */
	uint64_t ln2_rep                      : 16; /**< "PCS lane 2 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S. Not
                                                         valid for 10GBASE-R" */
	uint64_t ln1_rep                      : 16; /**< "PCS lane 1 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S. Not
                                                         valid for 10GBASE-R" */
	uint64_t ln0_rep                      : 16; /**< "PCS lane 0 Status Report: Format defined by BGX_SPU_BR_TRAIN_REP_S." */
#else
	uint64_t ln0_rep                      : 16;
	uint64_t ln1_rep                      : 16;
	uint64_t ln2_rep                      : 16;
	uint64_t ln3_rep                      : 16;
#endif
	} s;
	struct cvmx_bgxx_spux_br_pmd_lp_rep_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_pmd_lp_rep cvmx_bgxx_spux_br_pmd_lp_rep_t;

/**
 * cvmx_bgx#_spu#_br_pmd_status
 *
 * "BASE-R PMD status:
 * The lane fields in this register are indexed by logical PCS lane ID. The
 * lane 0 field (LN0_*) is valid for both 10GBASE-R and 40GBASE-R . The
 * remaining fields (LN1_*, LN2_*, LN3_*) are only valid for 40GBASE-R."
 */
union cvmx_bgxx_spux_br_pmd_status {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_pmd_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t ln3_train_status             : 4;  /**< "PCS lane 3 link training status. Format defined by
                                                         BGX_SPU_BR_LANE_TRAIN_STATUS_S. Not valid for 10GBASE-R" */
	uint64_t ln2_train_status             : 4;  /**< "PCS lane 2 link training status. Format defined by
                                                         BGX_SPU_BR_LANE_TRAIN_STATUS_S. Not valid for 10GBASE-R" */
	uint64_t ln1_train_status             : 4;  /**< "PCS lane 1 link training status. Format defined by
                                                         BGX_SPU_BR_LANE_TRAIN_STATUS_S. Not valid for 10GBASE-R" */
	uint64_t ln0_train_status             : 4;  /**< "PCS lane 0 link training status. Format defined by
                                                         BGX_SPU_BR_LANE_TRAIN_STATUS_S." */
#else
	uint64_t ln0_train_status             : 4;
	uint64_t ln1_train_status             : 4;
	uint64_t ln2_train_status             : 4;
	uint64_t ln3_train_status             : 4;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_spux_br_pmd_status_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_pmd_status cvmx_bgxx_spux_br_pmd_status_t;

/**
 * cvmx_bgx#_spu#_br_status1
 *
 * BASE-R PCS status 1
 *
 */
union cvmx_bgxx_spux_br_status1 {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_status1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t rcv_lnk                      : 1;  /**< BASE-R receive link status
                                                         1 = BASE-R PCS receive link up 0 = BASE-R PCS receive link down.
                                                         This bit is a reflection of the PCS_status variable defined in 802.3
                                                         sections 49.2.14.1 and 82.3.1. */
	uint64_t reserved_4_11                : 8;
	uint64_t prbs9                        : 1;  /**< 10GBASE-R PRBS9 pattern testing ability. Always 0; PRBS9 pattern
                                                         testing not supported. */
	uint64_t prbs31                       : 1;  /**< 10GBASE-R PRBS31 pattern testing ability. Always 0; PRBS31 pattern
                                                         testing not supported. */
	uint64_t hi_ber                       : 1;  /**< BASE-R PCS high Bit Error Rate
                                                         Returns 1 to indicate that the 64B/66B receiver is detecting a BER of
                                                         >= 10.4, and returns 0 otherwise. This bit is a direct reflection of
                                                         the state of the hi_ber variable in the 64B/66B state diagram and is
                                                         defined in 802.3 sections 49.2.13.2.2 and 82.2.18.2.2. */
	uint64_t blk_lock                     : 1;  /**< "BASE-R PCS block lock
                                                         Returns 1 to indicate that the 64B/66B receiver for BASE-R has
                                                         achieved block lock, and returns 0 otherwise. This bit is a direct
                                                         reflection of the state of the block_lock variable in the 64B/66B
                                                         state diagram and is defined in 802.3 sections 49.2.13.2.2 and
                                                         82.2.18.2.2.  For a multi-lane logical PCS (i.e. 40GBASE-R), this bit
                                                         indicates that the receiver has both block lock and alignment for all
                                                         lanes and is identical to the ALIGND bit in BR_ALGN_STATUS." */
#else
	uint64_t blk_lock                     : 1;
	uint64_t hi_ber                       : 1;
	uint64_t prbs31                       : 1;
	uint64_t prbs9                        : 1;
	uint64_t reserved_4_11                : 8;
	uint64_t rcv_lnk                      : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_spux_br_status1_s    cn78xx;
};
typedef union cvmx_bgxx_spux_br_status1 cvmx_bgxx_spux_br_status1_t;

/**
 * cvmx_bgx#_spu#_br_status2
 *
 * "BASE-R PCS status 2
 * This register implements a combination of the following 802.3 registers: BASE-R PCS
 * status 2 (MDIO address 3.33), BASE-R BER high order counter (MDIO address 3.44),
 * and Errored blocks high order counter (MDIO address 3.45). The relative locations
 * of some fields have been moved from 802.3 in order to make the register layout more
 * software friendly: the BER counter high order and low order bits from 3.44 and
 * 3.33 have been combined into the contiguous 22-bit BER_CNT field; likewise, the
 * errored blocks counter high order and low order bits from 3.45 have been combined
 * into the contiguous 22-bit ERR_BLKS field."
 */
union cvmx_bgxx_spux_br_status2 {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_status2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_62_63               : 2;
	uint64_t err_blks                     : 22; /**< Errored blocks counter
                                                         This is the BASE-R errored blocks counter as defined by the
                                                         errored_block_count variable specified in 802.3 sections 49.2.14.2
                                                         and 82.2.18.2.4. It increments by 1 on each block for which the
                                                         BASE-R receive state machine, specified in 802.3 diagrams 49-15 and
                                                         82-15, enters the RX_E state. Back-to-back blocks in the RX_E state
                                                         are counted as transitions from RX_E to RX_E and keep incrementing
                                                         the counter. The counter is reset to all zeros after this register
                                                         is read by software, and is held at all ones in case of overflow.
                                                         The reset operation takes precedence over the increment operation;
                                                         if the register is read on the same clock cycle an increment
                                                         operation, the counter will be reset to all zeros and the increment
                                                         operation will be lost.  This field is writable for test purposes,
                                                         rather than read-only as specified in 802.3. */
	uint64_t reserved_38_39               : 2;
	uint64_t ber_cnt                      : 22; /**< Bit Error Rate counter
                                                         This is the BASE-R BER counter as defined by the ber_count variable
                                                         in 802.3 sections 49.2.14.2 and 82.2.18.2.4. The counter is reset to
                                                         all zeros after this register is read by software, and is held at
                                                         all ones in case of overflow. The reset operation takes precedence
                                                         over the increment operation; if the register is read on the same
                                                         clock cycle an increment operation, the counter will be reset to all
                                                         zeros and the increment operation will be lost.
                                                         This field is writable for test purposes, rather than read-only as
                                                         specified in 802.3. */
	uint64_t latched_lock                 : 1;  /**< "Latched block lock:
                                                         Returns 1 to indicate that the 64B/66B receiver for BASE-R has
                                                         achieved block lock, and returns 0 otherwise. This is a Latching Low
                                                         version of the BLK_LOCK bit in BR_STATUS1; stays clear until a 1 is
                                                         written by software.
                                                         Note that in order to avoid read side effects, this is implemented as
                                                         a write-1-to-set bit, rather than latching low read-only as specified
                                                         in 802.3." */
	uint64_t latched_ber                  : 1;  /**< "Latched high Bit Error Rate:
                                                         Returns 1 to indicate that the 64B/66B receiver is detecting a high
                                                         BER and returns 0 otherwise. This is a Latching High version of the
                                                         HI_BER bit in BR_STATUS1; stays set until a 1 is written by software.
                                                         Note that in order to avoid read side effects, this is implemented as
                                                         a write-1-to-clear bit, rather than latching high read-only as
                                                         specified in 802.3." */
	uint64_t reserved_0_13                : 14;
#else
	uint64_t reserved_0_13                : 14;
	uint64_t latched_ber                  : 1;
	uint64_t latched_lock                 : 1;
	uint64_t ber_cnt                      : 22;
	uint64_t reserved_38_39               : 2;
	uint64_t err_blks                     : 22;
	uint64_t reserved_62_63               : 2;
#endif
	} s;
	struct cvmx_bgxx_spux_br_status2_s    cn78xx;
};
typedef union cvmx_bgxx_spux_br_status2 cvmx_bgxx_spux_br_status2_t;

/**
 * cvmx_bgx#_spu#_br_tp_control
 *
 * "BASE-R PCS test pattern control:
 * Refer to the test pattern methodology described in 802.3 sections 49.2.8 and 82.2.10."
 */
union cvmx_bgxx_spux_br_tp_control {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_tp_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t scramble_tp                  : 1;  /**< Select scrambled idle test pattern
                                                          This bit selects the transmit test pattern used when TX_TP_EN is set
                                                          in this register:
                                                         - 1: Scrambled idle test pattern, 0: Square wave test pattern. */
	uint64_t prbs9_tx                     : 1;  /**< 10GBASE-R PRBS9 TP transmit enable. Always 0; PRBS9 pattern testing
                                                         not supported. */
	uint64_t prbs31_rx                    : 1;  /**< 10GBASE-R PRBS31 TP receive enable. Always 0; PRBS31 pattern testing
                                                         not supported. */
	uint64_t prbs31_tx                    : 1;  /**< 10GBASE-R PRBS31 TP transmit enable. Always 0; PRBS31 pattern
                                                         testing not supported. */
	uint64_t tx_tp_en                     : 1;  /**< Transmit test pattern enable */
	uint64_t rx_tp_en                     : 1;  /**< Receive test pattern enable
                                                         The only supported receive test pattern is the scrambled idle test
                                                         pattern. Setting this bit enables checking of that receive pattern. */
	uint64_t tp_sel                       : 1;  /**< Square v/s PRBS test pattern select
                                                         Always 1 to select square wave test pattern; PRBS test patterns are
                                                         not supported. */
	uint64_t dp_sel                       : 1;  /**< Data pattern select
                                                         Always 0; PRBS test patterns are not supported. */
#else
	uint64_t dp_sel                       : 1;
	uint64_t tp_sel                       : 1;
	uint64_t rx_tp_en                     : 1;
	uint64_t tx_tp_en                     : 1;
	uint64_t prbs31_tx                    : 1;
	uint64_t prbs31_rx                    : 1;
	uint64_t prbs9_tx                     : 1;
	uint64_t scramble_tp                  : 1;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_spux_br_tp_control_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_tp_control cvmx_bgxx_spux_br_tp_control_t;

/**
 * cvmx_bgx#_spu#_br_tp_err_cnt
 *
 * BASE-R PCS test pattern error counter
 *
 */
union cvmx_bgxx_spux_br_tp_err_cnt {
	uint64_t u64;
	struct cvmx_bgxx_spux_br_tp_err_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t err_cnt                      : 16; /**< Error Counter
                                                         The test pattern error counter is a sixteen bit counter that contains
                                                         the number of errors received during a pattern test. These bits are
                                                         reset to all zeros when this register is read by software, and they
                                                         are  held at all ones in the case of overflow. The test pattern
                                                         methodology is described in 802.3 sections 49.2.12 and 82.2.10. This
                                                         counter will count either block errors or bit errors dependent on
                                                         the test mode (see 49.2.12). The reset operation takes precedence
                                                         over the increment operation; if the register is read on the same
                                                         clock cycle an increment operation, the counter will be reset to all
                                                         zeros and the increment operation will be lost.
                                                         This field is writable for test purposes, rather than read-only as
                                                         specified in 802.3. */
#else
	uint64_t err_cnt                      : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_spux_br_tp_err_cnt_s cn78xx;
};
typedef union cvmx_bgxx_spux_br_tp_err_cnt cvmx_bgxx_spux_br_tp_err_cnt_t;

/**
 * cvmx_bgx#_spu#_bx_status
 *
 * 10GBASE-X PCS status
 *
 */
union cvmx_bgxx_spux_bx_status {
	uint64_t u64;
	struct cvmx_bgxx_spux_bx_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t alignd                       : 1;  /**< 10GBASE-X lane alignment status:
                                                         1=Receive lanes aligned, 0=Receive lanes not aligned. */
	uint64_t pattst                       : 1;  /**< Pattern testing ability:
                                                         Always 0; 10GBASE-X pattern testing not supported. */
	uint64_t reserved_4_10                : 7;
	uint64_t lsync                        : 4;  /**< Lane sync:
                                                         BASE-X lane synchronization status for PCS lanes 3-0. Each bit is
                                                         set when the associated lane is code-group synchonized, and clear
                                                         otherwise. If the PCS type is RXAUI (LMAC_TYPE = RXAUI in the
                                                         associated BGX_CMR_CONFIG register in the CMR sub-block), then
                                                         only lanes 1-0 are valid. */
#else
	uint64_t lsync                        : 4;
	uint64_t reserved_4_10                : 7;
	uint64_t pattst                       : 1;
	uint64_t alignd                       : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_spux_bx_status_s     cn78xx;
};
typedef union cvmx_bgxx_spux_bx_status cvmx_bgxx_spux_bx_status_t;

/**
 * cvmx_bgx#_spu#_control1
 *
 * PCS control 1
 *
 */
union cvmx_bgxx_spux_control1 {
	uint64_t u64;
	struct cvmx_bgxx_spux_control1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t reset                        : 1;  /**< "Reset:
                                                         Writing a 1 to this bit or to the AN_RESET bit in register
                                                         AN_CONTROL resets the logical PCS (LPCS), sets the 802.3 PCS, FEC
                                                         and AN registers for the LPCS to their default states, and resets
                                                         the associated serdes lanes. It takes up to 32 sclk cycles to reset
                                                         the LPCS, after which this bit is automatically cleared." */
	uint64_t loopbck                      : 1;  /**< Loopback:
                                                         TX to RX Loopback Enable: When set, transmit data for each serdes
                                                         lane is looped back as receive data. */
	uint64_t spdsel1                      : 1;  /**< Speed Select 1: Always 1. */
	uint64_t reserved_12_12               : 1;
	uint64_t lo_pwr                       : 1;  /**< "Low Power:
                                                         When set, the Logical PCS is disabled (overriding the ENABLE bit in
                                                         the associated BGX_CMR_CONFIG register in the CMR sub-block), and
                                                         the serdes lanes associated with the LPCS are reset." */
	uint64_t reserved_7_10                : 4;
	uint64_t spdsel0                      : 1;  /**< Speed Select 0: Always 1. */
	uint64_t spd                          : 4;  /**< "Speed selection:
                                                         Note that this is a read-only field rather than read/write as
                                                         specified in 802.3. The Logical PCS speed is actually configured by
                                                         the LMAC_TYPE field in the associated BGX_CMR_CONFIG register in
                                                         the CMR sub-block. The Read values returned by this field are as
                                                         follows:
                                                         ----------+---------------------------------------------------
                                                         LMAC_TYPE |   Speed       SPD Read Value      Comment
                                                         ----------+---------------------------------------------------
                                                         XAUI      |   10G/20G     0x0                 20G if DXAUI
                                                         RXAUI     |   10G         0x0
                                                         10G_R     |   10G         0x0
                                                         40G_R     |   40G         0x3
                                                         Other     |   -           X
                                                         ----------+---------------------------------------------------" */
	uint64_t reserved_0_1                 : 2;
#else
	uint64_t reserved_0_1                 : 2;
	uint64_t spd                          : 4;
	uint64_t spdsel0                      : 1;
	uint64_t reserved_7_10                : 4;
	uint64_t lo_pwr                       : 1;
	uint64_t reserved_12_12               : 1;
	uint64_t spdsel1                      : 1;
	uint64_t loopbck                      : 1;
	uint64_t reset                        : 1;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_spux_control1_s      cn78xx;
};
typedef union cvmx_bgxx_spux_control1 cvmx_bgxx_spux_control1_t;

/**
 * cvmx_bgx#_spu#_control2
 *
 * PCS control 2
 *
 */
union cvmx_bgxx_spux_control2 {
	uint64_t u64;
	struct cvmx_bgxx_spux_control2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_3_63                : 61;
	uint64_t pcs_type                     : 3;  /**< "PCS type selection:
                                                         Note that this is a read-only field rather than read/write as
                                                         specified in 802.3. The Logical PCS speed is actually configured by
                                                         the LMAC_TYPE field in the associated BGX_CMR_CONFIG register in
                                                         the CMR sub-block. The Read values returned by this field are as
                                                         follows:
                                                         ----------+------------------------------------------
                                                         LMAC_TYPE |   PCS_TYPE          Comment
                                                         |   Read Value
                                                         ----------+------------------------------------------
                                                         XAUI      |   0x1               10GBASE-X PCS type
                                                         RXAUI     |   0x1               10GBASE-X PCS type
                                                         10G_R     |   0x0               10GBASE-R PCS type
                                                         40G_R     |   0x4               40GBASE-R PCS type
                                                         Other     |   Undefined         Reserved
                                                         ----------+------------------------------------------" */
#else
	uint64_t pcs_type                     : 3;
	uint64_t reserved_3_63                : 61;
#endif
	} s;
	struct cvmx_bgxx_spux_control2_s      cn78xx;
};
typedef union cvmx_bgxx_spux_control2 cvmx_bgxx_spux_control2_t;

/**
 * cvmx_bgx#_spu#_fec_abil
 *
 * BASE-R FEC ability
 *
 */
union cvmx_bgxx_spux_fec_abil {
	uint64_t u64;
	struct cvmx_bgxx_spux_fec_abil_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t err_abil                     : 1;  /**< "BASE-R FEC error indication ability:
                                                         Always 1 when the logical PCS type is BASE-R, i.e. LMAC_TYPE = 40G_R
                                                         or 10G_R in the associated BGX_CMR_CONFIG register in the CMR
                                                         sub-block. Always 0 otherwise." */
	uint64_t fec_abil                     : 1;  /**< "BASE-R FEC ability:
                                                         Always 1 when the logical PCS type is BASE-R, i.e. LMAC_TYPE = 40G_R
                                                         or 10G_R in the associated BGX_CMR_CONFIG register in the CMR
                                                         sub-block. Always 0 otherwise." */
#else
	uint64_t fec_abil                     : 1;
	uint64_t err_abil                     : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_bgxx_spux_fec_abil_s      cn78xx;
};
typedef union cvmx_bgxx_spux_fec_abil cvmx_bgxx_spux_fec_abil_t;

/**
 * cvmx_bgx#_spu#_fec_control
 *
 * BASE-R FEC control
 *
 */
union cvmx_bgxx_spux_fec_control {
	uint64_t u64;
	struct cvmx_bgxx_spux_fec_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_2_63                : 62;
	uint64_t err_en                       : 1;  /**< "BASE-R FEC error indication enable:
                                                         This bit corresponds to FEC_Enable_Error_to_PCS variable for BASE-R
                                                         as defined in 802.3 Clause 74. When FEC is enabled (per FEC_EN bit
                                                         in this register) and this bit is set to 1, the FEC decoder on the
                                                         receive side will signal an uncorrectable FEC error to the BASE-R
                                                         decoder by driving a value of 2'b11 on the sync bits for some of the
                                                         32 64B/66B blocks belonging to the uncorrectable FEC block. See
                                                         802.3-2008/802.3ba-2010 section 74.7.4.5.1 for more details." */
	uint64_t fec_en                       : 1;  /**< "BASE-R FEC enable:
                                                         When this bit is set and the logical PCS type is BASE-R (LMAC_TYPE =
                                                         40G_R or 10G_R in the associated BGX_CMR_CONFIG register in the
                                                         CMR sub-block), Forward Error Correction is enabled. FEC is disabled
                                                         otherwise. Forward Error Correction is defined in IEEE Std
                                                         802.3-2008/802.3ba-2010 Clause 74." */
#else
	uint64_t fec_en                       : 1;
	uint64_t err_en                       : 1;
	uint64_t reserved_2_63                : 62;
#endif
	} s;
	struct cvmx_bgxx_spux_fec_control_s   cn78xx;
};
typedef union cvmx_bgxx_spux_fec_control cvmx_bgxx_spux_fec_control_t;

/**
 * cvmx_bgx#_spu#_fec_corr_blks01
 *
 * "BASE-R FEC corrected blocks counters, lanes 0-1:
 * This register is only valid when the logical PCS type is BASE-R, i.e. LMAC_TYPE =
 * 40G_R or 10G_R in the associated BGX_CMR_CONFIG register in the CMR sub-block.
 * The FEC corrected block counters are defined in 802.3 section 74.8.4.1.
 * For 10GBASE-R, LN0_CORR_BLKS corresponds to the 802.3 FEC_corrected_blocks_counter
 * variable (registers 1.172-1.173), and LN1_CORR_BLKS is reserved. For 40GBASE-R,
 * LN0_CORR_BLKS and LN1_CORR_BLKS correspond to the 802.3
 * FEC_corrected_blocks_counter_0 variable (registers 1.300-1.301) and
 * FEC_corrected_blocks_counter_1 variable (registers 1.302-1.303), respectively.
 * Each corrected blocks counter increments by 1 for a corrected FEC block, i.e. an
 * FEC block that has been received with invalid parity on the associated PCS lane,
 * and has been corrected by the FEC decoder.  The counter is reset to all
 * zeros when the register is read, and held at all ones in case of
 * overflow. The reset operation takes precedence over the increment
 * operation; if the register is read on the same clock cycle an increment
 * operation, the counter will be reset to all zeros and the increment
 * operation will be lost.
 * The counters are writable for test purposes, rather than read-only as
 * specified in 802.3.
 * "
 */
union cvmx_bgxx_spux_fec_corr_blks01 {
	uint64_t u64;
	struct cvmx_bgxx_spux_fec_corr_blks01_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln1_corr_blks                : 32; /**< PCS Lane 1 FEC corrected blocks */
	uint64_t ln0_corr_blks                : 32; /**< PCS Lane 0 FEC corrected blocks */
#else
	uint64_t ln0_corr_blks                : 32;
	uint64_t ln1_corr_blks                : 32;
#endif
	} s;
	struct cvmx_bgxx_spux_fec_corr_blks01_s cn78xx;
};
typedef union cvmx_bgxx_spux_fec_corr_blks01 cvmx_bgxx_spux_fec_corr_blks01_t;

/**
 * cvmx_bgx#_spu#_fec_corr_blks23
 *
 * "BASE-R FEC corrected blocks counters, lanes 2-3:
 * This register is only valid when the logical PCS type is 40GBASE-R, i.e. LMAC_TYPE
 * = 40G_R in the associated BGX_CMR_CONFIG register in the CMR sub-block. The FEC
 * corrected block counters are defined in 802.3 section 74.8.4.1.
 * LN2_CORR_BLKS and LN3_CORR_BLKS correspond to the 802.3
 * FEC_corrected_blocks_counter_2 variable (registers 1.304-1.305) and
 * FEC_corrected_blocks_counter_3 variable (registers 1.306-1.307), respectively.
 * Each corrected blocks counter increments by 1 for a corrected FEC block, i.e. an
 * FEC block that has been received with invalid parity on the associated PCS lane,
 * and has been corrected by the FEC decoder.  The counter is reset to all
 * zeros when the register is read, and held at all ones in case of
 * overflow. The reset operation takes precedence over the increment
 * operation; if the register is read on the same clock cycle an increment
 * operation, the counter will be reset to all zeros and the increment
 * operation will be lost.
 * The counters are writable for test purposes, rather than read-only as
 * specified in 802.3.
 * "
 */
union cvmx_bgxx_spux_fec_corr_blks23 {
	uint64_t u64;
	struct cvmx_bgxx_spux_fec_corr_blks23_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln3_corr_blks                : 32; /**< PCS Lane 3 FEC corrected blocks */
	uint64_t ln2_corr_blks                : 32; /**< PCS Lane 2 FEC corrected blocks */
#else
	uint64_t ln2_corr_blks                : 32;
	uint64_t ln3_corr_blks                : 32;
#endif
	} s;
	struct cvmx_bgxx_spux_fec_corr_blks23_s cn78xx;
};
typedef union cvmx_bgxx_spux_fec_corr_blks23 cvmx_bgxx_spux_fec_corr_blks23_t;

/**
 * cvmx_bgx#_spu#_fec_uncorr_blks01
 *
 * "BASE-R FEC uncorrected blocks counters, lanes 0-1:
 * This register is only valid when the logical PCS type is BASE-R, i.e. LMAC_TYPE =
 * 40G_R or 10G_R in the associated BGX_CMR_CONFIG register in the CMR sub-block.
 * The FEC uncorrected block counters are defined in 802.3 section 74.8.4.2.
 * For 10GBASE-R, LN0_UNCORR_BLKS corresponds to the 802.3 FEC_uncorrected_blocks_counter
 * variable (registers 1.174-1.175), and LN1_UNCORR_BLKS is reserved. For 40GBASE-R,
 * LN0_UNCORR_BLKS and LN1_UNCORR_BLKS correspond to the 802.3
 * FEC_uncorrected_blocks_counter_0 variable (registers 1.700-1.701) and
 * FEC_uncorrected_blocks_counter_1 variable (registers 1.702-1.703), respectively.
 * Each uncorrected blocks counter increments by 1 for an uncorrected FEC block, i.e.
 * an FEC block that has been received with invalid parity on the associated PCS lane,
 * and has not been corrected by the FEC decoder.  The counter is reset to
 * all zeros when the register is read, and held at all ones in case of
 * overflow. The reset operation takes precedence over the increment
 * operation; if the register is read on the same clock cycle an increment
 * operation, the counter will be reset to all zeros and the increment
 * operation will be lost.
 * The counters are writable for test purposes, rather than read-only as
 * specified in 802.3.
 * "
 */
union cvmx_bgxx_spux_fec_uncorr_blks01 {
	uint64_t u64;
	struct cvmx_bgxx_spux_fec_uncorr_blks01_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln1_uncorr_blks              : 32; /**< PCS Lane 1 FEC uncorrected blocks */
	uint64_t ln0_uncorr_blks              : 32; /**< PCS Lane 0 FEC uncorrected blocks */
#else
	uint64_t ln0_uncorr_blks              : 32;
	uint64_t ln1_uncorr_blks              : 32;
#endif
	} s;
	struct cvmx_bgxx_spux_fec_uncorr_blks01_s cn78xx;
};
typedef union cvmx_bgxx_spux_fec_uncorr_blks01 cvmx_bgxx_spux_fec_uncorr_blks01_t;

/**
 * cvmx_bgx#_spu#_fec_uncorr_blks23
 *
 * "BASE-R FEC uncorrected blocks counters, lanes 2-3:
 * This register is only valid when the logical PCS type is 40GBASE-R, i.e. LMAC_TYPE
 * = 40G_R in the associated BGX_CMR_CONFIG register in the CMR sub-block. The FEC
 * uncorrected block counters are defined in 802.3 section 74.8.4.2.
 * LN2_UNCORR_BLKS and LN3_UNCORR_BLKS correspond to the 802.3
 * FEC_uncorrected_blocks_counter_2 variable (registers 1.704-1.705) and
 * FEC_uncorrected_blocks_counter_3 variable (registers 1.706-1.707), respectively.
 * Each uncorrected blocks counter increments by 1 for an uncorrected FEC block, i.e.
 * an FEC block that has been received with invalid parity on the associated PCS lane,
 * and has not been corrected by the FEC decoder.  The counter is reset to
 * all zeros when the register is read, and held at all ones in case of
 * overflow. The reset operation takes precedence over the increment
 * operation; if the register is read on the same clock cycle an increment
 * operation, the counter will be reset to all zeros and the increment
 * operation will be lost.
 * The counters are writable for test purposes, rather than read-only as
 * specified in 802.3.
 * "
 */
union cvmx_bgxx_spux_fec_uncorr_blks23 {
	uint64_t u64;
	struct cvmx_bgxx_spux_fec_uncorr_blks23_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t ln3_uncorr_blks              : 32; /**< PCS Lane 3 FEC uncorrected blocks */
	uint64_t ln2_uncorr_blks              : 32; /**< PCS Lane 2 FEC uncorrected blocks */
#else
	uint64_t ln2_uncorr_blks              : 32;
	uint64_t ln3_uncorr_blks              : 32;
#endif
	} s;
	struct cvmx_bgxx_spux_fec_uncorr_blks23_s cn78xx;
};
typedef union cvmx_bgxx_spux_fec_uncorr_blks23 cvmx_bgxx_spux_fec_uncorr_blks23_t;

/**
 * cvmx_bgx#_spu#_int
 *
 * SPU interrupt
 *
 */
union cvmx_bgxx_spux_int {
	uint64_t u64;
	struct cvmx_bgxx_spux_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t training_failure             : 1;  /**< "BASE-R PMD training failure:
                                                         Set when BASE-R PMD link training has failed on the 10GBASE-R lane
                                                         or any 40GBASE-R lane. Valid if the LPCS type selected by
                                                         BGX_CMR_CONFIG[LMAC_TYPE] is 10GBASE-R or 40GBASE-R and
                                                         BGX_SPU_BR_PMD_CONTROL[TRAIN_EN] is 1, and never set otherwise." */
	uint64_t training_done                : 1;  /**< "BASE-R PMD training done:
                                                         Set when the 10GBASE-R lane or all 40GBASE-R lanes have
                                                         successfully completed BASE-R PMD link training. Valid if the LPCS
                                                         type selected by BGX_CMR_CONFIG[LMAC_TYPE] is 10GBASE-R or 40GBASE-R
                                                         and BGX_SPU_BR_PMD_CONTROL[TRAIN_EN] is 1, and never set otherwise." */
	uint64_t an_complete                  : 1;  /**< "Auto-Negotiation Link Good:
                                                         Set when BGX_SPU_AN_STATUS[AN_COMPLETE] is set, indicating that the
                                                         Auto-Negotiation process has been completed and the link is up and
                                                         running using the negotiated Highest Common Denominator (HCD)
                                                         technology." */
	uint64_t an_link_good                 : 1;  /**< "Auto-Negotiation Link Good:
                                                         Set when the an_link_good variable is set as defined in 802.3-2008
                                                         Figure 73-11, indicating that Auto-Negotiation has completed." */
	uint64_t an_page_rx                   : 1;  /**< "Auto-Negotiation Page Received:
                                                         This bit is set along with the PAGE_RX bit in AN_STATUS when a New
                                                         Page has been received and stored in the AN_LP_BASE or AN_LP_XNP
                                                         register." */
	uint64_t fec_uncorr                   : 1;  /**< "Uncorrectable FEC error:
                                                         Set when an FEC block with an uncorrectable error is received on the
                                                         10GBASE-R lane or any 40GBASE-R lane.  Valid if the LPCS type
                                                         selected by BGX_CMR_CONFIG[LMAC_TYPE] is 10GBASE-R or 40GBASE-R, and
                                                         never set otherwise." */
	uint64_t fec_corr                     : 1;  /**< "Correctable FEC error:
                                                         Set when an FEC block with a correctable error is received on the
                                                         10GBASE-R lane or any 40GBASE-R lane.  Valid if the LPCS type
                                                         selected by BGX_CMR_CONFIG[LMAC_TYPE] is 10GBASE-R or 40GBASE-R, and
                                                         never set otherwise." */
	uint64_t bip_err                      : 1;  /**< "40GBASE-R Bit Interleaved Parity Error: Set when a BIP error is
                                                         detected on any lane.  Valid if the LPCS type selected by
                                                         BGX_CMR_CONFIG[LMAC_TYPE] is 40GBASE-R, and never set otherwise." */
	uint64_t dbg_sync                     : 1;  /**< "Sync failure debug:
                                                         This interrupt is provided for link problem debugging help. It is
                                                         set as follows based on the LPCS type selected by
                                                         BGX_CMR_CONFIG[LMAC_TYPE], and whether FEC is enabled or disabled by
                                                         BGX_SPU_FEC_CONTROL[FEC_EN]:
                                                         * XAUI or RXAUI: Set when any lane's PCS synchronization state
                                                           transitions from SYNC_ACQUIRED_1 to SYNC_ACQUIRED_2 (see
                                                           802.3-2008 Figure 48-7).
                                                         * 10GBASE-R or 40GBASE-R with FEC disabled: Set when sh_invalid_cnt
                                                           increments to 1 while block_lock is 1 (see 802.3-2008 Figure 49-12
                                                           and 802.3ba-2010 Figure 82-20).
                                                         * 10GBASE-R or 40GBASE-R with FEC enabled: Set when
                                                           parity_invalid_cnt increments to 1 while fec_block_lock is 1 (see
                                                           802.3-2008 Figure 74-8)." */
	uint64_t algnlos                      : 1;  /**< "Loss of lane alignment:
                                                         Set when lane-to-lane alignment is lost. This is only valid if the
                                                         logical PCS is a multi-lane type (i.e. XAUI, RXAUI or 40GBASE-R is
                                                         selected by BGX_CMR_CONFIG[LMAC_TYPE]), and is never set otherwise." */
	uint64_t synlos                       : 1;  /**< "Loss of Lane Sync:
                                                         Lane code-group or block synchronization is lost on one or more
                                                         lanes associated with the LMAC/LPCS. Set as follows based on the
                                                         LPCS type selected by BGX_CMR_CONFIG[LMAC_TYPE], and whether FEC is
                                                         enabled or disabled by BGX_SPU_FEC_CONTROL[FEC_EN]:
                                                         * XAUI or RXAUI: Set when any any lane's PCS synchronization state
                                                           transitions to LOSS_OF_SYNC (see 802.3-2008 Figure 48-7)
                                                         * 10GBASE-R or 40GBASE-R with FEC disabled: set when the block_lock
                                                           variable is cleared on the 10G lane or any 40G lane (see
                                                           802.3-2008 Figure 49-12 and 802.3ba-2010 Figure 82-20).
                                                         * 10GBASE-R or 40GBASE-R with FEC enabled: set when the
                                                           fec_block_lock variable is cleared on the 10G lane or any 40G
                                                           lane (see 802.3-2008 Figure 74-8)." */
	uint64_t bitlckls                     : 1;  /**< Bit lock lost on one or more lanes associated with the LMAC/LPCS. */
	uint64_t err_blk                      : 1;  /**< "Errored Block Received:
                                                         Set when an errored BASE-R block is received as described for
                                                         BGX_SPU_BR_STATUS2[ERR_BLKS].  Valid if the LPCS type selected by
                                                         BGX_CMR_CONFIG[LMAC_TYPE] is 10GBASE-R or 40GBASE-R, and never set
                                                         otherwise." */
	uint64_t rx_link_down                 : 1;  /**< Set when the receive link goes down, which is the same condition that
                                                         sets BGX_SPU_STATUS2[RCVFLT]. */
	uint64_t rx_link_up                   : 1;  /**< Set when the receive link comes up, which is the same condition that
                                                         allows the setting of BGX_SPU_STATUS1[RCV_LNK]. */
#else
	uint64_t rx_link_up                   : 1;
	uint64_t rx_link_down                 : 1;
	uint64_t err_blk                      : 1;
	uint64_t bitlckls                     : 1;
	uint64_t synlos                       : 1;
	uint64_t algnlos                      : 1;
	uint64_t dbg_sync                     : 1;
	uint64_t bip_err                      : 1;
	uint64_t fec_corr                     : 1;
	uint64_t fec_uncorr                   : 1;
	uint64_t an_page_rx                   : 1;
	uint64_t an_link_good                 : 1;
	uint64_t an_complete                  : 1;
	uint64_t training_done                : 1;
	uint64_t training_failure             : 1;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_bgxx_spux_int_s           cn78xx;
};
typedef union cvmx_bgxx_spux_int cvmx_bgxx_spux_int_t;

/**
 * cvmx_bgx#_spu#_lpcs_states
 *
 * BASE-X Transmit/Receive states
 *
 */
union cvmx_bgxx_spux_lpcs_states {
	uint64_t u64;
	struct cvmx_bgxx_spux_lpcs_states_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_15_63               : 49;
	uint64_t br_rx_sm                     : 3;  /**< BASE-R Receive State Machine state */
	uint64_t reserved_10_11               : 2;
	uint64_t bx_rx_sm                     : 2;  /**< BASE-X Receive State Machine state */
	uint64_t deskew_am_found              : 4;  /**< 40GBASE-R deskew state machine alignment marker found flag per
                                                         logical PCS lane ID. */
	uint64_t reserved_3_3                 : 1;
	uint64_t deskew_sm                    : 3;  /**< BASE-X and 40GBASE-R deskew state machine state */
#else
	uint64_t deskew_sm                    : 3;
	uint64_t reserved_3_3                 : 1;
	uint64_t deskew_am_found              : 4;
	uint64_t bx_rx_sm                     : 2;
	uint64_t reserved_10_11               : 2;
	uint64_t br_rx_sm                     : 3;
	uint64_t reserved_15_63               : 49;
#endif
	} s;
	struct cvmx_bgxx_spux_lpcs_states_s   cn78xx;
};
typedef union cvmx_bgxx_spux_lpcs_states cvmx_bgxx_spux_lpcs_states_t;

/**
 * cvmx_bgx#_spu#_misc_control
 *
 * "TX_RX polarity:
 * RX logical PCS lane polarity vector [3:0] = XOR_RXPLRT[3:0] ^ [4[RXPLRT]].
 * TX logical PCS lane polarity vector [3:0] = XOR_TXPLRT[3:0] ^ [4[TXPLRT]].
 * In short keep RXPLRT and TXPLRT cleared, and use XOR_RXPLRT and
 * XOR_TXPLRT fields to define the polarity per logical PCS lane. Only bit
 * 0 of vector is used for 10GBASE-R, and only bits 1:0 of vector are used
 * for RXAUI."
 */
union cvmx_bgxx_spux_misc_control {
	uint64_t u64;
	struct cvmx_bgxx_spux_misc_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_13_63               : 51;
	uint64_t rx_packet_dis                : 1;  /**< "Receive packet disable:
                                                         This bit can be set or cleared by software at any time to gracefully
                                                         disable or re-enable packet reception by the LPCS. If this bit is
                                                         set while a packet is being received, the packet is completed and
                                                         all subsequent received packets are discarded by the LPCS.
                                                         Similarly, if this bit is cleared while a received packet is being
                                                         discarded, packet reception resumes after the current packet is
                                                         fully discarded.
                                                           When set for a 40GBASE-R or 10GBASE-R LMAC/LPCS type (selected by
                                                         BGX_CMR_CONFIG[LMAC_TYPE]), received errors and faults will be
                                                         ignored while receive packets are disarded; idles will be sent to
                                                         the MAC layer (SMU) and the errored blocks counter
                                                         (BGX_SPU_BR_STATUS2[ERR_BLKS]) will not increment." */
	uint64_t skip_after_term              : 1;  /**< "Enable sending of Idle Skip after Terminate:
                                                         This bit is meaningful when the logical PCS type is XAUI or RXAUI
                                                         (selected by BGX_CMR_CONFIG[LMAC_TYPE]), and has no effect
                                                         otherwise. When set, the LMAC/LPCS transmits more Idle Skip columns
                                                         for clock compensation. Typically set in HiGig/HiGig2 modes.  Clear
                                                         otherwise." */
	uint64_t intlv_rdisp                  : 1;  /**< "RXAUI Interleaved Running Disparity:
                                                         This bit is meaningful when the logical PCS type is RXAUI (LMAC_TYPE
                                                         = RXAUI in the associated BGX_CMR_CONFIG register in the CMR
                                                         sub-block), and has no effect otherwise. It selects which disparity
                                                         calculation to use when combining or splitting the RXAUI lanes, as
                                                         follows:
                                                         0 = Common Running Disparity: Common running disparity is
                                                         computed for even and odd code-groups of an RXAUI lane, i.e.
                                                         interleave lanes before PCS layer As described in the Dune
                                                         Networks/Broadcom RXAUI v2.1 specification. This obeys
                                                         6.25GHz serdes disparity.
                                                         1 = Interleaved Running Disparity: Running disparity is computed
                                                         separately for even and odd code-groups of an RXAUI lane,
                                                         i.e. interleave lanes after PCS layer As described in the
                                                         Marvell RXAUI Interface specification. This does NOT obey
                                                         6.25GHz serdes disparity." */
	uint64_t xor_rxplrt                   : 4;  /**< RX polarity control per logical PCS lane */
	uint64_t xor_txplrt                   : 4;  /**< TX polarity control per logical PCS lane */
	uint64_t rxplrt                       : 1;  /**< Receive Polarity
                                                         1=inverted polarity, 0=normal polarity. */
	uint64_t txplrt                       : 1;  /**< Transmit Polarity
                                                         1=inverted polarity, 0=normal polarity. */
#else
	uint64_t txplrt                       : 1;
	uint64_t rxplrt                       : 1;
	uint64_t xor_txplrt                   : 4;
	uint64_t xor_rxplrt                   : 4;
	uint64_t intlv_rdisp                  : 1;
	uint64_t skip_after_term              : 1;
	uint64_t rx_packet_dis                : 1;
	uint64_t reserved_13_63               : 51;
#endif
	} s;
	struct cvmx_bgxx_spux_misc_control_s  cn78xx;
};
typedef union cvmx_bgxx_spux_misc_control cvmx_bgxx_spux_misc_control_t;

/**
 * cvmx_bgx#_spu#_spd_abil
 *
 * PCS speed ability
 *
 */
union cvmx_bgxx_spux_spd_abil {
	uint64_t u64;
	struct cvmx_bgxx_spux_spd_abil_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t hundredgb                    : 1;  /**< 100G capable: Always 0. */
	uint64_t fortygb                      : 1;  /**< 40G capable: Always 1. */
	uint64_t tenpasst                     : 1;  /**< 10PASS-TS/2BASE-TL capable: Always 0. */
	uint64_t tengb                        : 1;  /**< 10G capable: Always 1. */
#else
	uint64_t tengb                        : 1;
	uint64_t tenpasst                     : 1;
	uint64_t fortygb                      : 1;
	uint64_t hundredgb                    : 1;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_spux_spd_abil_s      cn78xx;
};
typedef union cvmx_bgxx_spux_spd_abil cvmx_bgxx_spux_spd_abil_t;

/**
 * cvmx_bgx#_spu#_status1
 *
 * PCS status 1
 *
 */
union cvmx_bgxx_spux_status1 {
	uint64_t u64;
	struct cvmx_bgxx_spux_status1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t flt                          : 1;  /**< Fault:
                                                         1 = Fault condition detected, 0 = No fault condition detected. This
                                                         bit is a logical OR of the XMTFLT and RCVFLT bits in STATUS2. */
	uint64_t reserved_3_6                 : 4;
	uint64_t rcv_lnk                      : 1;  /**< "PCS Receive Link Status:
                                                         1 = Receive Link up, 0 = Receive Link down. Latching Low bit; stays
                                                         clear until a 1 is written by software. For a BASE-X logical PCS type
                                                         (LMAC_TYPE = XAUI or RXAUI in the associated BGX_CMR_CONFIG register
                                                         in the CMR sub-block), this is a latching low version of the ALIGND
                                                         bit in register BX_STATUS. For a BASE-R logical PCS type (LMAC_TYPE =
                                                         10G_R or 40G_R), this is a latching low version of the RCV_LNK bit in
                                                         register BR_STATUS1.
                                                         Note that in order to avoid read side effects, this is implemented as
                                                         a write-1-to-set bit, rather than latching low read-only as specified
                                                         in 802.3." */
	uint64_t lpable                       : 1;  /**< Low-power ability:
                                                         Always returns 1 to indicate that the LPCS supports low power mode. */
	uint64_t reserved_0_0                 : 1;
#else
	uint64_t reserved_0_0                 : 1;
	uint64_t lpable                       : 1;
	uint64_t rcv_lnk                      : 1;
	uint64_t reserved_3_6                 : 4;
	uint64_t flt                          : 1;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_spux_status1_s       cn78xx;
};
typedef union cvmx_bgxx_spux_status1 cvmx_bgxx_spux_status1_t;

/**
 * cvmx_bgx#_spu#_status2
 *
 * PCS status 2
 *
 */
union cvmx_bgxx_spux_status2 {
	uint64_t u64;
	struct cvmx_bgxx_spux_status2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t dev                          : 2;  /**< Device Present:
                                                         Always returns 0x2 to indicate device present at this address. */
	uint64_t reserved_12_13               : 2;
	uint64_t xmtflt                       : 1;  /**< Transmit Fault: The SPU never sets this bit. Always returns 0. */
	uint64_t rcvflt                       : 1;  /**< "Receive Fault.
                                                         Latching High bit; stays set until a 1 is written by software.
                                                         Note that in order to avoid read side effects, this is implemented as
                                                         a write-1-to-clear bit, rather than latching high read-only as
                                                         specified in 802.3." */
	uint64_t reserved_6_9                 : 4;
	uint64_t hundredgb_r                  : 1;  /**< 100GBASE-R capable: Always 0. */
	uint64_t fortygb_r                    : 1;  /**< 40GBASE-R capable: Always 1. */
	uint64_t tengb_t                      : 1;  /**< 10GBASE-T capable: Always 0. */
	uint64_t tengb_w                      : 1;  /**< 10GBASE-W capable: Always 0. */
	uint64_t tengb_x                      : 1;  /**< 10GBASE-X capable: Always 1. */
	uint64_t tengb_r                      : 1;  /**< 10GBASE-R capable: Always 1. */
#else
	uint64_t tengb_r                      : 1;
	uint64_t tengb_x                      : 1;
	uint64_t tengb_w                      : 1;
	uint64_t tengb_t                      : 1;
	uint64_t fortygb_r                    : 1;
	uint64_t hundredgb_r                  : 1;
	uint64_t reserved_6_9                 : 4;
	uint64_t rcvflt                       : 1;
	uint64_t xmtflt                       : 1;
	uint64_t reserved_12_13               : 2;
	uint64_t dev                          : 2;
	uint64_t reserved_16_63               : 48;
#endif
	} s;
	struct cvmx_bgxx_spux_status2_s       cn78xx;
};
typedef union cvmx_bgxx_spux_status2 cvmx_bgxx_spux_status2_t;

/**
 * cvmx_bgx#_spu_bist_status
 *
 * "SPU Memory Status: This register provides memory BIST and ECC status
 * from the SPU RX_BUF lane FIFOs"
 */
union cvmx_bgxx_spu_bist_status {
	uint64_t u64;
	struct cvmx_bgxx_spu_bist_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_4_63                : 60;
	uint64_t rx_buf_bist_status           : 4;  /**< "SPU RX_BUF BIST status for lanes 3-0: One bit per serdes lane, set
                                                         to indicate BIST failure for the associated RX_BUF lane FIFO." */
#else
	uint64_t rx_buf_bist_status           : 4;
	uint64_t reserved_4_63                : 60;
#endif
	} s;
	struct cvmx_bgxx_spu_bist_status_s    cn78xx;
};
typedef union cvmx_bgxx_spu_bist_status cvmx_bgxx_spu_bist_status_t;

/**
 * cvmx_bgx#_spu_dbg_control
 *
 * SPU Debug Control
 *
 */
union cvmx_bgxx_spu_dbg_control {
	uint64_t u64;
	struct cvmx_bgxx_spu_dbg_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_56_63               : 8;
	uint64_t ms_clk_period                : 12; /**< "Millisecond Clock Period: Specifies the number of microsecond clock
                                                         ticks per millisecond, minus 1. The default value of 999 (0x3e7)
                                                         should be used during normal operation; other values may be used for
                                                         test/debug purposes." */
	uint64_t us_clk_period                : 12; /**< "Microsecond Clock Period: Specifies the number of SCLK cycles per
                                                         microseconds, minus 1. For example, if SCLK runs at 1.3 GHz, the
                                                         number of SCLK cycles per microsecond is 1,300 so the value of this
                                                         field should be 1,299 (0x513). This is used by the BASE-R BER
                                                         monitor timers." */
	uint64_t reserved_31_31               : 1;
	uint64_t br_ber_mon_dis               : 1;  /**< "BASE-R Bit Error Rate Monitor Disable:
                                                         This bit should be clear for normal oepration. Setting it disables
                                                         the BASE-R BER monitor state machine defined in 802.3-2008 Figure
                                                         49-13 for 10GBASE-R and 802.3ba-2010 Figure 82-13 for 40GBASE-R." */
	uint64_t an_nonce_match_dis           : 1;  /**< "Auto-Negotiation Nonce Match Disable:
                                                         This bit should be clear for normal oepration. Setting it disables
                                                         Nonce Match check by forcing nonce_match variable to 0 in the AN
                                                         arbitration state diagram, as defined in 802.3-2008 Figure 73-11.
                                                         This bit can be set by software for test purposes, e.g. for running
                                                         auto-negotiation in loopback mode." */
	uint64_t timestamp_norm_dis           : 1;  /**< "40GBASE-R RX Timestamp Normalization Disable:
                                                         This bit controls the generation of the receive SOP timestamp passed
                                                         to the SMU sub-block for a 40GBASE-R LMAC/LPCS. When this bit is
                                                         clear, SPU normalizes the receive SOP timestamp in order to
                                                         compensate for lane-to-lane skew on a 40GBASE-R link, as described
                                                         below. When this bit is set, timestamp normalization is disabled and
                                                         SPU directly passes the captured SOP timestamp values to SMU.
                                                         In 40GBASE-R mode, a packet's SOP block can be transferred on any of
                                                         the LMAC's lanes. In the presence of lane-to-lane skew, the SOP
                                                         delay from transmit (by the link partner) to receive by SPU varies
                                                         depending on which lane is used by the SOP block. This variation
                                                         reduces the accuracy of the received SOP timestamp relative to when
                                                         it was transmitted by the link partner.
                                                         SPU captures the timestamp of the alignment marker received on each
                                                         serdes lane during align/skew detection; the captured value can be
                                                         read from the serdes lane's BGX_SPU_SDS_SKEW_STATUS[SKEW_STATUS]
                                                         field (AM_TIMESTAMP sub-field). If alignment markers are transmitted
                                                         at about the same time on all lanes by the link partner, then the
                                                         difference between the AM_TIMESTAMP values for a pair of lanes
                                                         represents the approximate skew between those lanes.
                                                         SPU uses the 40GBASE-R LMAC's programmed PCS lane 0 as a reference
                                                         and computes the AM_TIMESTAMP delta of every other lane relative to
                                                         PCS lane 0. When normalization is enabled, SPU adjusts the timestamp
                                                         of a received SOP by subtracting the receiving lane's AM_TIMESTAMP
                                                         delta from the captured timestamp value. The adjusted/normalized
                                                         timestamp value is then passed to SMU along with the SOP.
                                                         Software can determine the actual maximum skew of a 40GBASE-R link
                                                         by examining the AM_TIMESTAMP values in the BGX_SPU_SDS_SKEW_STATUS
                                                         registers, and decide if timestamp normalization should be enabled or
                                                         disabled to improve PTP accuracy. Normalization improves accurary
                                                         for larger skew values but reduces the accuracy (due to timestamp
                                                         measurement errors) for small skew values." */
	uint64_t rx_buf_flip_synd             : 8;  /**< "Flip SPU RX_BUF FIFO ECC bits:
                                                         Two bits per serdes lane; used to inject single-bit and double-bit
                                                         errors into the ECC field on writes to the associated SPU RX_BUF
                                                         lane FIFO, as follows:
                                                             0x0: normal operation
                                                             0x1: SBE on ECC bit 0
                                                             0x2: SBE on ECC bit 1
                                                             0x3: DBE on ECC bits 1:0
                                                         " */
	uint64_t br_pmd_train_soft_en         : 1;  /**< "Enable BASE-R PMD Software Controlled Link Training:
                                                         This bit configures the operation mode for BASE-R link training for
                                                         all LMACs and lanes. When this bit is set along with
                                                         BR_PMD_CONTROL[TRAIN_EN] for a given LMAC, the BASE-R link training
                                                         protocol for that LMAC is executed under software control, whereby
                                                         the contents the BR_PMD_LD_CUP and BR_PMD_LD_REP registers are
                                                         updated by software. When this bit is clear and
                                                         BR_PMD_CONTROL[TRAIN_EN] is set, the link training protocol is fully
                                                         automated in hardware, whereby the contents BR_PMD_LD_CUP and
                                                         BR_PMD_LD_REP registers are automatically updated by hardware." */
	uint64_t an_arb_link_chk_en           : 1;  /**< "Enable link status checking by AN Arbitration State Machine:
                                                         When Auto-Negotiation is enabled (AN_EN is set in AN_CONTROL), this
                                                         bit controls the behavior of the AN arbitration state machine when it
                                                         reaches the AN GOOD CHECK state after DME pages are successfully
                                                         exchanged, as defined in Figure 73-11 in 802.3-2008.
                                                         When this bit is set and the negotiated Highest Common Denominator
                                                         (HCD) technology matches LMAC_TYPE in BGX_CMR_CONFIG, the AN
                                                         arbitration SM performs the actions defined for the AN GOOD CHECK
                                                         state in Figure 73-11, i.e. run the link_fail_inhibit timer and
                                                         eventually transition to the AN GOOD or TRANSMIT DISABLE state.
                                                         When this bit is clear or the HCD technology does not match LMAC_TYPE,
                                                         the AN arbitration SM stay in the AN GOOD CHECK state, with the
                                                         expectation that software will perform the appropriate actions to
                                                         complete the Auto-Negotiation protocol, as follows:
                                                         * If this bit is clear and the HCD technology matches LMAC_TYPE, clear
                                                           AN_EN in AN_CONTROL.
                                                         * Otherwise, disable the LPCS by clearing the ENABLE bit in
                                                           BGX_CMR_CONFIG, clear AN_EN in AN_CONTROL, reconfigure the LPCS with
                                                           the correct LMAC_TYPE, and re-enable the LPCS by setting ENABLE in
                                                           BGX_CMR_CONFIG.
                                                         In both cases, software should implement the link_fail_inhibit timer
                                                         and verify the link status as specified for the AN GOOD CHECK state.
                                                         " */
	uint64_t rx_buf_cor_dis               : 1;  /**< When set, disables ECC correction on all SPU RX_BUF FIFOs. */
	uint64_t scramble_dis                 : 1;  /**< BASE-R Scrambler/descrambler Disable:
                                                         Setting this bit to 1 disables the BASE-R scrambler & descrambler
                                                         functions and FEC PN-2112 scrambler & descrambler functions for
                                                         debug purposes. */
	uint64_t reserved_15_15               : 1;
	uint64_t marker_rxp                   : 15; /**< BASE-R Alignment Marker Receive Period:
                                                         For a multi-lane BASE-R logical PCS (i.e. 40GBASE-R), this field
                                                         specifies the expected alignment marker receive period per lane, i.e.
                                                         the expected number of received 66b non-marker blocks between
                                                         consecutive markers on the same lane. The default value corresponds
                                                         to a period of 16363 blocks (exclusive) as specified in 802.3ba-2010. */
#else
	uint64_t marker_rxp                   : 15;
	uint64_t reserved_15_15               : 1;
	uint64_t scramble_dis                 : 1;
	uint64_t rx_buf_cor_dis               : 1;
	uint64_t an_arb_link_chk_en           : 1;
	uint64_t br_pmd_train_soft_en         : 1;
	uint64_t rx_buf_flip_synd             : 8;
	uint64_t timestamp_norm_dis           : 1;
	uint64_t an_nonce_match_dis           : 1;
	uint64_t br_ber_mon_dis               : 1;
	uint64_t reserved_31_31               : 1;
	uint64_t us_clk_period                : 12;
	uint64_t ms_clk_period                : 12;
	uint64_t reserved_56_63               : 8;
#endif
	} s;
	struct cvmx_bgxx_spu_dbg_control_s    cn78xx;
};
typedef union cvmx_bgxx_spu_dbg_control cvmx_bgxx_spu_dbg_control_t;

/**
 * cvmx_bgx#_spu_mem_int
 *
 * SPU Memory Interrupt
 *
 */
union cvmx_bgxx_spu_mem_int {
	uint64_t u64;
	struct cvmx_bgxx_spu_mem_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_8_63                : 56;
	uint64_t rx_buf_sbe                   : 4;  /**< "SPU RX_BUF Single-Bit Error for lanes 3-0: One bit per physical
                                                         serdes lane.  Each bit is set when the associated RX_BUF lane FIFO
                                                         detects a single-bit ECC error" */
	uint64_t rx_buf_dbe                   : 4;  /**< "SPU RX_BUF Double-Bit Error for lanes 3-0: One bit per physical
                                                         serdes lane.  Each bit is set when the associated RX_BUF lane FIFO
                                                         detects a double-bit ECC error." */
#else
	uint64_t rx_buf_dbe                   : 4;
	uint64_t rx_buf_sbe                   : 4;
	uint64_t reserved_8_63                : 56;
#endif
	} s;
	struct cvmx_bgxx_spu_mem_int_s        cn78xx;
};
typedef union cvmx_bgxx_spu_mem_int cvmx_bgxx_spu_mem_int_t;

/**
 * cvmx_bgx#_spu_mem_status
 *
 * "SPU Memory Status: This register provides memory BIST and ECC status
 * from the SPU RX_BUF lane FIFOs"
 */
union cvmx_bgxx_spu_mem_status {
	uint64_t u64;
	struct cvmx_bgxx_spu_mem_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_32_63               : 32;
	uint64_t rx_buf_ecc_synd              : 32; /**< "SPU RX_BUF ECC Syndromes for lanes 3-0: 8-bit syndrome sub-field
                                                         per serdes lane. Each 8-bit sub-field contains the syndrome of the
                                                         latest single-bit or double-bit ECC error detected by the associated
                                                         RX_BUF lane FIFO, i.e. it is loaded when the corresponding
                                                         RX_BUF_SBE or RX_BUF_DBE bit is set in the SPU MEM_INT register." */
#else
	uint64_t rx_buf_ecc_synd              : 32;
	uint64_t reserved_32_63               : 32;
#endif
	} s;
	struct cvmx_bgxx_spu_mem_status_s     cn78xx;
};
typedef union cvmx_bgxx_spu_mem_status cvmx_bgxx_spu_mem_status_t;

/**
 * cvmx_bgx#_spu_sds#_skew_status
 *
 * Serdes lane skew status. One register per physical serdes lane.
 *
 */
union cvmx_bgxx_spu_sdsx_skew_status {
	uint64_t u64;
	struct cvmx_bgxx_spu_sdsx_skew_status_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_32_63               : 32;
	uint64_t skew_status                  : 32; /**< Format defined by BGX_SPU_SDS_SKEW_STATUS_S. */
#else
	uint64_t skew_status                  : 32;
	uint64_t reserved_32_63               : 32;
#endif
	} s;
	struct cvmx_bgxx_spu_sdsx_skew_status_s cn78xx;
};
typedef union cvmx_bgxx_spu_sdsx_skew_status cvmx_bgxx_spu_sdsx_skew_status_t;

/**
 * cvmx_bgx#_spu_sds#_states
 *
 * Serdes lane states. One register per physical serdes lane.
 *
 */
union cvmx_bgxx_spu_sdsx_states {
	uint64_t u64;
	struct cvmx_bgxx_spu_sdsx_states_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_52_63               : 12;
	uint64_t am_lock_invld_cnt            : 2;  /**< 40GBASE-R Alignment Marker Lock state machine invalid AM counter */
	uint64_t am_lock_sm                   : 2;  /**< 40GBASE-R Alignment Marker Lock state machine state */
	uint64_t reserved_45_47               : 3;
	uint64_t train_sm                     : 3;  /**< Link Training state machine state */
	uint64_t train_code_viol              : 1;  /**< Link Training code violation in received Control Channel */
	uint64_t train_frame_lock             : 1;  /**< Link Training frame lock status */
	uint64_t train_lock_found_1st_marker  : 1;  /**< Link Training Lock State Machine found first marker flag */
	uint64_t train_lock_bad_markers       : 3;  /**< Link Training Lock State Machine bad markers counter */
	uint64_t reserved_35_35               : 1;
	uint64_t an_arb_sm                    : 3;  /**< Auto-Negotiation Arbitration State Machine state */
	uint64_t an_rx_sm                     : 2;  /**< Auto-Negotiation Receive State Machine state */
	uint64_t reserved_29_29               : 1;
	uint64_t fec_block_sync               : 1;  /**< FEC Block Sync status */
	uint64_t fec_sync_cnt                 : 4;  /**< FEC block sync state machine good/bad parity block counter */
	uint64_t reserved_23_23               : 1;
	uint64_t br_sh_invld_cnt              : 7;  /**< BASE-R Lock State Machine Invalid Sync Header Counter */
	uint64_t br_block_lock                : 1;  /**< BASE-R Block Lock status */
	uint64_t br_sh_cnt                    : 11; /**< BASE-R Lock State Machine Sync Header Counter */
	uint64_t bx_sync_sm                   : 4;  /**< BASE-X PCS Syncronization state machine state */
#else
	uint64_t bx_sync_sm                   : 4;
	uint64_t br_sh_cnt                    : 11;
	uint64_t br_block_lock                : 1;
	uint64_t br_sh_invld_cnt              : 7;
	uint64_t reserved_23_23               : 1;
	uint64_t fec_sync_cnt                 : 4;
	uint64_t fec_block_sync               : 1;
	uint64_t reserved_29_29               : 1;
	uint64_t an_rx_sm                     : 2;
	uint64_t an_arb_sm                    : 3;
	uint64_t reserved_35_35               : 1;
	uint64_t train_lock_bad_markers       : 3;
	uint64_t train_lock_found_1st_marker  : 1;
	uint64_t train_frame_lock             : 1;
	uint64_t train_code_viol              : 1;
	uint64_t train_sm                     : 3;
	uint64_t reserved_45_47               : 3;
	uint64_t am_lock_sm                   : 2;
	uint64_t am_lock_invld_cnt            : 2;
	uint64_t reserved_52_63               : 12;
#endif
	} s;
	struct cvmx_bgxx_spu_sdsx_states_s    cn78xx;
};
typedef union cvmx_bgxx_spu_sdsx_states cvmx_bgxx_spu_sdsx_states_t;

#endif
