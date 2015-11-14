/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2004-2007 Cavium Networks
 * Copyright (C) 2008, 2009 Wind River Systems
 *   written by Ralf Baechle <ralf@linux-mips.org>
 */
#include <linux/compiler.h>
#include <linux/vmalloc.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/console.h>
#include <linux/delay.h>
#include <linux/export.h>
#include <linux/interrupt.h>
#include <linux/io.h>
#include <linux/serial.h>
#include <linux/smp.h>
#include <linux/types.h>
#include <linux/string.h>	/* for memset */
#include <linux/tty.h>
#include <linux/time.h>
#include <linux/platform_device.h>
#include <linux/serial_core.h>
#include <linux/serial_8250.h>
#include <linux/of_fdt.h>
#include <linux/libfdt.h>
#include <linux/kexec.h>
#include <linux/initrd.h>

#include <asm/processor.h>
#include <asm/reboot.h>
#include <asm/smp-ops.h>
#include <asm/irq_cpu.h>
#include <asm/mipsregs.h>
#include <asm/bootinfo.h>
#include <asm/sections.h>
#include <asm/time.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/octeon-boot-info.h>
#include <asm/octeon/pci-octeon.h>
#include <asm/octeon/cvmx-mio-defs.h>

#include <asm/octeon/cvmx-qlm.h>

extern struct plat_smp_ops octeon_smp_ops;

static unsigned long long MAX_MEMORY = 512ull << 20;

struct octeon_boot_descriptor *octeon_boot_desc_ptr;

struct cvmx_bootinfo *octeon_bootinfo;
EXPORT_SYMBOL(octeon_bootinfo);

static unsigned long long RESERVE_LOW_MEM = 0ull;
#ifdef CONFIG_KEXEC
#ifdef CONFIG_SMP
/*
 * Wait for relocation code is prepared and send
 * secondary CPUs to spin until kernel is relocated.
 */
static void octeon_kexec_smp_down(void *ignored)
{
	int cpu = smp_processor_id();

	local_irq_disable();
	set_cpu_online(cpu, false);
	while (!atomic_read(&kexec_ready_to_reboot))
		cpu_relax();

	asm volatile (
	"	sync						\n"
	"	synci	($0)					\n");

	relocated_kexec_smp_wait(NULL);
}
#endif

static int octeon_kexec_prepare(struct kimage *image)
{
	int i;
	char *bootloader = "kexec";

	octeon_boot_desc_ptr->argc = 0;
	for (i = 0; i < image->nr_segments; i++) {
		if (!strncmp(bootloader, (char *)image->segment[i].buf,
				strlen(bootloader))) {
			/*
			 * convert command line string to array
			 * of parameters (as bootloader does).
			 */
			int argc = 0, offt;
			char *str = (char *)image->segment[i].buf;
			char *ptr = strchr(str, ' ');
			while (ptr && (OCTEON_ARGV_MAX_ARGS > argc)) {
				*ptr = '\0';
				if (ptr[1] != ' ') {
					offt = (int)(ptr - str + 1);
					octeon_boot_desc_ptr->argv[argc] =
						image->segment[i].mem + offt;
					argc++;
				}
				ptr = strchr(ptr + 1, ' ');
			}
			octeon_boot_desc_ptr->argc = argc;
			break;
		}
	}
	return 0;
}

static void octeon_generic_shutdown(void)
{
#ifdef CONFIG_SMP
	int cpu;
	secondary_kexec_args[2] = 0UL; /* running on secondary cpu */
	secondary_kexec_args[3] = (unsigned long)octeon_boot_desc_ptr;
	/* disable watchdogs */
	for_each_online_cpu(cpu)
		cvmx_write_csr(CVMX_CIU_WDOGX(cpu_logical_map(cpu)), 0);
#else
	cvmx_write_csr(CVMX_CIU_WDOGX(cvmx_get_core_num()), 0);
#endif
	kexec_args[2] = 1UL; /* running on octeon_main_processor */
	kexec_args[3] = (unsigned long)octeon_boot_desc_ptr;
}

static void octeon_shutdown(void)
{
	octeon_generic_shutdown();
#ifdef CONFIG_SMP
	smp_call_function(octeon_kexec_smp_down, NULL, 0);
	smp_wmb();
	while (num_online_cpus() > 1) {
		cpu_relax();
		mdelay(1);
	}
#endif
}

static void octeon_crash_shutdown(struct pt_regs *regs)
{
	octeon_generic_shutdown();
	default_machine_crash_shutdown(regs);
}

#endif /* CONFIG_KEXEC */

#ifdef CONFIG_CAVIUM_RESERVE32
uint64_t octeon_reserve32_memory;
EXPORT_SYMBOL(octeon_reserve32_memory);
#endif

#ifdef CONFIG_KEXEC
/* crashkernel cmdline parameter is parsed _after_ memory setup
 * we also parse it here (workaround for EHB5200) */
static uint64_t crashk_size, crashk_base;
#endif

static int octeon_uart;

extern asmlinkage void handle_int(void);

/*
 * If set to a non-zero value, the bootloader entry point for
 * HOTPLUG_CPU and other tricks.
 */
u64 octeon_bootloader_entry_addr;
EXPORT_SYMBOL(octeon_bootloader_entry_addr);

/* If an initrd named block is specified, its name goes here. */
static char __initdata rd_name[64];

/* Up to four blocks may be specified. */
static char __initdata named_memory_blocks[4][CVMX_BOOTMEM_NAME_LEN];

/**
 * Return non zero if we are currently running in the Octeon simulator
 *
 * Returns
 */
