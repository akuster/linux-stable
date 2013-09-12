/***********************license start***************
 * Copyright (c) 2003-2013  Cavium Inc. (support@cavium.com). All rights
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
 * cvmx-hna-defs.h
 *
 * Configuration and status register (CSR) type definitions for
 * Octeon hna.
 *
 * This file is auto generated. Do not edit.
 *
 * <hr>$Revision$<hr>
 *
 */
#ifndef __CVMX_HNA_DEFS_H__
#define __CVMX_HNA_DEFS_H__

#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_BIST0 CVMX_HNA_BIST0_FUNC()
static inline uint64_t CVMX_HNA_BIST0_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_BIST0 not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x00011800470007F0ull);
}
#else
#define CVMX_HNA_BIST0 (CVMX_ADD_IO_SEG(0x00011800470007F0ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_BIST1 CVMX_HNA_BIST1_FUNC()
static inline uint64_t CVMX_HNA_BIST1_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_BIST1 not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x00011800470007F8ull);
}
#else
#define CVMX_HNA_BIST1 (CVMX_ADD_IO_SEG(0x00011800470007F8ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_CONFIG CVMX_HNA_CONFIG_FUNC()
static inline uint64_t CVMX_HNA_CONFIG_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_CONFIG not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000000ull);
}
#else
#define CVMX_HNA_CONFIG (CVMX_ADD_IO_SEG(0x0001180047000000ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_CONTROL CVMX_HNA_CONTROL_FUNC()
static inline uint64_t CVMX_HNA_CONTROL_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_CONTROL not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000020ull);
}
#else
#define CVMX_HNA_CONTROL (CVMX_ADD_IO_SEG(0x0001180047000020ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DBELL CVMX_HNA_DBELL_FUNC()
static inline uint64_t CVMX_HNA_DBELL_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DBELL not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001470000000000ull);
}
#else
#define CVMX_HNA_DBELL (CVMX_ADD_IO_SEG(0x0001470000000000ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DEBUG0 CVMX_HNA_DEBUG0_FUNC()
static inline uint64_t CVMX_HNA_DEBUG0_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DEBUG0 not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000040ull);
}
#else
#define CVMX_HNA_DEBUG0 (CVMX_ADD_IO_SEG(0x0001180047000040ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DEBUG1 CVMX_HNA_DEBUG1_FUNC()
static inline uint64_t CVMX_HNA_DEBUG1_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DEBUG1 not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000048ull);
}
#else
#define CVMX_HNA_DEBUG1 (CVMX_ADD_IO_SEG(0x0001180047000048ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DEBUG2 CVMX_HNA_DEBUG2_FUNC()
static inline uint64_t CVMX_HNA_DEBUG2_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DEBUG2 not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000050ull);
}
#else
#define CVMX_HNA_DEBUG2 (CVMX_ADD_IO_SEG(0x0001180047000050ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DEBUG3 CVMX_HNA_DEBUG3_FUNC()
static inline uint64_t CVMX_HNA_DEBUG3_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DEBUG3 not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000058ull);
}
#else
#define CVMX_HNA_DEBUG3 (CVMX_ADD_IO_SEG(0x0001180047000058ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DIFCTL CVMX_HNA_DIFCTL_FUNC()
static inline uint64_t CVMX_HNA_DIFCTL_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DIFCTL not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001470600000000ull);
}
#else
#define CVMX_HNA_DIFCTL (CVMX_ADD_IO_SEG(0x0001470600000000ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DIFRDPTR CVMX_HNA_DIFRDPTR_FUNC()
static inline uint64_t CVMX_HNA_DIFRDPTR_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DIFRDPTR not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001470200000000ull);
}
#else
#define CVMX_HNA_DIFRDPTR (CVMX_ADD_IO_SEG(0x0001470200000000ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_DTCFADR CVMX_HNA_DTCFADR_FUNC()
static inline uint64_t CVMX_HNA_DTCFADR_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_DTCFADR not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000060ull);
}
#else
#define CVMX_HNA_DTCFADR (CVMX_ADD_IO_SEG(0x0001180047000060ull))
#endif
#if CVMX_ENABLE_CSR_ADDRESS_CHECKING
#define CVMX_HNA_ERROR CVMX_HNA_ERROR_FUNC()
static inline uint64_t CVMX_HNA_ERROR_FUNC(void)
{
	if (!(OCTEON_IS_MODEL(OCTEON_CN78XX)))
		cvmx_warn("CVMX_HNA_ERROR not supported on this chip\n");
	return CVMX_ADD_IO_SEG(0x0001180047000028ull);
}
#else
#define CVMX_HNA_ERROR (CVMX_ADD_IO_SEG(0x0001180047000028ull))
#endif

/**
 * cvmx_hna_bist0
 */
