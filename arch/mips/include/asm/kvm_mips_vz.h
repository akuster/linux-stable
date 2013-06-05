/*
 * This file is subject to the terms and conditions of the GNU General Public
 * License.  See the file "COPYING" in the main directory of this archive
 * for more details.
 *
 * Copyright (C) 2013 Cavium, Inc.
 */
#ifndef _ASM_KVM_MIPS_VZ_H
#define _ASM_KVM_MIPS_VZ_H

struct kvm;

struct kvm_mips_vz {
	struct mutex guest_mm_lock;
	pgd_t *pgd;			/* Translations for this host. */
	spinlock_t irq_chip_lock;
	struct page *irq_chip;
	unsigned int asid[NR_CPUS];	/* Per CPU ASIDs for pgd. */
};

bool mipsvz_page_fault(struct pt_regs *regs, unsigned long write,
		       unsigned long address);

bool mipsvz_cp_unusable(struct pt_regs *regs);
int mipsvz_arch_init(void *opaque);
int mipsvz_arch_hardware_enable(void *garbage);
int mipsvz_init_vm(struct kvm *kvm, unsigned long type);

#endif /* _ASM_KVM_MIPS_VZ_H */
