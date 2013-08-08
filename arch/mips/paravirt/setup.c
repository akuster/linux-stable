/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2013 Cavium, Inc.
 */

#include <linux/kernel.h>
<<<<<<< HEAD
#include <linux/kvm_para.h>

#include <asm/reboot.h>
#include <asm/bootinfo.h>
=======

#include <asm/bootinfo.h>
#include <asm/mipsregs.h>
>>>>>>> 8b00ae8... MIPS: Add new system 'paravirt'.
#include <asm/smp-ops.h>
#include <asm/time.h>

extern struct plat_smp_ops paravirt_smp_ops;

const char *get_system_type(void)
{
<<<<<<< HEAD
	return "MIPS Para-Virtualized Guest";
=======
	return "MIPS Para-Virtulized Guest";
>>>>>>> 8b00ae8... MIPS: Add new system 'paravirt'.
}

void __init plat_time_init(void)
{
<<<<<<< HEAD
	mips_hpt_frequency = kvm_hypercall0(KVM_HC_MIPS_GET_CLOCK_FREQ);
=======
	mips_hpt_frequency = hypcall0(2 /* get cp0 clock freq. */);
>>>>>>> 8b00ae8... MIPS: Add new system 'paravirt'.

	preset_lpj = mips_hpt_frequency / (2 * HZ);
}

<<<<<<< HEAD
static void pv_machine_halt(void)
{
	kvm_hypercall0(KVM_HC_MIPS_EXIT_VM);
}

/*
=======
/**
>>>>>>> 8b00ae8... MIPS: Add new system 'paravirt'.
 * Early entry point for arch setup
 */
void __init prom_init(void)
{
	int i;
	int argc = fw_arg0;
	char **argv = (char **)fw_arg1;

#ifdef CONFIG_32BIT
	set_io_port_base(KSEG1ADDR(0x1e000000));
#else /* CONFIG_64BIT */
	set_io_port_base(PHYS_TO_XKSEG_UNCACHED(0x1e000000));
#endif

	for (i = 0; i < argc; i++) {
		strlcat(arcs_cmdline, argv[i], COMMAND_LINE_SIZE);
		if (i < argc - 1)
			strlcat(arcs_cmdline, " ", COMMAND_LINE_SIZE);
	}
<<<<<<< HEAD
	_machine_halt = pv_machine_halt;
=======
>>>>>>> 8b00ae8... MIPS: Add new system 'paravirt'.
	register_smp_ops(&paravirt_smp_ops);
}

void __init plat_mem_setup(void)
{
	/* Do nothing, the "mem=???" parser handles our memory. */
}

void __init prom_free_prom_memory(void)
{
}