int octeon_is_simulation(void)
{
	return octeon_bootinfo->board_type == CVMX_BOARD_TYPE_SIM;
}
EXPORT_SYMBOL(octeon_is_simulation);

/**
 * Return true if Octeon is in PCI Host mode. This means
 * Linux can control the PCI bus.
 *
 * Returns Non zero if Octeon in host mode.
 */
int octeon_is_pci_host(void)
{
#ifdef CONFIG_PCI
	return octeon_bootinfo->config_flags & CVMX_BOOTINFO_CFG_FLAG_PCI_HOST;
#else
	return 0;
#endif
}

/**
 * Get the clock rate of Octeon
 *
 * Returns Clock rate in HZ
 */
uint64_t octeon_get_clock_rate(void)
{
	struct cvmx_sysinfo *sysinfo = cvmx_sysinfo_get();

	return sysinfo->cpu_clock_hz;
}
EXPORT_SYMBOL(octeon_get_clock_rate);

static u64 octeon_io_clock_rate;

u64 octeon_get_io_clock_rate(void)
{
	return octeon_io_clock_rate;
}
EXPORT_SYMBOL(octeon_get_io_clock_rate);


/**
 * Write to the LCD display connected to the bootbus. This display
 * exists on most Cavium evaluation boards. If it doesn't exist, then
 * this function doesn't do anything.
 *
 * @s:	    String to write
 */
void octeon_write_lcd(const char *s)
{
	if (octeon_bootinfo->led_display_base_addr) {
		void __iomem *lcd_address =
			ioremap_nocache(octeon_bootinfo->led_display_base_addr,
					8);
		int i;
		for (i = 0; i < 8; i++, s++) {
			if (*s)
				iowrite8(*s, lcd_address + i);
			else
				iowrite8(' ', lcd_address + i);
		}
		iounmap(lcd_address);
	}
}

/**
 * Return the console uart passed by the bootloader
 *
 * Returns uart	  (0 or 1)
 */
int octeon_get_boot_uart(void)
{
	int uart;
#ifdef CONFIG_CAVIUM_OCTEON_2ND_KERNEL
	uart = 1;
#else
	uart = (octeon_boot_desc_ptr->flags & OCTEON_BL_FLAG_CONSOLE_UART1) ?
		1 : 0;
#endif
	return uart;
}

/**
 * Get the coremask Linux was booted on.
 *
 * Returns Core mask
 */
int octeon_get_boot_coremask(void)
{
	return octeon_boot_desc_ptr->core_mask;
}

/**
 * Check the hardware BIST results for a CPU
 */
void octeon_check_cpu_bist(void)
{
	const int coreid = cvmx_get_core_num();
	unsigned long long mask;
	unsigned long long bist_val;

	/* Check BIST results for COP0 registers */
	mask = 0x1f00000000ull;
	bist_val = read_octeon_c0_icacheerr();
	if (bist_val & mask)
		pr_err("Core%d BIST Failure: CacheErr(icache) = 0x%llx\n",
		       coreid, bist_val);

	bist_val = read_octeon_c0_dcacheerr();
	if (bist_val & 1)
		pr_err("Core%d L1 Dcache parity error: "
		       "CacheErr(dcache) = 0x%llx\n",
		       coreid, bist_val);

	mask = 0xfc00000000000000ull;
	bist_val = read_c0_cvmmemctl();
	if (bist_val & mask)
		pr_err("Core%d BIST Failure: COP0_CVM_MEM_CTL = 0x%llx\n",
		       coreid, bist_val);

	write_octeon_c0_dcacheerr(0);
}

/**
 * Reboot Octeon
 *
 * @command: Command to pass to the bootloader. Currently ignored.
 */
static void octeon_restart(char *command)
{
	/* Disable all watchdogs before soft reset. They don't get cleared */
#ifdef CONFIG_SMP
	int cpu;
	for_each_online_cpu(cpu)
		cvmx_write_csr(CVMX_CIU_WDOGX(cpu_logical_map(cpu)), 0);
#else
	cvmx_write_csr(CVMX_CIU_WDOGX(cvmx_get_core_num()), 0);
#endif

	mb();
	while (1)
		cvmx_write_csr(CVMX_CIU_SOFT_RST, 1);
}


/**
 * Permanently stop a core.
 *
 * @arg: Ignored.
 */
static void octeon_kill_core(void *arg)
{
	if (octeon_is_simulation())
		/* A break instruction causes the simulator stop a core */
		asm volatile ("break" ::: "memory");

	local_irq_disable();
	/* Disable watchdog on this core. */
	cvmx_write_csr(CVMX_CIU_WDOGX(cvmx_get_core_num()), 0);
	/* Spin in a low power mode. */
	while (true)
		asm volatile ("wait" ::: "memory");
}


/**
 * Halt the system
 */
static void octeon_halt(void)
{
	smp_call_function(octeon_kill_core, NULL, 0);

	switch (octeon_bootinfo->board_type) {
	case CVMX_BOARD_TYPE_NAC38:
		/* Driving a 1 to GPIO 12 shuts off this board */
		cvmx_write_csr(CVMX_GPIO_BIT_CFGX(12), 1);
		cvmx_write_csr(CVMX_GPIO_TX_SET, 0x1000);
		break;
	default:
		octeon_write_lcd("PowerOff");
		break;
	}

	octeon_kill_core(NULL);
}

static char __read_mostly octeon_system_type[80];

static int __init init_octeon_system_type(void)
{
	snprintf(octeon_system_type, sizeof(octeon_system_type), "%s (%s)",
		cvmx_board_type_to_string(octeon_bootinfo->board_type),
		octeon_model_get_string(read_c0_prid()));

	return 0;
}
early_initcall(init_octeon_system_type);

