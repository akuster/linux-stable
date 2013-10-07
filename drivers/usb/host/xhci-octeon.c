/*
 * XHCI HCD glue for Cavium Octeon III SOCs.
 *
 *
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2010 Cavium Networks
 *
 */


#include <linux/platform_device.h>
#include <linux/device.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/mutex.h>
#include <linux/delay.h>
#include <linux/of.h>

#include <asm/octeon/octeon.h>
#include <asm/octeon/cvmx-usbdrdx-defs.h>

/* Common clock init code.  */
void octeon3_usb_clocks_start(int node);
void octeon3_usb_clocks_stop(int node);
void octeon3_usb_set_endian_mode(int node);

static int __init xhci_octeon_init(void)
{
	octeon3_usb_clocks_start(0);
	octeon3_usb_clocks_start(1);
	octeon3_usb_set_endian_mode(0);
	octeon3_usb_set_endian_mode(1);
	return 0;
}

static void __exit xhci_octeon_exit(void)
{
	octeon3_usb_clocks_stop(0);
	octeon3_usb_clocks_stop(1);
}

arch_initcall(xhci_octeon_init);
module_exit(xhci_octeon_exit);


static DEFINE_MUTEX(octeon3_usb1_clocks_mutex);
static DEFINE_MUTEX(octeon3_usb2_clocks_mutex);
static int octeon3_usb1_clock_start_cnt;
static int octeon3_usb2_clock_start_cnt;

void octeon3_usb_clocks_start(int index)
{
	u64 div;
	union cvmx_usbdrdx_uctl_ctl uctl_ctl;
	int ref_clk_sel = 2; //to_do, get from device tree

	if (index == 0) {
		mutex_lock(&octeon3_usb1_clocks_mutex);
		octeon3_usb1_clock_start_cnt++;
		if (octeon3_usb1_clock_start_cnt != 1)
			goto exit;
	}
	else {
		mutex_lock(&octeon3_usb2_clocks_mutex);
		octeon3_usb2_clock_start_cnt++;
		if (octeon3_usb2_clock_start_cnt != 1)
			goto exit;
	}
	printk("Initializing USB clocks !!!!!!\n");
	/*
	* Step 1: Wait for voltages stable.  That surely happened
	* before starting the kernel.
	* Ensure the reference clock is up and stable ??
	*/

	/* Step 2: Wait for IOI reset to deassert  ?? */

	/* Step 3: program over current indication if desired, later */

	/* Step 3: program the port power control feature if desired, later */

	/* Step 4: Assert all resets */
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.uphy_rst = 1;
	uctl_ctl.s.uahc_rst = 1;
	uctl_ctl.s.uctl_rst = 1;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);

	/* Step 5a: Reset the clock dividers */
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.h_clkdiv_rst = 1;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);

	/* 5b */
	/* Step 5b: Select controller clock frequency */
	div = 2; //vinita_to_to uncomment later
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.h_clkdiv_sel = div;
	uctl_ctl.s.h_clk_en = 1;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	if(div != uctl_ctl.s.h_clkdiv_sel || !uctl_ctl.s.h_clk_en) {
		printk("ERROR: usb controller clock init\n");
			goto exit;
	}

	/* Step 5c: Deassert the controller clock divider reset */
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.h_clkdiv_rst = 0;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);

	/* Step ??*/
	cvmx_wait(2000);

	/* Step 6a-6d & 7: Reference clock configuration */
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.ssc_en =0;
	uctl_ctl.s.ref_ssp_en = 1;
	uctl_ctl.s.ref_clk_sel = ref_clk_sel;
	uctl_ctl.s.ref_clk_fsel = 0x07;
	uctl_ctl.s.ref_clk_div2 = 0;
	uctl_ctl.s.mpll_multiplier = 0x19;
	uctl_ctl.s.ss_power_en = 1;
	uctl_ctl.s.hs_power_en = 1;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);

	/* Step 9 */
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.uctl_rst = 0;
	uctl_ctl.s.uahc_rst = 0;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);

	/* Step 8*/
	cvmx_wait(10);

	/* Step 10*/
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.csclk_en = 1;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);

	/*Step 11*/
	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	printk("Enabling host mode\n");
	uctl_ctl.s.drd_mode = 0;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index),uctl_ctl.u64);

	octeon_error_tree_enable(CVMX_ERROR_GROUP_USB, -1);//to_do separate for both usb
exit:
	if (index == 0)
		mutex_unlock(&octeon3_usb1_clocks_mutex);
	else
		mutex_unlock(&octeon3_usb2_clocks_mutex);

}
EXPORT_SYMBOL(octeon3_usb_clocks_start);

void octeon3_usb_clocks_stop(int index)
{
	if (index == 0) {
		mutex_lock(&octeon3_usb1_clocks_mutex);
		octeon3_usb1_clock_start_cnt--;
		if (octeon3_usb1_clock_start_cnt == 0)
			octeon_error_tree_disable(CVMX_ERROR_GROUP_USB, -1);//to_do separate for both usb
		mutex_unlock(&octeon3_usb1_clocks_mutex);
	} else {
		mutex_lock(&octeon3_usb2_clocks_mutex);
		octeon3_usb2_clock_start_cnt--;
		if (octeon3_usb2_clock_start_cnt == 0 )
			octeon_error_tree_disable(CVMX_ERROR_GROUP_USB, -1);//to_do separate for both usb
		mutex_unlock(&octeon3_usb1_clocks_mutex);
	}
}
EXPORT_SYMBOL(octeon3_usb_clocks_stop);

void octeon3_usb_set_endian_mode(int index)
{
	union cvmx_usbdrdx_uctl_shim_cfg shim_cfg;
	shim_cfg.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_SHIM_CFG(index));
	shim_cfg.s.dma_endian_mode = 1;
	shim_cfg.s.csr_endian_mode = 1; //to_do, check for little big endian
	cvmx_write_csr(CVMX_USBDRDX_UCTL_SHIM_CFG(index), shim_cfg.u64);
}
EXPORT_SYMBOL(octeon3_usb_set_endian_mode);

void octeon3_usb_phy_reset(int index)
{
	union cvmx_usbdrdx_uctl_ctl uctl_ctl;

	uctl_ctl.u64 = cvmx_read_csr(CVMX_USBDRDX_UCTL_CTL(index));
	uctl_ctl.s.uphy_rst = 0;
	cvmx_write_csr(CVMX_USBDRDX_UCTL_CTL(index), uctl_ctl.u64);
}
EXPORT_SYMBOL(octeon3_usb_phy_reset);
