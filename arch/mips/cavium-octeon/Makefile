#
# Makefile for the Cavium Octeon specific kernel interface routines
# under Linux.
#
# This file is subject to the terms and conditions of the GNU General Public
# License.  See the file "COPYING" in the main directory of this archive
# for more details.
#
# Copyright (C) 2005-2012 Cavium, Inc.
#

CFLAGS_octeon-platform.o = -I$(src)/../../../scripts/dtc/libfdt
CFLAGS_setup.o = -I$(src)/../../../scripts/dtc/libfdt

obj-y := setup.o octeon-platform.o octeon-irq.o csrc-octeon.o \
	octeon-hw-status.o octeon_info.o
obj-y += dma-octeon.o
obj-y += csrc-octeon-ptp.o
obj-y += octeon-pci-console.o
obj-y += octeon-memcpy.o
obj-y += executive/

obj-$(CONFIG_SMP)			+= smp.o
obj-$(CONFIG_SYSFS)			+= octeon-power-throttle.o
obj-$(CONFIG_SYSFS)                     += cacheinfo.o
obj-$(CONFIG_MTD)			+= flash_setup.o
obj-$(CONFIG_OCTEON_ILM)		+= oct_ilm.o
obj-$(CONFIG_CAVIUM_OCTEON_NAND)	+= octeon-nand.o
obj-$(CONFIG_CAVIUM_OCTEON_ERROR_TREE)	+= octeon-error-tree.o
obj-$(CONFIG_SYSFS)                     += cacheinfo.o
obj-$(CONFIG_CAVIUM_OCTEON_KERNEL_CRYPTO) += octeon-crypto.o
obj-$(CONFIG_OCTEON_ERROR_INJECTOR)	+= octeon-error-injector.o
obj-$(CONFIG_CAVIUM_OCTEON_RAPIDIO)	+= octeon-rapidio.o
obj-$(CONFIG_PERF_EVENTS)		+= perf_counters.o
obj-$(CONFIG_CAVIUM_OCTEON_PERF)	+= perf_uncore.o