/**
 * Return a string representing the system type
 *
 * Returns
 */
const char *octeon_board_type_string(void)
{
	return octeon_system_type;
}

const char *get_system_type(void)
	__attribute__ ((alias("octeon_board_type_string")));

void octeon_user_io_init(void)
{
	union octeon_cvmemctl cvmmemctl;
	union cvmx_iob_fau_timeout fau_timeout;
	union cvmx_pow_nw_tim nm_tim;

	/* Get the current settings for CP0_CVMMEMCTL_REG */
	cvmmemctl.u64 = read_c0_cvmmemctl();
	/* R/W If set, marked write-buffer entries time out the same
	 * as as other entries; if clear, marked write-buffer entries
	 * use the maximum timeout. */
	cvmmemctl.s.dismarkwblongto = 1;
	/* R/W If set, a merged store does not clear the write-buffer
	 * entry timeout state. */
	cvmmemctl.s.dismrgclrwbto = 0;
	/* R/W Two bits that are the MSBs of the resultant CVMSEG LM
	 * word location for an IOBDMA. The other 8 bits come from the
	 * SCRADDR field of the IOBDMA. */
	cvmmemctl.s.iobdmascrmsb = 0;
	/* R/W If set, SYNCWS and SYNCS only order marked stores; if
	 * clear, SYNCWS and SYNCS only order unmarked
	 * stores. SYNCWSMARKED has no effect when DISSYNCWS is
	 * set. */
	cvmmemctl.s.syncwsmarked = 0;
	/* R/W If set, SYNCWS acts as SYNCW and SYNCS acts as SYNC. */
	cvmmemctl.s.dissyncws = 0;
	/* R/W If set, no stall happens on write buffer full. */
	if (OCTEON_IS_MODEL(OCTEON_CN38XX_PASS2))
		cvmmemctl.s.diswbfst = 1;
	else
		cvmmemctl.s.diswbfst = 0;
	/* R/W If set (and SX set), supervisor-level loads/stores can
	 * use XKPHYS addresses with <48>==0 */
	cvmmemctl.s.xkmemenas = 0;

	/* R/W If set (and UX set), user-level loads/stores can use
	 * XKPHYS addresses with VA<48>==0 */
	cvmmemctl.s.xkmemenau = 0;

	/* R/W If set (and SX set), supervisor-level loads/stores can
	 * use XKPHYS addresses with VA<48>==1 */
	cvmmemctl.s.xkioenas = 0;

	/* R/W If set (and UX set), user-level loads/stores can use
	 * XKPHYS addresses with VA<48>==1 */
	cvmmemctl.s.xkioenau = 0;

	/* R/W If set, all stores act as SYNCW (NOMERGE must be set
	 * when this is set) RW, reset to 0. */
	cvmmemctl.s.allsyncw = 0;

	/* R/W If set, no stores merge, and all stores reach the
	 * coherent bus in order. */
	cvmmemctl.s.nomerge = 0;
	/* R/W Selects the bit in the counter used for DID time-outs 0
	 * = 231, 1 = 230, 2 = 229, 3 = 214. Actual time-out is
	 * between 1x and 2x this interval. For example, with
	 * DIDTTO=3, expiration interval is between 16K and 32K. */
	cvmmemctl.s.didtto = 0;
	/* R/W If set, the (mem) CSR clock never turns off. */
	cvmmemctl.s.csrckalwys = 0;
	/* R/W If set, mclk never turns off. */
	cvmmemctl.s.mclkalwys = 0;
	/* R/W Selects the bit in the counter used for write buffer
	 * flush time-outs (WBFLT+11) is the bit position in an
	 * internal counter used to determine expiration. The write
	 * buffer expires between 1x and 2x this interval. For
	 * example, with WBFLT = 0, a write buffer expires between 2K
	 * and 4K cycles after the write buffer entry is allocated. */
	cvmmemctl.s.wbfltime = 0;
	/* R/W If set, do not put Istream in the L2 cache. */
	cvmmemctl.s.istrnol2 = 0;

	/*
	 * R/W The write buffer threshold. As per erratum Core-14752
	 * for CN63XX, a sc/scd might fail if the write buffer is
	 * full.  Lowering WBTHRESH greatly lowers the chances of the
	 * write buffer ever being full and triggering the erratum.
	 */
	if (OCTEON_IS_MODEL(OCTEON_CN63XX_PASS1_X))
		cvmmemctl.s.wbthresh = 4;
	else
		cvmmemctl.s.wbthresh = 10;

	/* R/W If set, CVMSEG is available for loads/stores in
	 * kernel/debug mode. */
#if CONFIG_CAVIUM_OCTEON_CVMSEG_SIZE > 0
	cvmmemctl.s.cvmsegenak = 1;
#else
	cvmmemctl.s.cvmsegenak = 0;
#endif
	/* R/W If set, CVMSEG is available for loads/stores in
	 * supervisor mode. */
	cvmmemctl.s.cvmsegenas = 0;
	/* R/W If set, CVMSEG is available for loads/stores in user
	 * mode. */
	cvmmemctl.s.cvmsegenau = 0;

	write_c0_cvmmemctl(cvmmemctl.u64);

	/* Setup of CVMSEG is done in kernel-entry-init.h */
	if (smp_processor_id() == 0)
		pr_notice("CVMSEG size: %d cache lines (%d bytes)\n",
			  CONFIG_CAVIUM_OCTEON_CVMSEG_SIZE,
			  CONFIG_CAVIUM_OCTEON_CVMSEG_SIZE * 128);

	/* Set a default for the hardware timeouts */
	fau_timeout.u64 = 0;
	fau_timeout.s.tout_val = 0xfff;
	/* Disable tagwait FAU timeout */
	fau_timeout.s.tout_enb = 0;
	cvmx_write_csr(CVMX_IOB_FAU_TIMEOUT, fau_timeout.u64);

	nm_tim.u64 = 0;
	/* 4096 cycles */
	nm_tim.s.nw_tim = 3;
	cvmx_write_csr(CVMX_POW_NW_TIM, nm_tim.u64);

	write_octeon_c0_icacheerr(0);
	write_c0_derraddr1(0);
}

