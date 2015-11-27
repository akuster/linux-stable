/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2015 Cavium Inc.
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
 * Contact Cavium Inc. for more information
 ***********************license end**************************************/

#ifndef __CVMX_RST_DEFS_H__
#define __CVMX_RST_DEFS_H__

#define CVMX_RST_BOOT (CVMX_ADD_IO_SEG(0x0001180006001600ull))
#define CVMX_RST_CFG (CVMX_ADD_IO_SEG(0x0001180006001610ull))
#define CVMX_RST_CKILL (CVMX_ADD_IO_SEG(0x0001180006001638ull))
#define CVMX_RST_CTLX(offset) (CVMX_ADD_IO_SEG(0x0001180006001640ull) + ((offset) & 3) * 8)
#define CVMX_RST_DELAY (CVMX_ADD_IO_SEG(0x0001180006001608ull))
#define CVMX_RST_ECO (CVMX_ADD_IO_SEG(0x00011800060017B8ull))
#define CVMX_RST_INT (CVMX_ADD_IO_SEG(0x0001180006001628ull))
#define CVMX_RST_OCX (CVMX_ADD_IO_SEG(0x0001180006001618ull))
#define CVMX_RST_POWER_DBG (CVMX_ADD_IO_SEG(0x0001180006001708ull))
#define CVMX_RST_PP_POWER (CVMX_ADD_IO_SEG(0x0001180006001700ull))
#define CVMX_RST_SOFT_PRSTX(offset) (CVMX_ADD_IO_SEG(0x00011800060016C0ull) + ((offset) & 3) * 8)
#define CVMX_RST_SOFT_RST (CVMX_ADD_IO_SEG(0x0001180006001680ull))
#define CVMX_RST_BIST_TIMER (CVMX_ADD_IO_SEG(0x0001180006001760ull))
#define CVMX_RST_BPHY_SOFT_RST (CVMX_ADD_IO_SEG(0x0001180006001698ull))
#define CVMX_RST_COLD_DATAX(offset) (CVMX_ADD_IO_SEG(0x00011800060017C0ull) + ((offset) & 3) * 8)
#define CVMX_RST_DEBUG (CVMX_ADD_IO_SEG(0x00011800060017B0ull))
#define CVMX_RST_INT_W1S (CVMX_ADD_IO_SEG(0x0001180006001630ull))
#define CVMX_RST_OUT_CTL (CVMX_ADD_IO_SEG(0x0001180006001688ull))
#define CVMX_RST_REF_CNTR (CVMX_ADD_IO_SEG(0x0001180006001758ull))
#define CVMX_RST_SOFT_RST (CVMX_ADD_IO_SEG(0x0001180006001680ull))
#define CVMX_RST_THERMAL_ALERT (CVMX_ADD_IO_SEG(0x0001180006001690ull))

/**
 * cvmx_rst_bist_timer
 *
 * Added in pass 2.
 *
 */
union cvmx_rst_bist_timer {
	uint64_t u64;
	struct cvmx_rst_bist_timer_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_29_63               : 35;
	uint64_t count                        : 29; /**< Number of 50 Mhz reference clocks that have elapsed during bist and repair during the last
                                                         reset.
                                                         If MSB is set the BIST chain did not complete as expected. */
#else
	uint64_t count                        : 29;
	uint64_t reserved_29_63               : 35;
#endif
	} s;
	struct cvmx_rst_bist_timer_s          cn73xx;
	struct cvmx_rst_bist_timer_s          cn78xxp2;
	struct cvmx_rst_bist_timer_s          cnf75xx;
};
typedef union cvmx_rst_bist_timer cvmx_rst_bist_timer_t;

