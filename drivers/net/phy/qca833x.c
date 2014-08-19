/*
 * drivers/net/phy/qca833x.c
 *
 * Driver for Qualcomm/Atheros qca8334/8337 PHYs
 *
 * adapted from Matus Ujhelyi's at803x driver by Peter Swain <pswain@cavium.com>,
 * Aaron Williams & others.
 *
 * This program is free software; you can redistribute  it and/or modify it
 * under  the terms of  the GNU General  Public License as published by the
 * Free Software Foundation;  either version 2 of the  License, or (at your
 * option) any later version.
 */

#include <linux/phy.h>
#include <linux/module.h>
#include <linux/string.h>
#include <linux/netdevice.h>
#include <linux/etherdevice.h>
#include <linux/of_device.h>
#include <linux/of_platform.h>

MODULE_DESCRIPTION("Qualcomm qca833x PHY driver");

#include "qca833x.h"

/* just one private state (number of ports), so squeeze it into phydev->priv */
#define qports(phydev) (*(int*)&(phydev)->priv)

/* compound read/write must hold mdio mutex */
#define muget(phydev) mutex_lock(&(phydev)->bus->mdio_lock)
#define muput(phydev) mutex_unlock(&(phydev)->bus->mdio_lock)

/* read/write given mdio addrs, caller holds mutex */
static inline int __phy_read_addr(struct phy_device *phydev, u32 addr,
				  u32 regnum)
{
	return phydev->bus->read(phydev->bus, addr, regnum);
}

static inline int __phy_write_addr(struct phy_device *phydev, u32 addr,
				   u32 regnum, u16 val)
{
	return phydev->bus->write(phydev->bus, addr, regnum, val);
}

/*
 * read/write 32bit values with qca833x-specific protocol
 * this is conceptually like the Clause-45 2-part access, but different,
 * with 32bit values and a 20-bit address-space.
 * mdio mutex held across transactions to avoid interleave.
 */
static uint32_t __used qphy_read32(struct phy_device *phydev, uint32_t reg_addr)
{
	uint32_t reg_word_addr;
	uint32_t phy_addr, tmp_val, reg_val;
	uint16_t phy_val;
	uint8_t phy_reg;

	/* change reg_addr to 16-bit word address, 32-bit aligned */
	reg_word_addr = (reg_addr & 0xfffffffc) >> 1;

	/* configure register high address */
	phy_val = (uint16_t) ((reg_word_addr >> 8) & 0x1ff);	/* bit16-8 of reg address */
	muget(phydev);
	__phy_write_addr(phydev, 0x18, 0, phy_val);

	/* For some registers such as MIBs, since it is read/clear, we should */
	/* read the lower 16-bit register then the higher one */

	/* read register in lower address */
	phy_addr = 0x10 | ((reg_word_addr >> 5) & 0x7);	/* bit7-5 of reg address */
	phy_reg = (uint8_t) (reg_word_addr & 0x1f);	/* bit4-0 of reg address */
	reg_val = (uint32_t) __phy_read_addr(phydev, phy_addr, phy_reg);

	/* read register in higher address */
	reg_word_addr++;
	phy_addr = 0x10 | ((reg_word_addr >> 5) & 0x7);	/* bit7-5 of reg address */
	phy_reg = (uint8_t) (reg_word_addr & 0x1f);	/* bit4-0 of reg address */
	tmp_val = (uint32_t) __phy_read_addr(phydev, phy_addr, phy_reg);
	reg_val |= (tmp_val << 16);

	muput(phydev);

	return reg_val;

}

static void qphy_write32(struct phy_device *phydev, uint32_t reg_addr,
			      uint32_t reg_val)
{
	uint32_t reg_word_addr;
	uint32_t phy_addr;
	uint16_t phy_val;
	uint8_t phy_reg;

	/* change reg_addr to 16-bit word address, 32-bit aligned */
	reg_word_addr = (reg_addr & 0xfffffffc) >> 1;

	/* configure register high address */
	phy_val = (uint16_t) ((reg_word_addr >> 8) & 0x1ff);	/* bit16-8 of reg address */
	muget(phydev);
	__phy_write_addr(phydev, 0x18, 0, phy_val);

	/* For some registers such as ARL and VLAN, since they include BUSY bit */
	/* in lower address, we should write the higher 16-bit register then the */
	/* lower one */

	/* read register in higher address */
	reg_word_addr++;
	phy_addr = 0x10 | ((reg_word_addr >> 5) & 0x7);	/* bit7-5 of reg address */
	phy_reg = (uint8_t) (reg_word_addr & 0x1f);	/* bit4-0 of reg address */
	phy_val = (uint16_t) ((reg_val >> 16) & 0xffff);
	__phy_write_addr(phydev, phy_addr, phy_reg, phy_val);

	/* write register in lower address */
	reg_word_addr--;
	phy_addr = 0x10 | ((reg_word_addr >> 5) & 0x7);	/* bit7-5 of reg address */
	phy_reg = (uint8_t) (reg_word_addr & 0x1f);	/* bit4-0 of reg address */
	phy_val = (uint16_t) (reg_val & 0xffff);
	__phy_write_addr(phydev, phy_addr, phy_reg, phy_val);
	muput(phydev);

	pr_debug("%s %x := %x\n", __func__, reg_addr, reg_val);
}