/*
 * Octeon-specific system calls
 */

/* the caller must hold RCU read lock */
static int is_task_and_current_same(struct task_struct *t)
{
	const struct cred *cred = current_cred(), *tcred;

	tcred = __task_cred(t);
	if ((cred->euid ^ tcred->suid) &&
	    (cred->euid ^ tcred->uid) &&
	    (cred->uid  ^ tcred->suid) &&
	    (cred->uid  ^ tcred->uid)) {
		return 0;
	}
	return 1;
}


static void octeon_prepare_arch_switch(struct task_struct *next)
{
#if defined(CONFIG_CAVIUM_OCTEON_USER_MEM_PER_PROCESS) || \
	defined(CONFIG_CAVIUM_OCTEON_USER_IO_PER_PROCESS)
	struct task_struct *group_leader = next->group_leader;
	union octeon_cvmemctl cvmmemctl;
	cvmmemctl.u64 = read_c0_cvmmemctl();

#if defined(CONFIG_CAVIUM_OCTEON_USER_MEM_PER_PROCESS)
	cvmmemctl.s.xkmemenau = test_tsk_thread_flag(group_leader, TIF_XKPHYS_MEM_EN) ? 1 : 0;
#endif

#if defined(CONFIG_CAVIUM_OCTEON_USER_IO_PER_PROCESS)
	cvmmemctl.s.xkioenau = test_tsk_thread_flag(group_leader, TIF_XKPHYS_IO_EN) ? 1 : 0;
#endif
	write_c0_cvmmemctl(cvmmemctl.u64);
#endif
}

static struct task_struct *xkphys_get_task(pid_t pid)
{
	struct task_struct *task, *group_leader;

	rcu_read_lock();
	task = find_task_by_vpid(pid);
	if (!task) {
		read_unlock(&tasklist_lock);
		return NULL;
	}
	group_leader = task->group_leader;
	get_task_struct(group_leader);

	rcu_read_unlock();
	return group_leader;
}


int xkphys_usermem_read(long pid)
{
	struct task_struct *task;
	int io, mem;

	task = xkphys_get_task(pid);
	if (!task)
		return -ESRCH;
#if defined(CONFIG_CAVIUM_OCTEON_USER_IO)
	io = 1;
#elif defined(CONFIG_CAVIUM_OCTEON_USER_IO_PER_PROCESS)
	io = test_tsk_thread_flag(task, TIF_XKPHYS_IO_EN);
#else
	io = 0;
#endif

#if defined(CONFIG_CAVIUM_OCTEON_USER_MEM)
	mem = 1;
#elif defined(CONFIG_CAVIUM_OCTEON_USER_MEM_PER_PROCESS)
	mem = test_tsk_thread_flag(task, TIF_XKPHYS_MEM_EN);
#else
	mem = 0;
#endif
	put_task_struct(task);
	return (io ? 2 : 0) | (mem ? 1 : 0);
}

int xkphys_usermem_write(long pid, int value)
{
	struct task_struct *task, *group_leader;
	int permission_ok = 0;

#if defined(CONFIG_CAVIUM_OCTEON_USER_IO)
	if ((value & 2) == 0)
		return -EINVAL;
#elif !defined(CONFIG_CAVIUM_OCTEON_USER_IO_PER_PROCESS)
	if (value & 2)
		return -EINVAL;
#endif
#if defined(CONFIG_CAVIUM_OCTEON_USER_MEM)
	if ((value & 1) == 0)
		return -EINVAL;
#elif !defined(CONFIG_CAVIUM_OCTEON_USER_MEM_PER_PROCESS)
	if (value & 1)
		return -EINVAL;
#endif

	task = xkphys_get_task(pid);
	group_leader = task->group_leader;

	if (!task)
		return -ESRCH;

	rcu_read_lock();
	/* Allow XKPHYS disable of other tasks from the current user*/
	if (value == 0 && is_task_and_current_same(task))
		permission_ok = 1;
	rcu_read_unlock();

	if (capable(CAP_SYS_RAWIO))
		permission_ok = 1;

	if (!permission_ok) {
		put_task_struct(task);
		return -EPERM;
	}

	if (value & 1)
		set_tsk_thread_flag(group_leader, TIF_XKPHYS_MEM_EN);
	else
		clear_tsk_thread_flag(group_leader, TIF_XKPHYS_MEM_EN);

	if (value & 2)
		set_tsk_thread_flag(group_leader, TIF_XKPHYS_IO_EN);
	else
		clear_tsk_thread_flag(group_leader, TIF_XKPHYS_IO_EN);

	preempt_disable();

	/*
	 * If we are adjusting ourselves, make the change effective
	 * immediatly.
	 */
	if (group_leader == current->group_leader)
		octeon_prepare_arch_switch(current);

	preempt_enable();

	put_task_struct(task);
	return 0;
}

/**
 * Early entry point for arch setup
 */