union cvmx_hna_bist0 {
	uint64_t u64;
	struct cvmx_hna_bist0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_30_63               : 34;
	uint64_t mrp                          : 2;  /**< Bist Results for MRP RAM(s) (per-DLC)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t gfb                          : 4;  /**< Bist Results for GFB RAM(s) (per-cluster)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t stx3                         : 2;  /**< Bist Results for STX3 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t stx2                         : 2;  /**< Bist Results for STX2 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t stx1                         : 2;  /**< Bist Results for STX1 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t stx                          : 2;  /**< Bist Results for STX0 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t dtx3                         : 2;  /**< Bist Results for DTX3 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t dtx2                         : 2;  /**< Bist Results for DTX2 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t dtx1                         : 2;  /**< Bist Results for DTX1 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t dtx                          : 2;  /**< Bist Results for DTX0 RAM(s)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t rdf                          : 4;  /**< Bist Results for RWB RAM(s) (per-cluster)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t pdb                          : 4;  /**< Bist Results for PDB RAM(s) (per-cluster)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
#else
	uint64_t pdb                          : 4;
	uint64_t rdf                          : 4;
	uint64_t dtx                          : 2;
	uint64_t dtx1                         : 2;
	uint64_t dtx2                         : 2;
	uint64_t dtx3                         : 2;
	uint64_t stx                          : 2;
	uint64_t stx1                         : 2;
	uint64_t stx2                         : 2;
	uint64_t stx3                         : 2;
	uint64_t gfb                          : 4;
	uint64_t mrp                          : 2;
	uint64_t reserved_30_63               : 34;
#endif
	} s;
	struct cvmx_hna_bist0_s               cn78xx;
};
typedef union cvmx_hna_bist0 cvmx_hna_bist0_t;

/**
 * cvmx_hna_bist1
 */
union cvmx_hna_bist1 {
	uint64_t u64;
	struct cvmx_hna_bist1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_24_63               : 40;
	uint64_t dc3ram3                      : 1;  /**< "Cluster#3 Bist Results for RAM3 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dc3ram2                      : 1;  /**< "Cluster#3 Bist Results for RAM2 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dc3ram1                      : 1;  /**< "Cluster#3 Bist Results for RAM1 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dlc1ram                      : 1;  /**< DLC1 Bist Results
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t dlc0ram                      : 1;  /**< DLC0 Bist Results
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t dc2ram3                      : 1;  /**< "Cluster#2 Bist Results for RAM3 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dc2ram2                      : 1;  /**< "Cluster#2 Bist Results for RAM2 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dc2ram1                      : 1;  /**< "Cluster#2 Bist Results for RAM1 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dc1ram3                      : 1;  /**< "Cluster#1 Bist Results for RAM3 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dc1ram2                      : 1;  /**< "Cluster#1 Bist Results for RAM2 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t dc1ram1                      : 1;  /**< "Cluster#1 Bist Results for RAM1 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t ram3                         : 1;  /**< "Cluster#0 Bist Results for RAM3 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t ram2                         : 1;  /**< "Cluster#0 Bist Results for RAM2 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t ram1                         : 1;  /**< "Cluster#0 Bist Results for RAM1 RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD" */
	uint64_t crq                          : 1;  /**< Bist Results for CRQ RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t gutv                         : 1;  /**< Bist Results for GUTV RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t gutp                         : 4;  /**< Bist Results for GUTP RAMs (per-cluster)
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t ncd                          : 1;  /**< Bist Results for NCD RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t gif                          : 1;  /**< Bist Results for GIF RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t gib                          : 1;  /**< Bist Results for GIB RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
	uint64_t gfu                          : 1;  /**< Bist Results for GFU RAM
                                                         - 0: GOOD (or bist in progress/never run)
                                                         - 1: BAD */
#else
	uint64_t gfu                          : 1;
	uint64_t gib                          : 1;
	uint64_t gif                          : 1;
	uint64_t ncd                          : 1;
	uint64_t gutp                         : 4;
	uint64_t gutv                         : 1;
	uint64_t crq                          : 1;
	uint64_t ram1                         : 1;
	uint64_t ram2                         : 1;
	uint64_t ram3                         : 1;
	uint64_t dc1ram1                      : 1;
	uint64_t dc1ram2                      : 1;
	uint64_t dc1ram3                      : 1;
	uint64_t dc2ram1                      : 1;
	uint64_t dc2ram2                      : 1;
	uint64_t dc2ram3                      : 1;
	uint64_t dlc0ram                      : 1;
	uint64_t dlc1ram                      : 1;
	uint64_t dc3ram1                      : 1;
	uint64_t dc3ram2                      : 1;
	uint64_t dc3ram3                      : 1;
	uint64_t reserved_24_63               : 40;
#endif
	} s;
	struct cvmx_hna_bist1_s               cn78xx;
};
typedef union cvmx_hna_bist1 cvmx_hna_bist1_t;

/**
 * cvmx_hna_config
 *
 * Specify the RSL base addresses for the block
 * HNA_CONFIG = HNA Configuration Register
 */