union cvmx_rst_boot {
	uint64_t u64;
	struct cvmx_rst_boot_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t chipkill:1;
		uint64_t jtcsrdis:1;
		uint64_t ejtagdis:1;
		uint64_t romen:1;
		uint64_t ckill_ppdis:1;
		uint64_t jt_tstmode:1;
		uint64_t vrm_err:1;
		uint64_t reserved_37_56:20;
		uint64_t c_mul:7;
		uint64_t pnr_mul:6;
		uint64_t reserved_21_23:3;
		uint64_t lboot_oci:3;
		uint64_t lboot_ext:6;
		uint64_t lboot:10;
		uint64_t rboot:1;
		uint64_t rboot_pin:1;
#else
		uint64_t rboot_pin:1;
		uint64_t rboot:1;
		uint64_t lboot:10;
		uint64_t lboot_ext:6;
		uint64_t lboot_oci:3;
		uint64_t reserved_21_23:3;
		uint64_t pnr_mul:6;
		uint64_t c_mul:7;
		uint64_t reserved_37_56:20;
		uint64_t vrm_err:1;
		uint64_t jt_tstmode:1;
		uint64_t ckill_ppdis:1;
		uint64_t romen:1;
		uint64_t ejtagdis:1;
		uint64_t jtcsrdis:1;
		uint64_t chipkill:1;
#endif
	} s;
	struct cvmx_rst_boot_s                cn70xx;
	struct cvmx_rst_boot_s                cn70xxp1;
	struct cvmx_rst_boot_s                cn73xx;
	struct cvmx_rst_boot_s                cn78xx;
	struct cvmx_rst_boot_s                cn78xxp2;
	struct cvmx_rst_boot_s                cnf75xx;
};

/**
 * cvmx_rst_bphy_soft_rst
 */
union cvmx_rst_bphy_soft_rst {
	uint64_t u64;
	struct cvmx_rst_bphy_soft_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t soft_rst                     : 1;  /**< Reserved.  For diagonistic use only.
                                                         Internal:  When set, resets the Baseband PHY Logic independent of the
                                                         reset of the chip.  Software must guarantee that NCB operations have
                                                         completed and credits have been returned before asserting this bit.
                                                         Minimum assertion time 1uS. */
#else
	uint64_t soft_rst                     : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_rst_bphy_soft_rst_s       cnf75xx;
};
typedef union cvmx_rst_bphy_soft_rst cvmx_rst_bphy_soft_rst_t;

/**
 * cvmx_rst_cfg
 */
union cvmx_rst_cfg {
	uint64_t u64;
	struct cvmx_rst_cfg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t bist_delay:58;
		uint64_t reserved_3_5:3;
		uint64_t cntl_clr_bist:1;
		uint64_t warm_clr_bist:1;
		uint64_t soft_clr_bist:1;
#else
	uint64_t reserved_0_0                 : 1;
	uint64_t warm_clr_bist                : 1;
	uint64_t cntl_clr_bist                : 1;
	uint64_t reserved_3_5                 : 3;
	uint64_t bist_delay                   : 58;
#endif
	} s;
	struct cvmx_rst_cfg_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t bist_delay                   : 58; /**< Reserved. */
	uint64_t reserved_3_5                 : 3;
	uint64_t cntl_clr_bist                : 1;  /**< Perform clear BIST during control-only reset, instead of a full BIST. A warm/soft reset
                                                         will not change this field. */
	uint64_t warm_clr_bist                : 1;  /**< Perform clear BIST during warm reset, instead of a full BIST. A warm/soft reset does not
                                                         change this field. Note that a cold reset always performs a full BIST. */
	uint64_t soft_clr_bist                : 1;  /**< Perform clear BIST during soft reset, instead of a full BIST. A warm/soft reset does not
                                                         change this field. Note that a cold reset always performs a full BIST. */
#else
		uint64_t soft_clr_bist:1;
		uint64_t warm_clr_bist:1;
		uint64_t cntl_clr_bist:1;
		uint64_t reserved_3_5:3;
		uint64_t bist_delay:58;
#endif
	} cn70xx;
	struct cvmx_rst_cfg_cn70xx            cn70xxp1;
	struct cvmx_rst_cfg_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t bist_delay                   : 58; /**< Reserved. */
	uint64_t reserved_1_5                 : 5;
	uint64_t clr_bist                     : 1;  /**< Perform clear BIST during a reset, instead of a full BIST. A warm/soft reset does not
                                                         change this field. Note that a cold reset always performs a full BIST. */
#else
	uint64_t clr_bist                     : 1;
	uint64_t reserved_1_5                 : 5;
	uint64_t bist_delay                   : 58;
#endif
	} cn73xx;
	struct cvmx_rst_cfg_cn70xx            cn78xx;
	struct cvmx_rst_cfg_cn70xx            cn78xxp2;
	struct cvmx_rst_cfg_cn73xx            cnf75xx;
};

union cvmx_rst_ckill {
	uint64_t u64;
	struct cvmx_rst_ckill_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_47_63:17;
		uint64_t timer:47;
#else
		uint64_t timer:47;
		uint64_t reserved_47_63:17;
#endif
	} s;
	struct cvmx_rst_ckill_s               cn70xx;
	struct cvmx_rst_ckill_s               cn70xxp1;
	struct cvmx_rst_ckill_s               cn73xx;
	struct cvmx_rst_ckill_s               cn78xx;
	struct cvmx_rst_ckill_s               cn78xxp2;
	struct cvmx_rst_ckill_s               cnf75xx;
};