void __init prom_init(void)
{
	struct cvmx_sysinfo *sysinfo;
	const char *arg;
	char *p;
	struct linux_app_boot_info *labi;
	int i;
	int argc;
#ifdef CONFIG_CAVIUM_RESERVE32
	int64_t addr = -1;
#endif
	/*
	 * The bootloader passes a pointer to the boot descriptor in
	 * $a3, this is available as fw_arg3.
	 */
	octeon_boot_desc_ptr = (struct octeon_boot_descriptor *)fw_arg3;
	octeon_bootinfo = phys_to_virt(octeon_boot_desc_ptr->cvmx_desc_vaddr);
	cvmx_bootmem_init(octeon_bootinfo->phy_mem_desc_addr);

	sysinfo = cvmx_sysinfo_get();
	memset(sysinfo, 0, sizeof(*sysinfo));
	sysinfo->system_dram_size = octeon_bootinfo->dram_size << 20;

	sysinfo->phy_mem_desc_addr = (u64)phys_to_virt(octeon_bootinfo->phy_mem_desc_addr);

	if ((octeon_bootinfo->major_version > 1) ||
	    (octeon_bootinfo->major_version == 1 &&
	     octeon_bootinfo->minor_version >= 4))
		cvmx_coremask_copy(&sysinfo->core_mask,
				   &octeon_bootinfo->ext_core_mask);
	else
		cvmx_coremask_set64(&sysinfo->core_mask,
				    octeon_bootinfo->core_mask);

	sysinfo->exception_base_addr = octeon_bootinfo->exception_base_addr;
	sysinfo->cpu_clock_hz = octeon_bootinfo->eclock_hz;
	sysinfo->dram_data_rate_hz = octeon_bootinfo->dclock_hz * 2;
	sysinfo->board_type = octeon_bootinfo->board_type;
	sysinfo->board_rev_major = octeon_bootinfo->board_rev_major;
	sysinfo->board_rev_minor = octeon_bootinfo->board_rev_minor;
	memcpy(sysinfo->mac_addr_base, octeon_bootinfo->mac_addr_base,
	       sizeof(sysinfo->mac_addr_base));
	sysinfo->mac_addr_count = octeon_bootinfo->mac_addr_count;
	memcpy(sysinfo->board_serial_number,
	       octeon_bootinfo->board_serial_number,
	       sizeof(sysinfo->board_serial_number));
	sysinfo->compact_flash_common_base_addr =
		octeon_bootinfo->compact_flash_common_base_addr;
	sysinfo->compact_flash_attribute_base_addr =
		octeon_bootinfo->compact_flash_attribute_base_addr;
	sysinfo->led_display_base_addr = octeon_bootinfo->led_display_base_addr;
	sysinfo->dfa_ref_clock_hz = octeon_bootinfo->dfa_ref_clock_hz;
	sysinfo->bootloader_config_flags = octeon_bootinfo->config_flags;

	if (OCTEON_IS_OCTEON2() || OCTEON_IS_OCTEON3()) {
		/* I/O clock runs at a different rate than the CPU. */
		union cvmx_mio_rst_boot rst_boot;
		rst_boot.u64 = cvmx_read_csr(CVMX_MIO_RST_BOOT);
		octeon_io_clock_rate = 50000000 * rst_boot.s.pnr_mul;
	} else {
		octeon_io_clock_rate = sysinfo->cpu_clock_hz;
	}

	/* init octeon feature map */
	octeon_feature_init();

	/*
	 * Only enable the LED controller if we're running on a CN38XX, CN58XX,
	 * or CN56XX. The CN30XX and CN31XX don't have an LED controller.
	 */
	if (!octeon_is_simulation() &&
	    octeon_has_feature(OCTEON_FEATURE_LED_CONTROLLER)) {
		cvmx_write_csr(CVMX_LED_EN, 0);
		cvmx_write_csr(CVMX_LED_PRT, 0);
		cvmx_write_csr(CVMX_LED_DBG, 0);
		cvmx_write_csr(CVMX_LED_PRT_FMT, 0);
		cvmx_write_csr(CVMX_LED_UDD_CNTX(0), 32);
		cvmx_write_csr(CVMX_LED_UDD_CNTX(1), 32);
		cvmx_write_csr(CVMX_LED_UDD_DATX(0), 0);
		cvmx_write_csr(CVMX_LED_UDD_DATX(1), 0);
		cvmx_write_csr(CVMX_LED_EN, 1);
	}
#ifdef CONFIG_CAVIUM_RESERVE32
	/*
	 * We need to temporarily allocate all memory in the reserve32
	 * region. This makes sure the kernel doesn't allocate this
	 * memory when it is getting memory from the
	 * bootloader. Later, after the memory allocations are
	 * complete, the reserve32 will be freed.
	 *
	 * Allocate memory for RESERVED32 aligned on 2MB boundary. This
	 * is in case we later use hugetlb entries with it.
	 */
	addr = cvmx_bootmem_phy_named_block_alloc(CONFIG_CAVIUM_RESERVE32 << 20,
						0, 0, 2 << 20,
						"CAVIUM_RESERVE32", 0);
	if (addr < 0)
		pr_err("Failed to allocate CAVIUM_RESERVE32 memory area\n");
	else
		octeon_reserve32_memory = addr;
#endif

#ifdef CONFIG_CAVIUM_OCTEON_LOCK_L2
	if (cvmx_read_csr(CVMX_L2D_FUS3) & (3ull << 34)) {
		pr_info("Skipping L2 locking due to reduced L2 cache size\n");
	} else {
		uint32_t __maybe_unused ebase = read_c0_ebase() & 0x3ffff000;
#ifdef CONFIG_CAVIUM_OCTEON_LOCK_L2_TLB
		/* TLB refill */
		cvmx_l2c_lock_mem_region(ebase, 0x100);
#endif
#ifdef CONFIG_CAVIUM_OCTEON_LOCK_L2_EXCEPTION
		/* General exception */
		cvmx_l2c_lock_mem_region(ebase + 0x180, 0x80);
#endif
#ifdef CONFIG_CAVIUM_OCTEON_LOCK_L2_LOW_LEVEL_INTERRUPT
		/* Interrupt handler */
		cvmx_l2c_lock_mem_region(ebase + 0x200, 0x80);
#endif
#ifdef CONFIG_CAVIUM_OCTEON_LOCK_L2_INTERRUPT
		cvmx_l2c_lock_mem_region(__pa_symbol(handle_int), 0x100);
		cvmx_l2c_lock_mem_region(__pa_symbol(plat_irq_dispatch), 0x80);
#endif
#ifdef CONFIG_CAVIUM_OCTEON_LOCK_L2_MEMCPY
		cvmx_l2c_lock_mem_region(__pa_symbol(memcpy), 0x480);
#endif
	}
#endif

	octeon_check_cpu_bist();

	octeon_uart = octeon_get_boot_uart();

#ifdef CONFIG_SMP
	octeon_write_lcd("LinuxSMP");
#else
	octeon_write_lcd("Linux");
#endif

	octeon_setup_delays();

	/*
	 * BIST should always be enabled when doing a soft reset. L2
	 * Cache locking for instance is not cleared unless BIST is
	 * enabled.  Unfortunately due to a chip errata G-200 for
	 * Cn38XX and CN31XX, BIST msut be disabled on these parts.
	 */
	if (OCTEON_IS_MODEL(OCTEON_CN38XX_PASS2) ||
	    OCTEON_IS_MODEL(OCTEON_CN31XX))
		cvmx_write_csr(CVMX_CIU_SOFT_BIST, 0);
	else
		cvmx_write_csr(CVMX_CIU_SOFT_BIST, 1);

	/* Default to 64MB in the simulator to speed things up */
	if (octeon_is_simulation())
		MAX_MEMORY = 64ull << 20;

	arg = strstr(arcs_cmdline, "mem=");
	if (arg) {
		MAX_MEMORY = memparse(arg + 4, &p);
		if (MAX_MEMORY == 0)
			MAX_MEMORY = 32ull << 30;
		if (*p == '@')
			RESERVE_LOW_MEM = memparse(p + 1, &p);
	}

	arcs_cmdline[0] = 0;
	argc = octeon_boot_desc_ptr->argc;
	for (i = 0; i < argc; i++) {
		const char *arg = phys_to_virt(octeon_boot_desc_ptr->argv[i]);
		if (strncmp(arg, "mem=block:", 10) == 0) {
			const char *pos = arg + 10;
			int j;

			for (j = 0; pos[0] && j < ARRAY_SIZE(named_memory_blocks); j++) {
				int len;
				char *comma = strchr(pos, ',');
				if (comma)
					len = comma - pos;
				else
					len = max(strlen(pos), ARRAY_SIZE(named_memory_blocks[0]));
				strncpy(named_memory_blocks[j], pos, len);
				if (comma)
					pos = comma + 1;
				else
					break;
			}
			for (j = 0; j < ARRAY_SIZE(named_memory_blocks); j++)
				pr_err("Named Block[%d] = \"%s\"\n", j, named_memory_blocks[j]);
		} else if ((strncmp(arg, "MEM=", 4) == 0) ||
		    (strncmp(arg, "mem=", 4) == 0)) {
			MAX_MEMORY = memparse(arg + 4, &p);
			if (MAX_MEMORY == 0)
				MAX_MEMORY = 32ull << 30;
			if (*p == '@')
				RESERVE_LOW_MEM = memparse(p + 1, &p);
		} else if (strncmp(arg, "rd_name=", 8) == 0) {
			strncpy(rd_name, arg + 8, sizeof(rd_name));
			rd_name[sizeof(rd_name) - 1] = 0;
			goto append_arg;
		} else if (strcmp(arg, "ecc_verbose") == 0) {
#ifdef CONFIG_CAVIUM_REPORT_SINGLE_BIT_ECC
			__cvmx_interrupt_ecc_report_single_bit_errors = 1;
			pr_notice("Reporting of single bit ECC errors is "
				  "turned on\n");
#endif
			goto append_arg;
#ifdef CONFIG_KEXEC
		} else if (strncmp(arg, "crashkernel=", 12) == 0) {
			crashk_size = memparse(arg+12, &p);
			if (*p == '@')
				crashk_base = memparse(p+1, &p);
			strcat(arcs_cmdline, " ");
			strcat(arcs_cmdline, arg);
			/*
			 * To do: switch parsing to new style, something like:
			 * parse_crashkernel(arg, sysinfo->system_dram_size,
			 *		  &crashk_size, &crashk_base);
			 */
			goto append_arg;
#endif
		} else {
append_arg:
			if (strlen(arcs_cmdline) + strlen(arg) + 1 < sizeof(arcs_cmdline) - 1) {
				strcat(arcs_cmdline, " ");
				strcat(arcs_cmdline, arg);
			}
		}
	}

	if (strstr(arcs_cmdline, "console=pci"))
		octeon_pci_console_init(strstr(arcs_cmdline, "console=pci") + 8);

	if (strstr(arcs_cmdline, "console=") == NULL) {
#ifdef CONFIG_CAVIUM_OCTEON_2ND_KERNEL
		strcat(arcs_cmdline, " console=ttyS0,115200");
#else
		if (octeon_uart == 1)
			strcat(arcs_cmdline, " console=ttyS1,115200");
		else
			strcat(arcs_cmdline, " console=ttyS0,115200");
#endif
	}

	mips_hpt_frequency = octeon_get_clock_rate();

	octeon_init_cvmcount();

	_machine_restart = octeon_restart;
	_machine_halt = octeon_halt;

#ifdef CONFIG_KEXEC
	_machine_kexec_shutdown = octeon_shutdown;
	_machine_crash_shutdown = octeon_crash_shutdown;
	_machine_kexec_prepare = octeon_kexec_prepare;
#endif

	octeon_user_io_init();
	register_smp_ops(&octeon_smp_ops);

	labi = phys_to_virt(LABI_ADDR_IN_BOOTLOADER);
	if (labi->labi_signature == LABI_SIGNATURE)
		octeon_bootloader_entry_addr = labi->InitTLBStart_addr;

#ifdef	SDK_VERSION
	pr_info("Cavium Inc. SDK-" SDK_VERSION "\n");
#endif
}