union cvmx_hna_config {
	uint64_t u64;
	struct cvmx_hna_config_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t repl_ena                     : 1;  /**< Replication Mode Enable
                                                         This is used by the memory controller to support graph
                                                         data in multiple ports (or port sets), so that the least full
                                                         port can be selected to minimize latency effects.
                                                         SWNOTE: Using this mode requires the HNA SW compiler and HNA
                                                         driver to be aware of the address replication changes.
                                                         This involves changes to the LOAD/GWALK HNA instruction format
                                                         (see: IWORD0.REPL), as well as changes to node arc and metadata
                                                         definitions which now support an additional REPL field.
                                                         When clear, replication mode is disabled, and HNA will interpret
                                                         HNA instructions and node-arc formats which DO NOT have
                                                         address replication information. */
	uint64_t clmskcrip                    : 4;  /**< Cluster Cripple Mask
                                                         A one in each bit of the mask represents which HPC cluster to
                                                         cripple. o78 HNA has 4 clusters, where all CLMSKCRIP mask bits are used.
                                                         SWNOTE: The MIO_FUS___HNA_CLMASK_CRIPPLE[3:0] fuse bits will
                                                         be forced into this register at reset. Any fuse bits that
                                                         contain '1' will be disallowed during a write and will always
                                                         be read as '1'. */
	uint64_t hpu_clcrip                   : 3;  /**< "Encoding which represents \#of HPUs to cripple for each
                                                         cluster. Typically HPU_CLCRIP=0 which enables all HPUs
                                                         within each cluster. However, when the HNA performance
                                                         counters are used, SW may want to limit the \#of HPUs
                                                         per cluster available, as there are only 4 parallel
                                                         performance counters.
                                                         HPU_CLCRIP | \#HPUs crippled(per cluster)
                                                         -----------+-----------------------------
                                                         0          |  0      HPU[11:0]:ON
                                                         1          |  6      HPU[11:6]:OFF  /HPU[5:0]:ON
                                                         2          |  3      HPU[11:9]:OFF  /HPU[8:0]:ON
                                                         3          |  9      HPU[11:3]:OFF  /HPU[2:0]:ON
                                                         4          |  1      HPU[11]:OFF    /HPU[10:0]:ON
                                                         5          |  8      HPU[11:4]:OFF  /HPU[3:0]:ON
                                                         6          |  4      HPU[11:8]:OFF  /HPU[7:0]:ON
                                                         7          |  11     HPU[11:1]:OFF  /HPU[0]:ON
                                                         NOTE: Higher numbered HPUs are crippled first. For instance,
                                                         on o78 (with 12 HPUs/cluster), if HPU_CLCRIP=1(1/2), then
                                                         HPU#s [15:8] within the cluster are crippled and only
                                                         HPU#s [7:0] are available.
                                                         IMPNOTE: The encodings are done in such a way as to later
                                                         be used with fuses (for future revisions which will disable
                                                         some \#of HPUs). Blowing a fuse has the effect that there will
                                                         always be fewer HPUs available. [ie: we never want a customer
                                                         to blow additional fuses to get more HPUs].
                                                         SWNOTE: The MIO_FUS___HNA_NUMHPU_CRIPPLE[2:0] fuse bits will
                                                         be forced into this register at reset. Any fuse bits that
                                                         contain '1' will be disallowed during a write and will always
                                                         be read as '1'." */
	uint64_t hpuclkdis                    : 1;  /**< HNA Clock Disable Source
                                                         When SET, the HNA clocks for HPU(thread engine)
                                                         operation are disabled (to conserve overall chip clocking
                                                         power when the HNA function is not used).
                                                         NOTE: When SET, SW MUST NEVER issue NCB-Direct CSR
                                                         operations to the HNA (will result in NCB Bus Timeout
                                                         errors).
                                                         NOTE: This should only be written to a different value
                                                         during power-on SW initialization.
                                                         SWNOTE: The MIO_FUS___HNA_HPU_DISABLE fuse bit will
                                                         be forced into this register at reset. If the fuse bit
                                                         contains '1', writes to HPUCLKDIS are disallowed and
                                                         will always be read as '1'. */
#else
	uint64_t hpuclkdis                    : 1;
	uint64_t hpu_clcrip                   : 3;
	uint64_t clmskcrip                    : 4;
	uint64_t repl_ena                     : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_hna_config_s              cn78xx;
};
typedef union cvmx_hna_config cvmx_hna_config_t;

/**
 * cvmx_hna_control
 */