/**
 * cvmx_rst_cold_data#
 *
 * Added in pass 2.
 *
 */
union cvmx_rst_cold_datax {
	uint64_t u64;
	struct cvmx_rst_cold_datax_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t data                         : 64; /**< Scratch data registers preserved through warm reset.
                                                         Reset to 0x0 on cold reset. */
#else
	uint64_t data                         : 64;
#endif
	} s;
	struct cvmx_rst_cold_datax_s          cn73xx;
	struct cvmx_rst_cold_datax_s          cn78xxp2;
	struct cvmx_rst_cold_datax_s          cnf75xx;
};
typedef union cvmx_rst_cold_datax cvmx_rst_cold_datax_t;

/**
 * cvmx_rst_ctl#
 */
union cvmx_rst_ctlx {
	uint64_t u64;
	struct cvmx_rst_ctlx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_10_63:54;
		uint64_t prst_link:1;
		uint64_t rst_done:1;
		uint64_t rst_link:1;
		uint64_t host_mode:1;
		uint64_t reserved_4_5:2;
		uint64_t rst_drv:1;
		uint64_t rst_rcv:1;
		uint64_t rst_chip:1;
		uint64_t rst_val:1;
#else
		uint64_t rst_val:1;
		uint64_t rst_chip:1;
		uint64_t rst_rcv:1;
		uint64_t rst_drv:1;
		uint64_t reserved_4_5:2;
		uint64_t host_mode:1;
		uint64_t rst_link:1;
		uint64_t rst_done:1;
		uint64_t prst_link:1;
		uint64_t reserved_10_63:54;
#endif
	} s;
	struct cvmx_rst_ctlx_s                cn70xx;
	struct cvmx_rst_ctlx_s                cn70xxp1;
	struct cvmx_rst_ctlx_s                cn73xx;
	struct cvmx_rst_ctlx_s                cn78xx;
	struct cvmx_rst_ctlx_s                cn78xxp2;
	struct cvmx_rst_ctlx_s                cnf75xx;
};

/**
 * cvmx_rst_debug
 *
 * Added in pass 2.
 *
 */
union cvmx_rst_debug {
	uint64_t u64;
	struct cvmx_rst_debug_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t clk_on                       : 1;  /**< Force conditional clock used for interrupt logic to always be on. For diagnostic use only. */
#else
	uint64_t clk_on                       : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_rst_debug_s               cn78xxp2;
	struct cvmx_rst_debug_s               cnf75xx;
};
typedef union cvmx_rst_debug cvmx_rst_debug_t;

/**
 * cvmx_rst_delay
 */
union cvmx_rst_delay {
	uint64_t u64;
	struct cvmx_rst_delay_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t warm_rst_dly:16;
		uint64_t soft_rst_dly:16;
#else
		uint64_t soft_rst_dly:16;
		uint64_t warm_rst_dly:16;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_rst_delay_s cn70xx;
	struct cvmx_rst_delay_s cn70xxp1;
	struct cvmx_rst_delay_s cn73xx;
	struct cvmx_rst_delay_s cn78xx;
	struct cvmx_rst_delay_s cn78xxp2;
	struct cvmx_rst_delay_s cnf75xx;
};

/**
 * cvmx_rst_eco
 *
 * Added in pass 2.
 *
 */
union cvmx_rst_eco {
	uint64_t u64;
	struct cvmx_rst_eco_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_32_63               : 32;
	uint64_t eco_rw                       : 32; /**< ECO flops. */
#else
	uint64_t eco_rw                       : 32;
	uint64_t reserved_32_63               : 32;
#endif
	} s;
	struct cvmx_rst_eco_s cn73xx;
	struct cvmx_rst_eco_s cn78xx;
	struct cvmx_rst_eco_s cn78xxp2;
	struct cvmx_rst_eco_s cnf75xx;
};
typedef union cvmx_rst_eco cvmx_rst_eco_t;

/**
 * cvmx_rst_int
 */