/* Exclude a single page from the regions obtained in plat_mem_setup. */
static __init void memory_exclude_page(u64 addr, u64 *mem, u64 *size)
{
	if (addr > *mem && addr < *mem + *size) {
		u64 inc = addr - *mem;
		add_memory_region(*mem, inc, BOOT_MEM_RAM);
		*mem += inc;
		*size -= inc;
	}

	if (addr == *mem && *size > PAGE_SIZE) {
		*mem += PAGE_SIZE;
		*size -= PAGE_SIZE;
	}
}

void __init plat_mem_setup(void)
{
	uint64_t mem_alloc_size;
	uint64_t total;
	uint64_t crashk_end;
	int64_t memory;
	const struct cvmx_bootmem_named_block_desc *named_block;

	total = 0;
	crashk_end = 0;

#ifdef CONFIG_BLK_DEV_INITRD

	if (rd_name[0]) {
		const struct cvmx_bootmem_named_block_desc *initrd_block;

		initrd_block = cvmx_bootmem_find_named_block(rd_name);
		if (initrd_block != NULL) {
			initrd_start = initrd_block->base_addr + PAGE_OFFSET;
			initrd_end = initrd_start + initrd_block->size;
			add_memory_region(initrd_block->base_addr, initrd_block->size,
					  BOOT_MEM_INIT_RAM);
			initrd_in_reserved = 1;
			total += initrd_block->size;
		}
	}
#endif

	if (named_memory_blocks[0][0]) {
		/* Memory from named blocks only */
		int i;

		for (i = 0;
		     named_memory_blocks[i][0] && i < ARRAY_SIZE(named_memory_blocks);
		     i++) {
			named_block = cvmx_bootmem_find_named_block(named_memory_blocks[i]);
			if (!named_block) {
				pr_err("Error: Couldn't find cvmx_bootmem block \"%s\"",
				       named_memory_blocks[i]);
				return;
			}
			pr_info("Adding memory from \"%s\": %016lx @ %016lx\n",
				named_memory_blocks[i],
				(unsigned long)named_block->size,
				(unsigned long)named_block->base_addr);
			add_memory_region(named_block->base_addr, named_block->size,
					  BOOT_MEM_RAM);
			total += named_block->size;
		}
		goto mem_alloc_done;
	}

	/*
	 * The Mips memory init uses the first memory location for
	 * some memory vectors. When SPARSEMEM is in use, it doesn't
	 * verify that the size is big enough for the final
	 * vectors. Making the smallest chuck 4MB seems to be enough
	 * to consistently work.
	 */
	mem_alloc_size = 4 << 20;
	if (mem_alloc_size > MAX_MEMORY)
		mem_alloc_size = MAX_MEMORY;

/* Crashkernel ignores bootmem list. It relies on mem=X@Y option */
#ifdef CONFIG_CRASH_DUMP
	add_memory_region(RESERVE_LOW_MEM, MAX_MEMORY, BOOT_MEM_RAM);
	total += MAX_MEMORY;
#else
#ifdef CONFIG_KEXEC
	if (crashk_size > 0) {
		add_memory_region(crashk_base, crashk_size, BOOT_MEM_RAM);
		crashk_end = crashk_base + crashk_size;
	}
#endif
	cvmx_bootmem_lock();
	while ((boot_mem_map.nr_map < BOOT_MEM_MAP_MAX)
		&& (total < MAX_MEMORY)) {
#if defined(CONFIG_64BIT) || defined(CONFIG_64BIT_PHYS_ADDR)
		memory = cvmx_bootmem_phy_alloc(mem_alloc_size,
						__pa_symbol(&__init_end), -1,
						0x100000,
						CVMX_BOOTMEM_FLAG_NO_LOCKING);
#elif defined(CONFIG_HIGHMEM)
		memory = cvmx_bootmem_phy_alloc(mem_alloc_size, 0, 1ull << 31,
						0x100000,
						CVMX_BOOTMEM_FLAG_NO_LOCKING);
#else
		memory = cvmx_bootmem_phy_alloc(mem_alloc_size, 0, 512 << 20,
						0x100000,
						CVMX_BOOTMEM_FLAG_NO_LOCKING);
#endif
		if (memory >= 0) {
			u64 size = mem_alloc_size;

			/*
			 * This function automatically merges address
			 * regions next to each other if they are
			 * received in incrementing order.
			 * span the discontinuity.
			 */
			memory_exclude_page(CVMX_PCIE_BAR1_PHYS_BASE,
					    &memory, &size);
			memory_exclude_page(CVMX_PCIE_BAR1_PHYS_BASE +
					    CVMX_PCIE_BAR1_PHYS_SIZE,
					    &memory, &size);

			/*
			 * This function automatically merges address regions
			 * next to each other if they are received in
			 * incrementing order
			 */
			if (size)
				add_memory_region(memory, size, BOOT_MEM_RAM);
			total += mem_alloc_size;
		} else {
			break;
		}
	}
	cvmx_bootmem_unlock();
#endif /* CONFIG_CRASH_DUMP */
mem_alloc_done:
#ifdef CONFIG_CAVIUM_RESERVE32
	/*
	 * Now that we've allocated the kernel memory it is safe to
	 * free the reserved region. We free it here so that builtin
	 * drivers can use the memory.
	 */
	if (octeon_reserve32_memory)
		cvmx_bootmem_free_named("CAVIUM_RESERVE32");
#endif /* CONFIG_CAVIUM_RESERVE32 */

	if (total == 0)
		panic("Unable to allocate memory from "
		      "cvmx_bootmem_phy_alloc");

	/* Initialize QLM and also apply any erratas */
	cvmx_qlm_init();
}

