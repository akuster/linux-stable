/*
 * SATA glue for Cavium Octeon III SOCs.
 *
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2010 Cavium Networks
 *
 */

#include <linux/module.h>
#include <linux/dma-mapping.h>
#include <linux/platform_device.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-sata-defs.h>

static __init int octeon_stat_init(void)
{
	cvmx_sata_uctl_shim_cfg_t shim_cfg;

	/* set-up endian mode */
	shim_cfg.u64 = cvmx_read_csr(CVMX_SATA_UCTL_SHIM_CFG);
#ifdef __BIG_ENDIAN
	shim_cfg.s.dma_endian_mode = 1;
	shim_cfg.s.csr_endian_mode = 1;
#else
	shim_cfg.s.dma_endian_mode = 0;
	shim_cfg.s.csr_endian_mode = 0;
#endif
	shim_cfg.s.dma_read_cmd = 1; /* No allocate L2C */
	cvmx_write_csr(CVMX_SATA_UCTL_SHIM_CFG, shim_cfg.u64);

    return 0;
}

arch_initcall(octeon_stat_init);