union cvmx_hna_control {
	uint64_t u64;
	struct cvmx_hna_control_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t sbdnum                       : 6;  /**< "SBD Debug Entry#
                                                         INTERNAL:
                                                         HNA Scoreboard debug control
                                                         Selects which one of 48 HNA Scoreboard entries is
                                                         latched into the HNA_SBD_DBG[0-3] registers." */
	uint64_t sbdlck                       : 1;  /**< HNA Scoreboard LOCK Strobe
                                                         INTERNAL:
                                                         HNA Scoreboard debug control
                                                         When written with a '1', the HNA Scoreboard Debug
                                                         registers (HNA_SBD_DBG[0-3]) are all locked down.
                                                         This allows SW to lock down the contents of the entire
                                                         SBD for a single instant in time. All subsequent reads
                                                         of the HNA scoreboard registers will return the data
                                                         from that instant in time. */
	uint64_t reserved_3_4                 : 2;
	uint64_t pmode                        : 1;  /**< NCB-NRP Arbiter Mode
                                                         (0=Fixed Priority [LP=WQF,DFF,HP=RGF]/1=RR
                                                         NOTE: This should only be written to a different value
                                                         during power-on SW initialization. */
	uint64_t qmode                        : 1;  /**< NCB-NRQ Arbiter Mode
                                                         (0=Fixed Priority [LP=IRF,RWF,PRF,HP=GRF]/1=RR
                                                         NOTE: This should only be written to a different value
                                                         during power-on SW initialization. */
	uint64_t imode                        : 1;  /**< NCB-Inbound Arbiter
                                                         (0=FP [LP=NRQ,HP=NRP], 1=RR)
                                                         NOTE: This should only be written to a different value
                                                         during power-on SW initialization. */
#else
	uint64_t imode                        : 1;
	uint64_t qmode                        : 1;
	uint64_t pmode                        : 1;
	uint64_t reserved_3_4                 : 2;
	uint64_t sbdlck                       : 1;
	uint64_t sbdnum                       : 6;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_hna_control_s             cn78xx;
};
typedef union cvmx_hna_control cvmx_hna_control_t;

/**
 * cvmx_hna_dbell
 *
 * NOTE: To write to the HNA_DBELL register, a device would issue an IOBST directed at the HNA
 * with addr[34:33]=2'b00.
 * To read the HNA_DBELL register, a device would issue an IOBLD64 directed at the HNA with
 * addr[34:33]=2'b00.
 * NOTE: If HNA_CONFIG[HPUCLKDIS]=1 (HNA-HPU clocks disabled), reads/writes to the HNA_DBELL
 * register do not take effect.
 * NOTE: If FUSE[TBD]="HNA HPU disable" is blown, reads/writes to the HNA_DBELL register do not
 * take effect.
 */
union cvmx_hna_dbell {
	uint64_t u64;
	struct cvmx_hna_dbell_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_20_63               : 44;
	uint64_t dbell                        : 20; /**< Represents the cumulative total of pending
                                                         HNA instructions which SW has previously written
                                                         into the HNA Instruction FIFO (DIF) in main memory.
                                                         Each HNA instruction contains a fixed size 64B
                                                         instruction word which is executed by the HNA HW.
                                                         The DBL register can hold up to 1M-1 (2^20-1)
                                                         pending HNA instruction requests.
                                                         During a read (by SW), the 'most recent' contents
                                                         of the HNA_DBELL register are returned at the time
                                                         the NCB-INB bus is driven.
                                                         NOTE: Since HNA HW updates this register, its
                                                         contents are unpredictable in SW. */
#else
	uint64_t dbell                        : 20;
	uint64_t reserved_20_63               : 44;
#endif
	} s;
	struct cvmx_hna_dbell_s               cn78xx;
};
typedef union cvmx_hna_dbell cvmx_hna_dbell_t;

/**
 * cvmx_hna_debug0
 *
 * "INTERNAL: When the HNA_CONTROL[SBDLCK] bit is written '1', the contents of this register
 * are locked down.
 * Otherwise, the contents of this register are the 'active' contents of the HNA Scoreboard at
 * the time of the
 * CSR read.
 * VERIFICATION NOTE: Read data is unsafe. X's(undefined data) can propagate (in the behavioral
 * model)
 * on the reads unless the HPU Engine specified by HNA_CONTROL[SBDNUM] has previously been
 * assigned an
 * instruction."
 */
union cvmx_hna_debug0 {
	uint64_t u64;
	struct cvmx_hna_debug0_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t sbd0                         : 64; /**< "HNA ScoreBoard \#0 Data
                                                         (HNA Scoreboard Debug)
                                                         [63:38]   (26) rptr[28:3]: Result Base Pointer (QW-aligned)
                                                         [37:22]   (16) Cumulative Result Write Counter (for HDR write)
                                                         [21]       (1) Waiting for GRdRsp EOT
                                                         [20]       (1) Waiting for GRdReq Issue (to NRQ)
                                                         [19]       (1) GLPTR/GLCNT Valid
                                                         [18]       (1) Completion Mark Detected
                                                         [17:15]    (3) Completion Code [0=PDGONE/1=PERR/2=RFULL/3=TERM]
                                                         [14]       (1) Completion Detected
                                                         [13]       (1) Waiting for HDR RWrCmtRsp
                                                         [12]       (1) Waiting for LAST RESULT RWrCmtRsp
                                                         [11]       (1) Waiting for HDR RWrReq
                                                         [10]        (1) Waiting for RWrReq
                                                         [9]        (1) Waiting for WQWrReq issue
                                                         [8]        (1) Waiting for PRdRsp EOT
                                                         [7]        (1) Waiting for PRdReq Issue (to NRQ)
                                                         [6]        (1) Packet Data Valid
                                                         [5]        (1) WQVLD
                                                         [4]        (1) WQ Done Point (either WQWrReq issued (for WQPTR<>0) OR HDR RWrCmtRsp)
                                                         [3]        (1) Resultant write STF/P Mode
                                                         [2]        (1) Packet Data LDT mode
                                                         [1]        (1) Gather Mode
                                                         [0]        (1) Valid" */
#else
	uint64_t sbd0                         : 64;
#endif
	} s;
	struct cvmx_hna_debug0_s              cn78xx;
};
typedef union cvmx_hna_debug0 cvmx_hna_debug0_t;