union cvmx_rst_int {
	uint64_t u64;
	struct cvmx_rst_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_12_63:52;
		uint64_t perst:4;
		uint64_t reserved_4_7:4;
		uint64_t rst_link:4;
#else
		uint64_t rst_link:4;
		uint64_t reserved_4_7:4;
		uint64_t perst:4;
		uint64_t reserved_12_63:52;
#endif
	} s;
	struct cvmx_rst_int_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_11_63:53;
		uint64_t perst:3;
		uint64_t reserved_3_7:5;
		uint64_t rst_link:3;
#else
		uint64_t rst_link:3;
		uint64_t reserved_3_7:5;
		uint64_t perst:3;
		uint64_t reserved_11_63:53;
#endif
	} cn70xx;
	struct cvmx_rst_int_cn70xx            cn70xxp1;
	struct cvmx_rst_int_s                 cn73xx;
	struct cvmx_rst_int_s                 cn78xx;
	struct cvmx_rst_int_s                 cn78xxp2;
	struct cvmx_rst_int_s                 cnf75xx;
};

/**
 * cvmx_rst_int_w1s
 */
union cvmx_rst_int_w1s {
	uint64_t u64;
	struct cvmx_rst_int_w1s_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_12_63               : 52;
	uint64_t perst                        : 4;  /**< PERST*_L asserted while RST_CTL()[RST_RCV] = 1 and RST_CTL()[RST_CHIP] = 0. One bit
                                                         corresponds to each controller. */
	uint64_t reserved_4_7                 : 4;
	uint64_t rst_link                     : 4;  /**< A controller link-down/hot-reset occurred while RST_CTL()[RST_LINK] = 0. Software must
                                                         assert then deassert RST_SOFT_PRST()[SOFT_PRST]. One bit corresponds to each controller. */
#else
	uint64_t rst_link                     : 4;
	uint64_t reserved_4_7                 : 4;
	uint64_t perst                        : 4;
	uint64_t reserved_12_63               : 52;
#endif
	} s;
	struct cvmx_rst_int_w1s_s             cn73xx;
	struct cvmx_rst_int_w1s_s             cn78xxp2;
	struct cvmx_rst_int_w1s_s             cnf75xx;
};
typedef union cvmx_rst_int_w1s cvmx_rst_int_w1s_t;

/**
 * cvmx_rst_ocx
 */
union cvmx_rst_ocx {
	uint64_t u64;
	struct cvmx_rst_ocx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t rst_link:3;
#else
		uint64_t rst_link:3;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_rst_ocx_s cn78xx;
	struct cvmx_rst_ocx_s cn78xxp2;
};

/**
 * cvmx_rst_out_ctl
 */
union cvmx_rst_out_ctl {
	uint64_t u64;
	struct cvmx_rst_out_ctl_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_1_63                : 63;
	uint64_t soft_rst                     : 1;  /**< Soft reset. When set to 1 by software, this field drives the RST_OUT_N pin
                                                         active low. In this case the field must also be cleared by software to deassert
                                                         the pin. The pin is also automatically asserted and deasserted by hardware
                                                         during a cold/warm/soft reset. */
#else
	uint64_t soft_rst                     : 1;
	uint64_t reserved_1_63                : 63;
#endif
	} s;
	struct cvmx_rst_out_ctl_s             cn73xx;
	struct cvmx_rst_out_ctl_s             cnf75xx;
};
typedef union cvmx_rst_out_ctl cvmx_rst_out_ctl_t;

/**
 * cvmx_rst_power_dbg
 */
union cvmx_rst_power_dbg {
	uint64_t u64;
	struct cvmx_rst_power_dbg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_3_63:61;
		uint64_t str:3;
#else
		uint64_t str:3;
		uint64_t reserved_3_63:61;
#endif
	} s;
	struct cvmx_rst_power_dbg_s           cn73xx;
	struct cvmx_rst_power_dbg_s           cn78xx;
	struct cvmx_rst_power_dbg_s           cn78xxp2;
	struct cvmx_rst_power_dbg_s           cnf75xx;
};

union cvmx_rst_pp_power {
	uint64_t u64;
	struct cvmx_rst_pp_power_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_48_63:16;
		uint64_t gate:48;
#else
		uint64_t gate:48;
		uint64_t reserved_48_63:16;
#endif
	} s;
	struct cvmx_rst_pp_power_cn70xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_4_63:60;
		uint64_t gate:4;
#else
		uint64_t gate:4;
		uint64_t reserved_4_63:60;