#ifdef notdef
/*
 * V-lan configuration given by Switch team
 * Vlan 1:PHY0,1,2,3 and Mac 0 of s17
 * Vlam 2:PHY4 and Mac 6 of s17
 */

static void qphy_vlan_config(struct phy_device *phydev)
{

	qphy_write32(phydev, S17_P0LOOKUP_CTRL_REG, 0x0014001e);
	qphy_write32(phydev, S17_P0VLAN_CTRL0_REG, 0x10001);

	qphy_write32(phydev, S17_P1LOOKUP_CTRL_REG, 0x0014001d);
	qphy_write32(phydev, S17_P1VLAN_CTRL0_REG, 0x10001);

	qphy_write32(phydev, S17_P2LOOKUP_CTRL_REG, 0x0014001b);
	qphy_write32(phydev, S17_P2VLAN_CTRL0_REG, 0x10001);

	qphy_write32(phydev, S17_P3LOOKUP_CTRL_REG, 0x00140017);
	qphy_write32(phydev, S17_P3VLAN_CTRL0_REG, 0x10001);

	qphy_write32(phydev, S17_P4LOOKUP_CTRL_REG, 0x0014000f);
	qphy_write32(phydev, S17_P4VLAN_CTRL0_REG, 0x10001);

	qphy_write32(phydev, S17_P5LOOKUP_CTRL_REG, 0x00140040);
	qphy_write32(phydev, S17_P5VLAN_CTRL0_REG, 0x20001);

	qphy_write32(phydev, S17_P6LOOKUP_CTRL_REG, 0x00140020);
	qphy_write32(phydev, S17_P6VLAN_CTRL0_REG, 0x20001);
}
#endif /*notdef*/

static int qca8334_re_init(struct phy_device *phydev)
{
	int val;
	u32 features;
	int status;

	qphy_write32(phydev, S17_P0PAD_MODE_REG, S17_MAC0_SGMII_EN);
	qphy_write32(phydev, S17_P0STATUS_REG, 0x0000007e);
	qphy_write32(phydev, S17_P0PAD_MODE_REG, S17_MAC0_SGMII_EN|S17_MAC0_SGMII_125MHX_RX_FALL);
	qphy_write32(phydev, S17_GLOFW_CTRL1_REG, 0x007f7f7f);
	qphy_write32(phydev, S17_SGMII_CTRL_REG, 0xc74164de);	/* PHY-mode SGMII control */

	features = SUPPORTED_TP | SUPPORTED_MII | SUPPORTED_AUI |
	    SUPPORTED_FIBRE | SUPPORTED_BNC;

	val = phy_read(phydev, MII_BMSR);
	if (val < 0)
		return val;

	if (val & BMSR_ANEGCAPABLE)
		features |= SUPPORTED_Autoneg;
	if (val & BMSR_100FULL)
		features |= SUPPORTED_100baseT_Full;
	if (val & BMSR_100HALF)
		features |= SUPPORTED_100baseT_Half;
	if (val & BMSR_10FULL)
		features |= SUPPORTED_10baseT_Full;
	if (val & BMSR_10HALF)
		features |= SUPPORTED_10baseT_Half;

	if (val & BMSR_ESTATEN) {
		val = phy_read(phydev, MII_ESTATUS);
		if (val < 0)
			return val;

		if (val & ESTATUS_1000_TFULL)
			features |= SUPPORTED_1000baseT_Full;
		if (val & ESTATUS_1000_THALF)
			features |= SUPPORTED_1000baseT_Half;
	}

	phydev->supported = features;
	phydev->advertising = features;

	status = phy_write(phydev, S17_PHY_INT_EN_REG, ATHR_CTRL_SOFTWARE_RESET);

	pr_debug(KERN_ERR "%s: complete\n", __func__);
	return 0;
}

