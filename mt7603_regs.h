/*
 * Copyright (C) 2015 Felix Fietkau <nbd@openwrt.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __MT7603_REGS_H
#define __MT7603_REGS_H

#define MT_TOP_MISC2			0x1134

#define MT_MCU_BASE			0x2000
#define MT_MCU(ofs)			(MT_MCU_BASE + (ofs))

#define MT_MCU_PCIE_REMAP_1		MT_MCU(0x500)
#define MT_MCU_PCIE_REMAP_1_OFFSET	GENMASK(17, 0)
#define MT_MCU_PCIE_REMAP_1_BASE	GENMASK(31, 18)

#define MT_MCU_PCIE_REMAP_2		MT_MCU(0x504)
#define MT_MCU_PCIE_REMAP_2_OFFSET	GENMASK(18, 0)
#define MT_MCU_PCIE_REMAP_2_BASE	GENMASK(31, 19)

#define MT_HIF_BASE			0x4000
#define MT_HIF(ofs)			(MT_HIF_BASE + (ofs))

#define MT_ASIC_VERSION			MT_HIF(0x000)
#define MT_INT_SOURCE_CSR		MT_HIF(0x200)
#define MT_INT_MASK_CSR			MT_HIF(0x204)

#define MT_SCH_1			MT_HIF(0x588)
#define MT_SCH_2			MT_HIF(0x58c)
#define MT_SCH_3			MT_HIF(0x590)

#define MT_SCH_4			MT_HIF(0x594)
#define MT_SCH_4_FORCE_QID		GENMASK(4, 0)
#define MT_SCH_4_BYPASS			BIT(5)

#define MT_PCIE_REMAP_BASE_1		0x40000
#define MT_PCIE_REMAP_BASE_2		0x80000

#endif