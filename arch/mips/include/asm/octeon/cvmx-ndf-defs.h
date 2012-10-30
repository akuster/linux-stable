/***********************license start***************
 * Author: Cavium Inc.
 *
 * Contact: support@cavium.com
 * This file is part of the OCTEON SDK
 *
 * Copyright (c) 2003-2012 Cavium Inc.
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

#ifndef __CVMX_NDF_DEFS_H__
#define __CVMX_NDF_DEFS_H__

#define CVMX_NDF_BT_PG_INFO (CVMX_ADD_IO_SEG(0x0001070001000018ull))
#define CVMX_NDF_CMD (CVMX_ADD_IO_SEG(0x0001070001000000ull))
#define CVMX_NDF_DRBELL (CVMX_ADD_IO_SEG(0x0001070001000030ull))
#define CVMX_NDF_ECC_CNT (CVMX_ADD_IO_SEG(0x0001070001000010ull))
#define CVMX_NDF_INT (CVMX_ADD_IO_SEG(0x0001070001000020ull))
#define CVMX_NDF_INT_EN (CVMX_ADD_IO_SEG(0x0001070001000028ull))
#define CVMX_NDF_MISC (CVMX_ADD_IO_SEG(0x0001070001000008ull))
#define CVMX_NDF_ST_REG (CVMX_ADD_IO_SEG(0x0001070001000038ull))

union cvmx_ndf_bt_pg_info {
	uint64_t u64;
	struct cvmx_ndf_bt_pg_info_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_11_63:53;
		uint64_t t_mult:4;
		uint64_t adr_cyc:4;
		uint64_t size:3;
#else
		uint64_t size:3;
		uint64_t adr_cyc:4;
		uint64_t t_mult:4;
		uint64_t reserved_11_63:53;
#endif
	} s;
	struct cvmx_ndf_bt_pg_info_s cn52xx;
	struct cvmx_ndf_bt_pg_info_s cn63xx;
	struct cvmx_ndf_bt_pg_info_s cn63xxp1;
	struct cvmx_ndf_bt_pg_info_s cn66xx;
	struct cvmx_ndf_bt_pg_info_s cn68xx;
	struct cvmx_ndf_bt_pg_info_s cn68xxp1;
};

union cvmx_ndf_cmd {
	uint64_t u64;
	struct cvmx_ndf_cmd_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t nf_cmd:64;
#else
		uint64_t nf_cmd:64;
#endif
	} s;
	struct cvmx_ndf_cmd_s cn52xx;
	struct cvmx_ndf_cmd_s cn63xx;
	struct cvmx_ndf_cmd_s cn63xxp1;
	struct cvmx_ndf_cmd_s cn66xx;
	struct cvmx_ndf_cmd_s cn68xx;
	struct cvmx_ndf_cmd_s cn68xxp1;
};

union cvmx_ndf_drbell {
	uint64_t u64;
	struct cvmx_ndf_drbell_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_8_63:56;
		uint64_t cnt:8;
#else
		uint64_t cnt:8;
		uint64_t reserved_8_63:56;
#endif
	} s;
	struct cvmx_ndf_drbell_s cn52xx;
	struct cvmx_ndf_drbell_s cn63xx;
	struct cvmx_ndf_drbell_s cn63xxp1;
	struct cvmx_ndf_drbell_s cn66xx;
	struct cvmx_ndf_drbell_s cn68xx;
	struct cvmx_ndf_drbell_s cn68xxp1;
};

union cvmx_ndf_ecc_cnt {
	uint64_t u64;
	struct cvmx_ndf_ecc_cnt_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_32_63:32;
		uint64_t xor_ecc:24;
		uint64_t ecc_err:8;
#else
		uint64_t ecc_err:8;
		uint64_t xor_ecc:24;
		uint64_t reserved_32_63:32;
#endif
	} s;
	struct cvmx_ndf_ecc_cnt_s cn52xx;
	struct cvmx_ndf_ecc_cnt_s cn63xx;
	struct cvmx_ndf_ecc_cnt_s cn63xxp1;
	struct cvmx_ndf_ecc_cnt_s cn66xx;
	struct cvmx_ndf_ecc_cnt_s cn68xx;
	struct cvmx_ndf_ecc_cnt_s cn68xxp1;
};

union cvmx_ndf_int {
	uint64_t u64;
	struct cvmx_ndf_int_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t ovrf:1;
		uint64_t ecc_mult:1;
		uint64_t ecc_1bit:1;
		uint64_t sm_bad:1;
		uint64_t wdog:1;
		uint64_t full:1;
		uint64_t empty:1;
#else
		uint64_t empty:1;
		uint64_t full:1;
		uint64_t wdog:1;
		uint64_t sm_bad:1;
		uint64_t ecc_1bit:1;
		uint64_t ecc_mult:1;
		uint64_t ovrf:1;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_ndf_int_s cn52xx;
	struct cvmx_ndf_int_s cn63xx;
	struct cvmx_ndf_int_s cn63xxp1;
	struct cvmx_ndf_int_s cn66xx;
	struct cvmx_ndf_int_s cn68xx;
	struct cvmx_ndf_int_s cn68xxp1;
};

union cvmx_ndf_int_en {
	uint64_t u64;
	struct cvmx_ndf_int_en_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_7_63:57;
		uint64_t ovrf:1;
		uint64_t ecc_mult:1;
		uint64_t ecc_1bit:1;
		uint64_t sm_bad:1;
		uint64_t wdog:1;
		uint64_t full:1;
		uint64_t empty:1;
#else
		uint64_t empty:1;
		uint64_t full:1;
		uint64_t wdog:1;
		uint64_t sm_bad:1;
		uint64_t ecc_1bit:1;
		uint64_t ecc_mult:1;
		uint64_t ovrf:1;
		uint64_t reserved_7_63:57;
#endif
	} s;
	struct cvmx_ndf_int_en_s cn52xx;
	struct cvmx_ndf_int_en_s cn63xx;
	struct cvmx_ndf_int_en_s cn63xxp1;
	struct cvmx_ndf_int_en_s cn66xx;
	struct cvmx_ndf_int_en_s cn68xx;
	struct cvmx_ndf_int_en_s cn68xxp1;
};

union cvmx_ndf_misc {
	uint64_t u64;
	struct cvmx_ndf_misc_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_28_63:36;
		uint64_t mb_dis:1;
		uint64_t nbr_hwm:3;
		uint64_t wait_cnt:6;
		uint64_t fr_byt:11;
		uint64_t rd_done:1;
		uint64_t rd_val:1;
		uint64_t rd_cmd:1;
		uint64_t bt_dma:1;
		uint64_t bt_dis:1;
		uint64_t ex_dis:1;
		uint64_t rst_ff:1;
#else
		uint64_t rst_ff:1;
		uint64_t ex_dis:1;
		uint64_t bt_dis:1;
		uint64_t bt_dma:1;
		uint64_t rd_cmd:1;
		uint64_t rd_val:1;
		uint64_t rd_done:1;
		uint64_t fr_byt:11;
		uint64_t wait_cnt:6;
		uint64_t nbr_hwm:3;
		uint64_t mb_dis:1;
		uint64_t reserved_28_63:36;
#endif
	} s;
	struct cvmx_ndf_misc_cn52xx {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_27_63:37;
		uint64_t nbr_hwm:3;
		uint64_t wait_cnt:6;
		uint64_t fr_byt:11;
		uint64_t rd_done:1;
		uint64_t rd_val:1;
		uint64_t rd_cmd:1;
		uint64_t bt_dma:1;
		uint64_t bt_dis:1;
		uint64_t ex_dis:1;
		uint64_t rst_ff:1;
#else
		uint64_t rst_ff:1;
		uint64_t ex_dis:1;
		uint64_t bt_dis:1;
		uint64_t bt_dma:1;
		uint64_t rd_cmd:1;
		uint64_t rd_val:1;
		uint64_t rd_done:1;
		uint64_t fr_byt:11;
		uint64_t wait_cnt:6;
		uint64_t nbr_hwm:3;
		uint64_t reserved_27_63:37;
#endif
	} cn52xx;
	struct cvmx_ndf_misc_s cn63xx;
	struct cvmx_ndf_misc_s cn63xxp1;
	struct cvmx_ndf_misc_s cn66xx;
	struct cvmx_ndf_misc_s cn68xx;
	struct cvmx_ndf_misc_s cn68xxp1;
};

union cvmx_ndf_st_reg {
	uint64_t u64;
	struct cvmx_ndf_st_reg_s {
#ifdef __BIG_ENDIAN_BITFIELD
		uint64_t reserved_16_63:48;
		uint64_t exe_idle:1;
		uint64_t exe_sm:4;
		uint64_t bt_sm:4;
		uint64_t rd_ff_bad:1;
		uint64_t rd_ff:2;
		uint64_t main_bad:1;
		uint64_t main_sm:3;
#else
		uint64_t main_sm:3;
		uint64_t main_bad:1;
		uint64_t rd_ff:2;
		uint64_t rd_ff_bad:1;
		uint64_t bt_sm:4;
		uint64_t exe_sm:4;
		uint64_t exe_idle:1;
		uint64_t reserved_16_63:48;
#endif
	} s;
	struct cvmx_ndf_st_reg_s cn52xx;
	struct cvmx_ndf_st_reg_s cn63xx;
	struct cvmx_ndf_st_reg_s cn63xxp1;
	struct cvmx_ndf_st_reg_s cn66xx;
	struct cvmx_ndf_st_reg_s cn68xx;
	struct cvmx_ndf_st_reg_s cn68xxp1;
};

#endif