static int qca8334_config_init(struct phy_device *phydev)
{
	int val;
	u32 features;
	int status;
	static bool once;

	val = phy_read(phydev, MII_PHYSID2);
	switch (val & 0xf) {
	case 3: /* qca8334 */
		qports(phydev) = 2;
		break;
	case 6: /* qca8337 */
		qports(phydev) = 4;
		break;
	default:
		pr_err("%s: unknown PHY id %x\n", __func__,
			val | (phy_read(phydev, MII_PHYSID1) << 16));
		return -ENODEV;
	}

#ifdef QCA833X_IRQ
	/* parse from FDT */
#else /* !QCA833X_IRQ */
	phydev->irq = PHY_POLL;
#endif /* !QCA833X_IRQ */

	if (!once)
		pr_info("qca833x %d-port switch\n", qports(phydev));
	once = true;

	return qca8334_re_init(phydev);
}

static void force_reset(struct phy_device *phydev)
{
	muget(phydev);
	if (phydev->attached_dev
	    && phydev->attached_dev->ethtool_ops
	    && phydev->attached_dev->ethtool_ops->reset) {
		u32 flags = ETH_RESET_PHY | ETH_RESET_FILTER;
		phydev->attached_dev->ethtool_ops->reset(
			phydev->attached_dev, &flags);
	}
	muput(phydev);
	qca8334_re_init(phydev);
}

static int qca8334_read_status(struct phy_device *phydev)
{
	int phy_status = 0;
	int port = 0;
	int was;

	muget(phydev);
	was = phydev->link;
	phydev->link = 0;

	WARN_ON_ONCE(qports(phydev) <= 0);

	for (port = 0; port < qports(phydev); port++)
	{
		if (phydev->link)
			break;

		/* All the speed information can be read from register 17 in one go. */
		phy_status = __phy_read_addr(phydev, port, ATHR_PHY_SPEC_STATUS);

		/*
		 * If the resolve bit 11 isn't set, see if autoneg is turned off
		 * (bit 12, reg 0). The resolve bit doesn't get set properly when
		 * autoneg is off, so force it
		 */
		if ((phy_status & (1 << 11)) == 0) {
			int auto_status = __phy_read_addr(phydev, port, MII_BMCR);

			if ((auto_status & (1 << 12)) == 0)
				phy_status |= 1 << 11;
		}

		/*
		 * Only return a link if the PHY has finished auto negotiation
		 * and set the resolved bit (bit 11)
		 */
		if (phy_status & (1 << 11)) {
			phydev->link = 1;
			phydev->duplex = DUPLEX_FULL;
			phydev->speed = SPEED_1000;
			phydev->pause = 1;
			phydev->asym_pause = 1;
		}
	}
	muput(phydev);

	/* when link goes down, reset qca833x by pulsing PCS off */
	if (was && !phydev->link)
		force_reset(phydev);
	return 0;
}


#ifdef QCA833X_IRQ
static int qca8334_ack_interrupt(struct phy_device *phydev)
{
	int err;

	err = phy_read(phydev, S17_PHY_INT_STAT_REG);

	return (err < 0) ? err : 0;
}

static int qca8334_config_interrupt(struct phy_device *phydev)
{
	return phy_write(phydev, S17_PHY_INT_EN_REG,
		(phydev->interrupts == PHY_INTERRUPT_ENABLED)
			* S17_PHY_LINK_INTRS);
}
#endif /* QCA833X_IRQ */

/* QUALCOMM/ATHEROS QCA8334/QCA8337 */
static struct phy_driver qca8334_driver = {
	.name = "Atheros 8334/8337 ethernet",
	.phy_id = 0x004dd036,
	.phy_id_mask = 0xfffffff0,
	.features = PHY_GBIT_FEATURES,
	.config_init = qca8334_config_init,
	.config_aneg = genphy_config_aneg,
	.read_status = qca8334_read_status,
#ifdef QCA833X_IRQ
	.ack_interrupt = qca8334_ack_interrupt,
	.config_intr = qca8334_config_interrupt,
	.flags = PHY_HAS_MAGICANEG | PHY_HAS_INTERRUPT,
#else /* !QCA833X_IRQ */
	.flags = PHY_HAS_MAGICANEG,
#endif /* !QCA833X_IRQ */
	.driver.owner = THIS_MODULE,
};

static int __init qca833x_init(void)
{
	return phy_driver_register(&qca8334_driver);
}

static void __exit qca833x_exit(void)
{
	phy_driver_unregister(&qca8334_driver);
}

module_init(qca833x_init);
module_exit(qca833x_exit);

static struct mdio_device_id __maybe_unused qca833x_tbl[] = {
	{0x004dd036, 0xfffffff0}, /* qca8337 */
	{0x004dd033, 0xfffffff0}, /* qca8334 */
	{}
};

MODULE_DEVICE_TABLE(mdio, qca833x_tbl);