#endif
	} cn70xx;
	struct cvmx_rst_pp_power_cn70xx cn70xxp1;
	struct cvmx_rst_pp_power_cn73xx {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_16_63               : 48;
	uint64_t gate                         : 16; /**< Powerdown enable. When both a bit and the corresponding CIU_PP_RST bit are set, the core
                                                         has voltage removed to save power. In typical operation these bits are setup during
                                                         initialization and PP resets are controlled through CIU_PP_RST. These bits may only be
                                                         changed when the corresponding core is in reset using CIU_PP_RST. */
#else
	uint64_t gate                         : 16;
	uint64_t reserved_16_63               : 48;
#endif
	} cn73xx;
	struct cvmx_rst_pp_power_s            cn78xx;
	struct cvmx_rst_pp_power_s            cn78xxp2;
	struct cvmx_rst_pp_power_cn73xx       cnf75xx;
};

/**
 * cvmx_rst_ref_cntr
 *
 * Added in pass 2.
 *
 */
union cvmx_rst_ref_cntr {
	uint64_t u64;
	struct cvmx_rst_ref_cntr_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t cnt                          : 64; /**< Count. The counter is initialized to 0x0 during a cold reset and is otherwise continiously
                                                         running.
                                                         CNT is incremented every reference clock cycle (i.e. at 50 MHz). */
#else
	uint64_t cnt                          : 64;
#endif
	} s;
	struct cvmx_rst_ref_cntr_s            cn73xx;
	struct cvmx_rst_ref_cntr_s            cn78xxp2;
	struct cvmx_rst_ref_cntr_s            cnf75xx;
};
typedef union cvmx_rst_ref_cntr cvmx_rst_ref_cntr_t;

/**
 * cvmx_rst_soft_prst#
 */
union cvmx_rst_soft_prstx {
	uint64_t u64;
	struct cvmx_rst_soft_prstx_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t soft_prst:1;
#else
		uint64_t soft_prst:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_rst_soft_prstx_s          cn70xx;
	struct cvmx_rst_soft_prstx_s          cn70xxp1;
	struct cvmx_rst_soft_prstx_s          cn73xx;
	struct cvmx_rst_soft_prstx_s          cn78xx;
	struct cvmx_rst_soft_prstx_s          cn78xxp2;
	struct cvmx_rst_soft_prstx_s          cnf75xx;
};

union cvmx_rst_soft_rst {
	uint64_t u64;
	struct cvmx_rst_soft_rst_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_1_63:63;
		uint64_t soft_rst:1;
#else
		uint64_t soft_rst:1;
		uint64_t reserved_1_63:63;
#endif
	} s;
	struct cvmx_rst_soft_rst_s            cn70xx;
	struct cvmx_rst_soft_rst_s            cn70xxp1;
	struct cvmx_rst_soft_rst_s            cn73xx;
	struct cvmx_rst_soft_rst_s            cn78xx;
	struct cvmx_rst_soft_rst_s            cn78xxp2;
	struct cvmx_rst_soft_rst_s            cnf75xx;
};

/**
 * cvmx_rst_thermal_alert
 */
union cvmx_rst_thermal_alert {
	uint64_t u64;
	struct cvmx_rst_thermal_alert_s {
#ifdef __BIG_ENDIAN_BITFIELD
	uint64_t reserved_9_63                : 55;
	uint64_t trip                         : 1;  /**< This field is set by the onboard temperature sensor. For diagnostic use
                                                         only. The bit can only be cleared by a deassertion of the PLL_DC_OK pin which
                                                         completely resets the chip.
                                                         INTERNAL: Not committed-to in 73xx HRM.
                                                         Thermal trip pin. When set to 1, drives the THERMAL_TRIP_N pin active low. This field is
                                                         set by the onboard temperature sensor reaching a failure threshold or writing this bit.
                                                         The bit can only be cleared by a deassertion of the PLL_DC_OK pin which completely resets
                                                         the chip. */
	uint64_t reserved_1_7                 : 7;
	uint64_t alert                        : 1;  /**< Thermal alert status. When set to 1, indicates the temperature sensor is currently at the
                                                         failure threshold. */
#else
	uint64_t alert                        : 1;
	uint64_t reserved_1_7                 : 7;
	uint64_t trip                         : 1;
	uint64_t reserved_9_63                : 55;
#endif
	} s;
	struct cvmx_rst_thermal_alert_s       cn73xx;
	struct cvmx_rst_thermal_alert_s       cnf75xx;
};
typedef union cvmx_rst_thermal_alert cvmx_rst_thermal_alert_t;

#endif