/**
 * cvmx_hna_debug1
 *
 * "INTERNAL: When the HNA_CONTROL[SBDLCK] bit is written '1', the contents of this register
 * are locked down.
 * Otherwise, the contents of this register are the 'active' contents of the HNA Scoreboard at
 * the time of the
 * CSR read.
 * VERIFICATION NOTE: Read data is unsafe. X's(undefined data) can propagate (in the behavioral
 * model)
 * on the reads unless the HPU Engine specified by HNA_CONTROL[SBDNUM] has previously been
 * assigned an
 * instruction."
 */
union cvmx_hna_debug1 {
	uint64_t u64;
	struct cvmx_hna_debug1_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t sbd1                         : 64; /**< "HNA ScoreBoard \#1 Data
                                                         HNA Scoreboard Debug Data
                                                         [63:56]   (8) UNUSED
                                                         [55:16]  (40) Packet Data Pointer
                                                         [15:0]   (16) Packet Data Counter" */
#else
	uint64_t sbd1                         : 64;
#endif
	} s;
	struct cvmx_hna_debug1_s              cn78xx;
};
typedef union cvmx_hna_debug1 cvmx_hna_debug1_t;

/**
 * cvmx_hna_debug2
 *
 * When the HNA_CONTROL[SBDLCK] bit is written '1', the contents of this register
 * are locked down.
 * Otherwise, the contents of this register are the 'active' contents of the HNA Scoreboard at
 * the time of the
 * CSR read.
 * VERIFICATION NOTE: Read data is unsafe. X's(undefined data) can propagate (in the behavioral
 * model)
 * on the reads unless the HPU Engine specified by HNA_CONTROL[SBDNUM] has previously been
 * assigned an
 * instruction.
 */
union cvmx_hna_debug2 {
	uint64_t u64;
	struct cvmx_hna_debug2_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t sbd2                         : 64; /**< "HNA ScoreBoard \#2 Data
                                                         [63:45] (19) UNUSED
                                                         [44:42]  (3) Instruction Type
                                                         [41:5]  (37) rwptr[39:3]: Result Write Pointer
                                                         [4:0]    (5) prwcnt[4:0]: Pending Result Write Counter" */
#else
	uint64_t sbd2                         : 64;
#endif
	} s;
	struct cvmx_hna_debug2_s              cn78xx;
};
typedef union cvmx_hna_debug2 cvmx_hna_debug2_t;

/**
 * cvmx_hna_debug3
 *
 * When the HNA_CONTROL[SBDLCK] bit is written '1', the contents of this register
 * are locked down.
 * Otherwise, the contents of this register are the 'active' contents of the HNA Scoreboard at
 * the time of the
 * CSR read.
 * VERIFICATION NOTE: Read data is unsafe. X's(undefined data) can propagate (in the behavioral
 * model)
 * on the reads unless the HPU Engine specified by HNA_CONTROL[SBDNUM] has previously been
 * assigned an
 * instruction.
 */
union cvmx_hna_debug3 {
	uint64_t u64;
	struct cvmx_hna_debug3_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t sbd3                         : 64; /**< "HNA ScoreBoard \#3 Data
                                                         [63:52] (11) rptr[39:29]: Result Base Pointer (QW-aligned)
                                                         [52:16] (37) glptr[39:3]: Gather List Pointer
                                                         [15:0]  (16) glcnt Gather List Counter" */
#else
	uint64_t sbd3                         : 64;
#endif
	} s;
	struct cvmx_hna_debug3_s              cn78xx;
};
typedef union cvmx_hna_debug3 cvmx_hna_debug3_t;

/**
 * cvmx_hna_difctl
 *
 * NOTE: To write to the HNA_DIFCTL register, a device would issue an IOBST directed at the HNA
 * with addr[34:32]=3'b110.
 * To read the HNA_DIFCTL register, a device would issue an IOBLD64 directed at the HNA with
 * addr[34:32]=3'b110.
 * NOTE: This register is intended to ONLY be written once (at power-up). Any future writes could
 * cause the HNA and FPA HW to become unpredictable.
 * NOTE: If HNA_CONFIG[HPUCLKDIS]=1 (HNA-HPU clocks disabled), reads/writes to the HNA_DIFCTL
 * register do not take effect.
 * NOTE: If FUSE[TBD]="HNA HPU disable" is blown, reads/writes to the HNA_DIFCTL register do not
 * take effect.
 */
