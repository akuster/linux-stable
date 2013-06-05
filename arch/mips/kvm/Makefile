# Makefile for KVM support for MIPS
#

common-objs = $(addprefix ../../../virt/kvm/, kvm_main.o)

EXTRA_CFLAGS += -Ivirt/kvm -Iarch/mips/kvm

kvm-objs := $(common-objs) mips.o emulate.o locore.o \
	    interrupt.o stats.o commpage.o \
	    dyntrans.o trap_emul.o

obj-$(CONFIG_KVM)	+= kvm.o
obj-y			+= callback.o tlb.o
obj-$(CONFIG_KVM)		+= $(common-objs) kvm_mips.o
obj-$(CONFIG_KVM_MIPS_TE)	+= kvm_mipste.o
obj-$(CONFIG_KVM_MIPS_VZ)	+= kvm_mipsvz.o kvm_mipsvz_guest.o