/*
 * Emit one character to the boot UART.	 Exported for use by the
 * watchdog timer.
 */
int prom_putchar(char c)
{
	uint64_t lsrval;

	/* Spin until there is room */
	do {
		lsrval = cvmx_read_csr(CVMX_MIO_UARTX_LSR(octeon_uart));
	} while ((lsrval & 0x20) == 0);

	/* Write the byte */
	cvmx_write_csr(CVMX_MIO_UARTX_THR(octeon_uart), c & 0xffull);
	return 1;
}
EXPORT_SYMBOL(prom_putchar);

void prom_free_prom_memory(void)
{
	if (CAVIUM_OCTEON_DCACHE_PREFETCH_WAR) {
		/* Check for presence of Core-14449 fix.  */
		u32 insn;
		u32 *foo;

		foo = &insn;

		asm volatile("# before" : : : "memory");
		prefetch(foo);
		asm volatile(
			".set push\n\t"
			".set noreorder\n\t"
			"bal 1f\n\t"
			"nop\n"
			"1:\tlw %0,-12($31)\n\t"
			".set pop\n\t"
			: "=r" (insn) : : "$31", "memory");

		if ((insn >> 26) != 0x33)
			panic("No PREF instruction at Core-14449 probe point.");

		if (((insn >> 16) & 0x1f) != 28)
			panic("OCTEON II DCache prefetch workaround not in place (%04x).\n"
			      "Please build kernel with proper options (CONFIG_CAVIUM_CN63XXP1).",
			      insn);
	}
}