union cvmx_hna_difctl {
	uint64_t u64;
	struct cvmx_hna_difctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_42_63               : 22;
	uint64_t aura                         : 16; /**< Represents the 16bit Aura-id  used by HNA HW
                                                         when the HNA instruction chunk is recycled back
                                                         to the Free Page List maintained by the FPA HW
                                                         (once the HNA instruction has been issued). */
	uint64_t msegbase                     : 6;  /**< Memory Segmentation Base Address
                                                         For debug purposes, backdoor accesses to the HNA
                                                         memory are supported via NCB-Direct CSR accesses to
                                                         the HNA Memory REGION(if addr[34:32]=5. However due
                                                         to the existing NCB address decoding scheme, the
                                                         address only offers a 4GB extent into the HNA memory
                                                         REGION. Therefore, the MSEGBASE CSR field provides
                                                         the additional upper memory address bits to allow access
                                                         to the full extent of memory (128GB MAX).
                                                         For HNA Memory REGION read NCB-Direct CSR accesses, the
                                                         38bit L2/DRAM memory byte address is generated as follows:
                                                         memaddr[37:0] = [HNA_DIFCTL[MSEGBASE],ncb_addr[31:3],3'b0]
                                                         NOTE: See the upper 6bits of the memory address are sourced
                                                         from HNA_DIFCTL[MSEGBASE] CSR field. The lower 4GB address
                                                         offset is directly referenced using the NCB address bits during
                                                         the reference itself.
                                                         NOTE: The HNA_DIFCTL[MSEGBASE] is shared amongst all references.
                                                         As such, if multiple PPs are accessing different segments in memory,
                                                         their must be a SW mutual exclusive lock during each HNA Memory
                                                         REGION access to avoid collisions between PPs using the same MSEGBASE
                                                         CSR field.
                                                         NOTE: See also HNA_ERROR[HNANXM] programmable interrupt which is
                                                         flagged if SW tries to access non-existent memory space (address hole
                                                         or upper unused region of 38bit address space). */
	uint64_t reserved_13_19               : 7;
	uint64_t ldwb                         : 1;  /**< Load Don't Write Back.
                                                         When set, the HW will issue LDWB command towards the cache when
                                                         fetching last word of instructions, as a result the line will not be written back when
                                                         replaced.
                                                         When clear, the HW will issue regular load towards cache which will cause
                                                         the line to be written back before being replaced. */
	uint64_t reserved_9_11                : 3;
	uint64_t size                         : 9;  /**< "Represents the \# of 64B instructions contained
                                                         within each HNA instruction chunk. At Power-on,
                                                         SW will seed the SIZE register with a fixed
                                                         chunk-size. (Must be at least 3)
                                                         HNA HW uses this field to determine the size
                                                         of each HNA instruction chunk, in order to:
                                                         a) determine when to read the next HNA
                                                         instruction chunk pointer which is
                                                         written by SW at the end of the current
                                                         HNA instruction chunk (see HNA description
                                                         of next chunk buffer Ptr for format).
                                                         b) determine when a HNA instruction chunk
                                                         can be returned to the Free Page List
                                                         maintained by the FPA HW." */
#else
	uint64_t size                         : 9;
	uint64_t reserved_9_11                : 3;
	uint64_t ldwb                         : 1;
	uint64_t reserved_13_19               : 7;
	uint64_t msegbase                     : 6;
	uint64_t aura                         : 16;
	uint64_t reserved_42_63               : 22;
#endif
	} s;
	struct cvmx_hna_difctl_s              cn78xx;
};
typedef union cvmx_hna_difctl cvmx_hna_difctl_t;

/**
 * cvmx_hna_difrdptr
 *
 * NOTE: To write to the HNA_DIFRDPTR register, a device would issue an IOBST directed at the HNA
 * with addr[34:33]=2'b01.
 * To read the HNA_DIFRDPTR register, a device would issue an IOBLD64 directed at the HNA with
 * addr[34:33]=2'b01.
 * NOTE: If HNA_CONFIG[HPUCLKDIS]=1 (HNA-HPU clocks disabled), reads/writes to the HNA_DIFRDPTR
 * register do not take effect.
 * NOTE: If FUSE[TBD]="HNA HPU disable" is blown, reads/writes to the HNA_DIFRDPTR register do
 * not take effect.
 */
union cvmx_hna_difrdptr {
	uint64_t u64;
	struct cvmx_hna_difrdptr_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_40_63               : 24;
	uint64_t rdptr                        : 35; /**< Represents the 64B-aligned address of the current
                                                         instruction in the HNA Instruction FIFO in main
                                                         memory. The RDPTR must be seeded by software at
                                                         boot time, and is then maintained thereafter
                                                         by HNA HW.
                                                         During the seed write (by SW), RDPTR[6:5]=0,
                                                         since HNA instruction chunks must be 128B aligned.
                                                         During a read (by SW), the 'most recent' contents
                                                         of the RDPTR register are returned at the time
                                                         the NCB-INB bus is driven.
                                                         NOTE: Since HNA HW updates this register, its
                                                         contents are unpredictable in SW (unless
                                                         its guaranteed that no new DoorBell register
                                                         writes have occurred and the DoorBell register is
                                                         read as zero). */
	uint64_t reserved_0_4                 : 5;
#else
	uint64_t reserved_0_4                 : 5;
	uint64_t rdptr                        : 35;
	uint64_t reserved_40_63               : 24;
#endif
	} s;
	struct cvmx_hna_difrdptr_s            cn78xx;
};
typedef union cvmx_hna_difrdptr cvmx_hna_difrdptr_t;

/**
 * cvmx_hna_dtcfadr
 *
 * "HNA Node Cache Failing Address/Control Error Capture information.
 * This register contains useful information to help in isolating a Node Cache RAM failure.
 * NOTE: The first detected PERR failure is captured in HNA_DTCFADR (locked down), until the
 * corresponding PERR Interrupt is cleared by writing one (W1C). (see: HNA_ERR[DC0PERR[2:0]]).
 * NOTE: In the rare event that multiple parity errors are detected in the same cycle from
 * multiple
 * clusters, the FADR register will be locked down for the least signicant cluster \# (0->3)."
 */
union cvmx_hna_dtcfadr {
	uint64_t u64;
	struct cvmx_hna_dtcfadr_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_44_63               : 20;
	uint64_t ram3fadr                     : 12; /**< HNA RAM3 Failing Address
                                                         If HNA_ERR[DC0PERR<2>]=1, this field indicates the
                                                         failing RAM3 Address. The failing address is locked
                                                         down until the DC0PERR<2> W1C occurs.
                                                         NOTE: If multiple DC0PERR<0>=1 errors are detected,
                                                         then the lsb cluster error information is captured. */
	uint64_t reserved_25_31               : 7;
	uint64_t ram2fadr                     : 9;  /**< HNA RAM2 Failing Address
                                                         If HNA_ERR[DC0PERR<1>]=1, this field indicates the
                                                         failing RAM2 Address. The failing address is locked
                                                         down until the DC0PERR<1> W1C occurs.
                                                         NOTE: If multiple DC0PERR<0>=1 errors are detected,
                                                         then the lsb cluster error information is captured. */
	uint64_t reserved_14_15               : 2;
	uint64_t ram1fadr                     : 14; /**< HNA RAM1 Failing Address
                                                         If HNA_ERR[DC0PERR<0>]=1, this field indicates the
                                                         failing RAM1 Address. The failing address is locked
                                                         down until the DC0PERR<0> W1C occurs.
                                                         NOTE: If multiple DC0PERR<0>=1 errors are detected,
                                                         then the lsb cluster error information is captured. */
#else
	uint64_t ram1fadr                     : 14;
	uint64_t reserved_14_15               : 2;
	uint64_t ram2fadr                     : 9;
	uint64_t reserved_25_31               : 7;
	uint64_t ram3fadr                     : 12;
	uint64_t reserved_44_63               : 20;
#endif
	} s;
	struct cvmx_hna_dtcfadr_s             cn78xx;
};
typedef union cvmx_hna_dtcfadr cvmx_hna_dtcfadr_t;

/**
 * cvmx_hna_error
 */