int octeon_prune_device_tree(void);

extern const char __dtb_octeon_3xxx_begin;
extern const char __dtb_octeon_68xx_begin;
void __init device_tree_init(void)
{
	const void *fdt;
	bool do_prune;

	if (octeon_bootinfo->minor_version >= 3 && octeon_bootinfo->fdt_addr) {
		fdt = phys_to_virt(octeon_bootinfo->fdt_addr);
		pr_info("Using passed Device Tree <%p>.\n", fdt);
		if (fdt_check_header(fdt))
			panic("Corrupt Device Tree passed to kernel.");
		do_prune = false;
	} else if (OCTEON_IS_MODEL(OCTEON_CN68XX)) {
		fdt = &__dtb_octeon_68xx_begin;
		do_prune = true;
	} else {
		fdt = &__dtb_octeon_3xxx_begin;
		do_prune = true;
	}

	initial_boot_params = (void *)fdt;

	if (do_prune) {
		octeon_prune_device_tree();
		pr_info("Using internal Device Tree.\n");
	}
	unflatten_and_copy_device_tree();
}

static int __initdata disable_octeon_edac_p;

static int __init disable_octeon_edac(char *str)
{
	disable_octeon_edac_p = 1;
	return 0;
}
early_param("disable_octeon_edac", disable_octeon_edac);

static char *edac_device_names[] = {
	"octeon_l2c_edac",
	"octeon_pc_edac",
};

static int __init edac_devinit(void)
{
	struct platform_device *dev;
	int i, err = 0;
	int num_lmc;
	char *name;

	if (disable_octeon_edac_p)
		return 0;

	for (i = 0; i < ARRAY_SIZE(edac_device_names); i++) {
		name = edac_device_names[i];
		dev = platform_device_register_simple(name, -1, NULL, 0);
		if (IS_ERR(dev)) {
			pr_err("Registation of %s failed!\n", name);
			err = PTR_ERR(dev);
		}
	}

	num_lmc = OCTEON_IS_MODEL(OCTEON_CN68XX) ? 4 :
		(OCTEON_IS_MODEL(OCTEON_CN56XX) ? 2 : 1);
	for (i = 0; i < num_lmc; i++) {
		dev = platform_device_register_simple("octeon_lmc_edac",
						      i, NULL, 0);
		if (IS_ERR(dev)) {
			pr_err("Registation of octeon_lmc_edac %d failed!\n", i);
			err = PTR_ERR(dev);
		}
	}

	return err;
}
device_initcall(edac_devinit);

static void __initdata *octeon_dummy_iospace;

static int __init octeon_no_pci_init(void)
{
	/*
	 * Initially assume there is no PCI. The PCI/PCIe platform code will
	 * later re-initialize these to correct values if they are present.
	 */
	octeon_dummy_iospace = vzalloc(IO_SPACE_LIMIT);
	set_io_port_base((unsigned long)octeon_dummy_iospace);
	ioport_resource.start = MAX_RESOURCE;
	ioport_resource.end = 0;
	return 0;
}
core_initcall(octeon_no_pci_init);

static int __init octeon_no_pci_release(void)
{
	/*
	 * Release the allocated memory if a real IO space is there.
	 */
	if ((unsigned long)octeon_dummy_iospace != mips_io_port_base)
		vfree(octeon_dummy_iospace);
	return 0;
}
late_initcall(octeon_no_pci_release);