union cvmx_hna_error {
	uint64_t u64;
	struct cvmx_hna_error_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_20_63               : 44;
	uint64_t osmerr                       : 1;  /**< OSM reported an Error with the response data. */
	uint64_t replerr                      : 1;  /**< HNA Illegal Replication Factor Error
                                                         HNA only supports 1x, 2x, and 4x port replication.
                                                         Legal configurations for memory are to support 2 port or
                                                         4 port configurations.
                                                         The REPLERR interrupt will be set in the following illegal
                                                         configuration cases:
                                                         1) An 8x replication factor is detected for any memory reference.
                                                         2) A 4x replication factor is detected for any memory reference
                                                         when only 2 memory ports are enabled.
                                                         NOTE: If REPLERR is set during a HNA Graph Walk operation,
                                                         then the walk will prematurely terminate with RWORD0[REA]=ERR.
                                                         If REPLERR is set during a NCB-Direct CSR read access to HNA
                                                         Memory REGION, then the CSR read response data is UNPREDICTABLE. */
	uint64_t hnanxm                       : 1;  /**< HNA Non-existent Memory Access
                                                         HPUs (and backdoor CSR HNA Memory REGION reads)
                                                         have access to the following 40bit L2/DRAM address space
                                                         which maps to a 38bit physical DDR3 SDRAM address space [256GB(max)].
                                                         see:
                                                         DR0: 0x0 0000 0000 0000 to 0x0 0000 0FFF FFFF
                                                         maps to lower 256MB of physical DDR3 SDRAM
                                                         DR1: 0x0 0000 2000 0000 to 0x0 0020 0FFF FFFF
                                                         maps to upper 127.75GB of DDR3 SDRAM
                                                         NOTE: the 2nd 256MB HOLE maps to IO and is unused(nonexistent) for memory.
                                                         L2/DRAM address space                     Physical DDR3 SDRAM Address space
                                                         (40bit address)                           (38bit address)
                                                         +-----------+ 0x0040.0FFF.FFFF

                                                         |   DR1     |                            +-----------+ 0x003F.FFFF.FFFF
                                                         |           | (256GB-256MB)
                                                         |           |                     =>     |   DR1
                                                         +-----------+ 0x0000.1FFF.FFFF           |           | (256GB-256MB)
                                                         |   HOLE    | 256MB (DO NOT USE)
                                                         +-----------+ 0x0000.0FFF.FFFF           +-----------+ 0x0000.0FFF.FFFF
                                                         |    DR0    | 256MB                      |   DR0     | (256MB)
                                                         +-----------+ 0x0000.0000.0000           +-----------+ 0x0000.0000.0000
                                                         In the event the HNA generates a reference to the L2/DRAM
                                                         address hole (0x0000.0FFF.FFFF - 0x0000.1FFF.FFFF) the HNANXM
                                                         programmable interrupt bit will be set.
                                                         SWNOTE: Both the 1) SW HNA Graph compiler and the 2) SW NCB-Direct CSR
                                                         accesses to HNA Memory REGION MUST avoid making references
                                                         to this 2nd 256MB HOLE which is non-existent memory region.
                                                         NOTE: If HNANXM is set during a HNA Graph Walk operation,
                                                         then the walk will prematurely terminate with RWORD0[REA]=ERR.
                                                         If HNANXM is set during a NCB-Direct CSR read access to HNA
                                                         Memory REGION, then the CSR read response data is forced to
                                                         128'hBADE_FEED_DEAD_BEEF_FACE_CAFE_BEAD_C0DE. (NOTE: the QW
                                                         being accessed, either the upper or lower QW will be returned). */
	uint64_t cndrd                        : 1;  /**< If Any of the cluster's detected a Parity error on RAM1
                                                         this additional bit further specifies that the
                                                         RAM1 parity error was detected during a CND-RD
                                                         (Cache Node Metadata Read).
                                                         INTERNAL: For CNDRD Parity Error, the previous CNA arc fetch
                                                         information is written to RWORD1+ as follows:
                                                         RWORD1+[NTYPE]=MNODE
                                                         RWORD1+[NDNID]=cna.ndnid
                                                         RWORD1+[NHMSK]=cna.hmsk
                                                         RWORD1+[NNPTR]=cna.nnptr[13:0]
                                                         NOTE: This bit is set if ANY node cluster's RAM1 accesses
                                                         detect a CNDRD error. */
	uint64_t reserved_15_15               : 1;
	uint64_t dlc1_ovferr                  : 1;  /**< DLC1 Fifo Overflow Error Detected
                                                         This condition should NEVER architecturally occur, and
                                                         is here in case HW credit/debit scheme is not working. */
	uint64_t dlc0_ovferr                  : 1;  /**< DLC0 Fifo Overflow Error Detected
                                                         This condition should NEVER architecturally occur, and
                                                         is here in case HW credit/debit scheme is not working. */
	uint64_t dc3perr                      : 3;  /**< "Cluster#3 RAM[3:1] Parity Error Detected
                                                         See also HNA_DTCFADR register which contains the
                                                         failing addresses for the internal node cache RAMs." */
	uint64_t dc2perr                      : 3;  /**< "Cluster#2 RAM[3:1] Parity Error Detected
                                                         See also HNA_DTCFADR register which contains the
                                                         failing addresses for the internal node cache RAMs." */
	uint64_t dc1perr                      : 3;  /**< "Cluster#1 RAM[3:1] Parity Error Detected
                                                         See also HNA_DTCFADR register which contains the
                                                         failing addresses for the internal node cache RAMs." */
	uint64_t dc0perr                      : 3;  /**< "Cluster#0 RAM[3:1] Parity Error Detected
                                                         See also HNA_DTCFADR register which contains the
                                                         failing addresses for the internal node cache RAMs." */
	uint64_t dblovf                       : 1;  /**< Doorbell Overflow detected - Status bit
                                                         When set, the 20b accumulated doorbell register
                                                         had overflowed (SW wrote too many doorbell requests).
                                                         If the DBLINA had previously been enabled(set),
                                                         an interrupt will be posted. Software can clear
                                                         the interrupt by writing a 1 to this register bit.
                                                         NOTE: Detection of a Doorbell Register overflow
                                                         is a catastrophic error which may leave the HNA
                                                         HW in an unrecoverable state.
                                                         Throws HNA_INTSN_E::HNA_ERROR_DBLOVF. */
#else
	uint64_t dblovf                       : 1;
	uint64_t dc0perr                      : 3;
	uint64_t dc1perr                      : 3;
	uint64_t dc2perr                      : 3;
	uint64_t dc3perr                      : 3;
	uint64_t dlc0_ovferr                  : 1;
	uint64_t dlc1_ovferr                  : 1;
	uint64_t reserved_15_15               : 1;
	uint64_t cndrd                        : 1;
	uint64_t hnanxm                       : 1;
	uint64_t replerr                      : 1;
	uint64_t osmerr                       : 1;
	uint64_t reserved_20_63               : 44;
#endif
	} s;
	struct cvmx_hna_error_s               cn78xx;
};
typedef union cvmx_hna_error cvmx_hna_error_t;

#endif
