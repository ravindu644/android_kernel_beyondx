/*
 * s2mps19-private.h - Voltage regulator driver for the s2mps19
 *
 *  Copyright (C) 2015 Samsung Electrnoics
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __LINUX_MFD_S2MPS19_REGULATOR_H
#define __LINUX_MFD_S2MPS19_REGULATOR_H
#include <linux/i2c.h>
#include <linux/pm_qos.h>

#define S2MPS19_REG_INVALID             (0xFF)
#define S2MPS19_IRQSRC_PMIC				(1 << 0)

/* PMIC Top-Level Registers */
#define	S2MPS19_PMIC_REG_PMICID			0x00
#define	S2MPS19_PMIC_REG_INTSRC			0x01
#define	S2MPS19_PMIC_REG_INTSRC_MASK	0x02

/* PMIC Registers */
#define S2MPS19_PMIC_REG_INT1		0x00
#define S2MPS19_PMIC_REG_INT2		0x01
#define S2MPS19_PMIC_REG_INT3		0x02
#define S2MPS19_PMIC_REG_INT4		0x03
#define S2MPS19_PMIC_REG_INT5		0x04
#define S2MPS19_PMIC_REG_INT6		0x05
#define S2MPS19_PMIC_REG_INT7		0x06
#define S2MPS19_PMIC_REG_INT1M		0x07
#define S2MPS19_PMIC_REG_INT2M		0x08
#define S2MPS19_PMIC_REG_INT3M		0x09
#define S2MPS19_PMIC_REG_INT4M		0x0A
#define S2MPS19_PMIC_REG_INT5M		0x0B
#define S2MPS19_PMIC_REG_INT6M		0x0C
#define S2MPS19_PMIC_REG_INT7M		0x0D
#define S2MPS19_PMIC_REG_STATUS1	0x0E
#define S2MPS19_PMIC_REG_STATUS2	0x0F
#define S2MPS19_PMIC_REG_PWRONSRC	0x10
#define S2MPS19_PMIC_REG_OFFSRC		0x11

#define S2MPS19_PMIC_REG_BUCHG		0x12
#define S2MPS19_PMIC_REG_RTCBUF		0x13
#define S2MPS19_PMIC_REG_CTRL1		0x14
#define S2MPS19_PMIC_REG_CTRL2		0x15
#define S2MPS19_PMIC_REG_CTRL3		0x16

#define S2MPS19_PMIC_REG_B1M_CTRL	0x1D
#define S2MPS19_PMIC_REG_B1M_OUT1	0x1E
#define S2MPS19_PMIC_REG_B1M_OUT2	0x1F
#define S2MPS19_PMIC_REG_B2M_CTRL	0x20
#define S2MPS19_PMIC_REG_B2M_OUT1	0x21
#define S2MPS19_PMIC_REG_B2M_OUT2	0x22
#define S2MPS19_PMIC_REG_B3M_CTRL	0x23
#define S2MPS19_PMIC_REG_B3M_OUT1	0x24
#define S2MPS19_PMIC_REG_B3M_OUT2	0x25
#define S2MPS19_PMIC_REG_B4M_CTRL	0x26
#define S2MPS19_PMIC_REG_B4M_OUT1	0x27
#define S2MPS19_PMIC_REG_B4M_OUT2	0x28
#define S2MPS19_PMIC_REG_B5M_CTRL	0x29
#define S2MPS19_PMIC_REG_B5M_OUT1	0x2A
#define S2MPS19_PMIC_REG_B5M_OUT2	0x2B
#define S2MPS19_PMIC_REG_B6M_CTRL	0x2C
#define S2MPS19_PMIC_REG_B6M_OUT	0x2D
#define S2MPS19_PMIC_REG_B7M_CTRL	0x2E
#define S2MPS19_PMIC_REG_B7M_OUT	0x2F
#define S2MPS19_PMIC_REG_B8M_CTRL	0x30
#define S2MPS19_PMIC_REG_B8M_OUT	0x31
#define S2MPS19_PMIC_REG_B9M_CTRL	0x32
#define S2MPS19_PMIC_REG_B9M_OUT	0x33
#define S2MPS19_PMIC_REG_B10M_CTRL	0x34
#define S2MPS19_PMIC_REG_B10M_OUT1	0x35
#define S2MPS19_PMIC_REG_B10M_OUT2	0x36
#define S2MPS19_PMIC_REG_B11M_CTRL	0x37
#define S2MPS19_PMIC_REG_B11M_OUT	0x38
#define S2MPS19_PMIC_REG_B12M_CTRL	0x39
#define S2MPS19_PMIC_REG_B12M_OUT	0x3A
#define S2MPS19_PMIC_REG_BBM_CTRL	0x3B
#define S2MPS19_PMIC_REG_BBM_OUT	0x3C

#define S2MPS19_PMIC_REG_BUCKRAMP	0x3D
#define S2MPS19_PMIC_REG_BUCKRAMP2	0x3E

#define S2MPS19_PMIC_REG_L1CTRL		0x46
#define S2MPS19_PMIC_REG_L2CTRL		0x47
#define S2MPS19_PMIC_REG_L3CTRL		0x48
#define S2MPS19_PMIC_REG_L4CTRL		0x49
#define S2MPS19_PMIC_REG_L5CTRL		0x4A
#define S2MPS19_PMIC_REG_L6CTRL		0x4B
#define S2MPS19_PMIC_REG_L7CTRL		0x4C
#define S2MPS19_PMIC_REG_L8CTRL		0x4D
#define S2MPS19_PMIC_REG_L9CTRL		0x4E
#define S2MPS19_PMIC_REG_L10CTRL	0x4F
#define S2MPS19_PMIC_REG_L11CTRL	0x50
#define S2MPS19_PMIC_REG_L12CTRL	0x51
#define S2MPS19_PMIC_REG_L13CTRL	0x52
#define S2MPS19_PMIC_REG_L14CTRL	0x53
#define S2MPS19_PMIC_REG_L15CTRL	0x54
#define S2MPS19_PMIC_REG_L16CTRL	0x55
#define S2MPS19_PMIC_REG_L17CTRL	0x56
#define S2MPS19_PMIC_REG_L18CTRL	0x57
#define S2MPS19_PMIC_REG_L19CTRL	0x58
#define S2MPS19_PMIC_REG_L20CTRL	0x59
#define S2MPS19_PMIC_REG_L21CTRL	0x5A
#define S2MPS19_PMIC_REG_L22CTRL	0x5B
#define S2MPS19_PMIC_REG_L23CTRL	0x5C
#define S2MPS19_PMIC_REG_L24CTRL	0x5D
#define S2MPS19_PMIC_REG_L25CTRL	0x5E
#define S2MPS19_PMIC_REG_L26CTRL	0x5F
#define S2MPS19_PMIC_REG_L27CTRL	0x60
#define S2MPS19_PMIC_REG_L28CTRL	0x61
#define S2MPS19_PMIC_REG_L29CTRL	0x62

#define S2MPS19_PMIC_REG_PWREN_SEL1 0xA4
#define S2MPS19_PMIC_REG_PWREN_SEL2 0xA5

#define S2MPS19_REG_ADC_CTRL1		0xBF
#define S2MPS19_REG_ADC_CTRL2		0xC0
#define S2MPS19_REG_ADC_CTRL3		0xC1
#define S2MPS19_REG_ADC_DATA		0xC2

#define S2MPS19_PMIC_REG_OCP_WARN1		0xA9
#define S2MPS19_PMIC_REG_OCP_WARN2		0xAA
#define S2MPS19_PMIC_REG_OCP_WARN1_X	0xAB
#define S2MPS19_PMIC_REG_OCP_WARN1_Y	0xAC
#define S2MPS19_PMIC_REG_OCP_WARN1_Z	0xAD

#define S2MPS19_PMIC_REG_BUCK_OI_EN1	0xB1
#define S2MPS19_PMIC_REG_BUCK_OI_EN2	0xB2
#define S2MPS19_PMIC_REG_BUCK_OI_PD_EN1	0xB3
#define S2MPS19_PMIC_REG_BUCK_OI_PD_EN2	0xB4
#define S2MPS19_PMIC_REG_BUCK_OI_CTRL1	0xB5
#define S2MPS19_PMIC_REG_BUCK_OI_CTRL2	0xB6
#define S2MPS19_PMIC_REG_BUCK_OI_CTRL3	0xB7
#define S2MPS19_PMIC_REG_BUCK_OI_CTRL4	0xB8
#define S2MPS19_PMIC_REG_BUCK_OI_CTRL5	0xB9
#define S2MPS19_PMIC_REG_BUCK_OI_CTRL6	0xBA
#define S2MPS19_PMIC_REG_BUCK_OI_CTRL7	0xBB


/* S2MPS19 regulator ids */
enum S2MPS19_regulators {
	S2MPS19_LDO1,
	S2MPS19_LDO2,
	S2MPS19_LDO3,
	S2MPS19_LDO4,
	S2MPS19_LDO5,
	S2MPS19_LDO6,
	S2MPS19_LDO7,
	S2MPS19_LDO8,
	S2MPS19_LDO9,
	S2MPS19_LDO10,
	S2MPS19_LDO11,
	S2MPS19_LDO12,
/*	S2MPS19_LDO13,
	S2MPS19_LDO14,
*/	S2MPS19_LDO15,
	S2MPS19_LDO16,
	S2MPS19_LDO17,
	S2MPS19_LDO18,
	S2MPS19_LDO19,
	S2MPS19_LDO20,
	S2MPS19_LDO21,
	S2MPS19_LDO22,
	S2MPS19_LDO23,
	S2MPS19_LDO24,
	S2MPS19_LDO25,
	S2MPS19_LDO26,
	S2MPS19_LDO27,
	S2MPS19_LDO28,
	S2MPS19_LDO29,
	S2MPS19_BUCK1,
	S2MPS19_BUCK2,
	S2MPS19_BUCK3,
	S2MPS19_BUCK4,
	S2MPS19_BUCK5,
	S2MPS19_BUCK6,
	S2MPS19_BUCK7,
	S2MPS19_BUCK8,
	S2MPS19_BUCK9,
	S2MPS19_BUCK10,
	S2MPS19_BUCK11,
	S2MPS19_BUCK12,
	S2MPS19_BB,
	S2MPS19_REG_MAX,
};

#define S2MPS19_BUCK_MIN1	300000
#define S2MPS19_BUCK_STEP1	6250
#define S2MPS19_BUCK_MIN2	600000
#define S2MPS19_BUCK_STEP2	12500
#define S2MPS19_LDO_MIN1	700000
#define S2MPS19_LDO_STEP1	25000
#define S2MPS19_LDO_MIN2	1800000
#define S2MPS19_LDO_STEP2	25000
#define S2MPS19_LDO_MIN3	700000
#define S2MPS19_LDO_STEP3	12500
#define S2MPS19_LDO_MIN4	400000
#define S2MPS19_LDO_STEP4	12500
#define S2MPS19_LDO_MIN5	300000
#define S2MPS19_LDO_STEP5	25000
#define S2MPS19_BB_MIN		2600000
#define S2MPS19_BB_STEP		12500

#define S2MPS19_LDO_VSEL_MASK	0x3F
#define S2MPS19_BUCK_VSEL_MASK	0xFF
#define S2MPS19_BB_VSEL_MASK	0xFF
#define S2MPS19_ENABLE_SHIFT	0x06
#define S2MPS19_ENABLE_MASK	(0x03 << S2MPS19_ENABLE_SHIFT)
#define S2MPS19_SW_ENABLE_MASK	0x03
#define S2MPS19_RAMP_DELAY	6000

#define S2MPS19_ENABLE_TIME_LDO		128
#define S2MPS19_ENABLE_TIME_BUCK	130
#define S2MPS19_ENABLE_TIME_BB		160

#define S2MPS19_LDO_N_VOLTAGES	(S2MPS19_LDO_VSEL_MASK + 1)
#define S2MPS19_BUCK_N_VOLTAGES (S2MPS19_BUCK_VSEL_MASK + 1)
#define S2MPS19_BB_N_VOLTAGES (S2MPS19_BB_VSEL_MASK + 1)

#define S2MPS19_PMIC_EN_SHIFT	6
#define S2MPS19_REGULATOR_MAX (S2MPS19_REG_MAX)
#define SEC_PMIC_REV(iodev)    (iodev)->pmic_rev

#define S2MPS19_OCP_WARN_EN_SHIFT		7
#define S2MPS19_OCP_WARN_CNT_SHIFT		6
#define S2MPS19_OCP_WARN_DVS_MASK_SHIFT	5
#define S2MPS19_OCP_WARN_LV_SHIFT		0

#define CURRENT_BS			15625000
#define CURRENT_BD			31250000
#define CURRENT_BV			15625000
#define CURRENT_BB			15625000
#define CURRENT_L150		 1171815
#define CURRENT_L300		 2343750
#define CURRENT_L450		 3515625
#define CURRENT_L600		 4687500
#define CURRENT_L800		 6250000

#define POWER_BS			25000
#define POWER_BD			50000
#define POWER_BV			50000
#define POWER_BB			50000
#define POWER_N150			3750
#define POWER_N300			7500
#define POWER_N450		 	11250
#define POWER_N600		 	15000
#define POWER_N800		 	20000
#define POWER_P150			7500
#define POWER_P300			15000
#define POWER_P450		 	22500
#define POWER_P600		 	60000
#define POWER_P800		 	80000
#define POWER_D150			7500
#define POWER_D300			15000
#define POWER_D450			22500

#define ADC_EN_MASK				0x80
#define ADC_ASYNCRD_MASK		0x80
#define ADC_CAL_EN_MASK			0x40
#define ADC_PTR_MASK			0x3F
#define MUX_PTR_BASE			0x20
#define CURRENT_PTR_BASE		0x00
#define POWER_PTR_BASE			0x10

#define S2MPS19_LDO_START		0x41
#define S2MPS19_LDO_END			0x5D
#define S2MPS19_BUCK_START		0x01
#define S2MPS19_BUCK_END		0x0C
#define S2MPS19_LDO_CNT			29
#define S2MPS19_BUCK_CNT		12

#define SEC_PMIC_REV(iodev)	(iodev)->pmic_rev
#define S2MPS19_MAX_ADC_CHANNEL		8
/*
 * sec_opmode_data - regulator operation mode data
 * @id: regulator id
 * @mode: regulator operation mode
 */

enum s2mps19_irq_source {
	S2MPS19_PMIC_INT1 = 0,
	S2MPS19_PMIC_INT2,
	S2MPS19_PMIC_INT3,
	S2MPS19_PMIC_INT4,
	S2MPS19_PMIC_INT5,
	S2MPS19_PMIC_INT6,
	S2MPS19_PMIC_INT7,

	S2MPS19_IRQ_GROUP_NR,
};

#define S2MPS19_NUM_IRQ_PMIC_REGS	7

enum s2mps19_irq {
	/* PMIC */
	S2MPS19_PMIC_IRQ_PWRONF_INT1,
	S2MPS19_PMIC_IRQ_PWRONR_INT1,
	S2MPS19_PMIC_IRQ_JIGONBF_INT1,
	S2MPS19_PMIC_IRQ_JIGONBR_INT1,
	S2MPS19_PMIC_IRQ_ACOKBF_INT1,
	S2MPS19_PMIC_IRQ_ACOKBR_INT1,
	S2MPS19_PMIC_IRQ_PWRON1S_INT1,
	S2MPS19_PMIC_IRQ_MRB_INT1,

	S2MPS19_PMIC_IRQ_RTC60S_INT2,
	S2MPS19_PMIC_IRQ_RTCA1_INT2,
	S2MPS19_PMIC_IRQ_RTCA0_INT2,
	S2MPS19_PMIC_IRQ_SMPL_INT2,
	S2MPS19_PMIC_IRQ_RTC1S_INT2,
	S2MPS19_PMIC_IRQ_WTSR_INT2,
	S2MPS19_PMIC_IRQ_ADCDONE_INT2,
	S2MPS19_PMIC_IRQ_WRSTB_INT2,

	S2MPS19_PMIC_IRQ_120C_INT3,
	S2MPS19_PMIC_IRQ_140C_INT3,
	S2MPS19_PMIC_IRQ_TSD_INT3,
	S2MPS19_PMIC_IRQ_OVP_INT3,
	S2MPS19_PMIC_IRQ_TIMEOUT2_INT3,
	S2MPS19_PMIC_IRQ_TIMEOUT3_INT3,
	S2MPS19_PMIC_IRQ_SUB_SMPL_INT3,

	S2MPS19_PMIC_IRQ_OCP_B1M_INT4,
	S2MPS19_PMIC_IRQ_OCP_B2M_INT4,
	S2MPS19_PMIC_IRQ_OCP_B3M_INT4,
	S2MPS19_PMIC_IRQ_OCP_B4M_INT4,
	S2MPS19_PMIC_IRQ_OCP_B5M_INT4,
	S2MPS19_PMIC_IRQ_OCP_B6M_INT4,
	S2MPS19_PMIC_IRQ_OCP_B7M_INT4,
	S2MPS19_PMIC_IRQ_OCP_B8M_INT4,

	S2MPS19_PMIC_IRQ_OCP_B9M_INT5,
	S2MPS19_PMIC_IRQ_OCP_B10M_INT5,
	S2MPS19_PMIC_IRQ_OCP_B11M_INT5,
	S2MPS19_PMIC_IRQ_OCP_B12M_INT5,
	S2MPS19_PMIC_IRQ_OCP_BB_INT5,
	S2MPS19_PMIC_IRQ_UV_BB_INT5,
	S2MPS19_PMIC_IRQ_BB_NTR_DET_INT5,

	S2MPS19_PMIC_IRQ_SC_LDO2M_INT6,
	S2MPS19_PMIC_IRQ_SC_LDO13M_INT6,
	S2MPS19_PMIC_IRQ_SC_LDO14M_INT6,
	S2MPS19_PMIC_IRQ_SC_LDO15M_INT6,
	S2MPS19_PMIC_IRQ_SC_LDO28M_INT6,

	S2MPS19_PMIC_IRQ_OC0_INT7,
	S2MPS19_PMIC_IRQ_OC1_INT7,
	S2MPS19_PMIC_IRQ_OC2_INT7,
	S2MPS19_PMIC_IRQ_OC3_INT7,
	S2MPS19_PMIC_IRQ_OC4_INT7,
	S2MPS19_PMIC_IRQ_OC5_INT7,
	S2MPS19_PMIC_IRQ_OC6_INT7,
	S2MPS19_PMIC_IRQ_OC7_INT7,

	S2MPS19_IRQ_NR,
};


enum sec_device_type {
	S2MPS19X,
};

struct s2mps19_dev {
	struct device *dev;
	struct i2c_client *i2c;
	struct i2c_client *pmic;
	struct i2c_client *rtc;
	struct i2c_client *debug_i2c;
	struct mutex i2c_lock;
	struct apm_ops *ops;

	int type;
	int device_type;
	int irq;
	int irq_base;
	int irq_gpio;
	bool wakeup;
	struct mutex irqlock;
	int irq_masks_cur[S2MPS19_IRQ_GROUP_NR];
	int irq_masks_cache[S2MPS19_IRQ_GROUP_NR];

	/* pmic VER/REV register */
	u8 pmic_rev;	/* pmic Rev */
	int adc_mode;
	int adc_sync_mode;

	struct s2mps19_platform_data *pdata;
};

enum s2mps19_types {
	TYPE_S2MPS19,
};

struct pmic_qos_setting {
	struct pm_qos_request req_little_CPUs;
	struct mutex pmic_qos_lock;

	s32 max_freq;
	s32 request_freq;
	bool working;

	unsigned int stop_duration;
};

extern int s2mps19_irq_init(struct s2mps19_dev *s2mps19);
extern void s2mps19_irq_exit(struct s2mps19_dev *s2mps19);

extern void s2mps19_powermeter_init(struct s2mps19_dev *s2mps19);
extern void s2mps19_powermeter_deinit(struct s2mps19_dev *s2mps19);

/* S2MPS19 shared i2c API function */
extern int s2mps19_read_reg(struct i2c_client *i2c, u8 reg, u8 *dest);
extern int s2mps19_bulk_read(struct i2c_client *i2c, u8 reg, int count,
				u8 *buf);
extern int s2mps19_write_reg(struct i2c_client *i2c, u8 reg, u8 value);
extern int s2mps19_bulk_write(struct i2c_client *i2c, u8 reg, int count,
				u8 *buf);
extern int s2mps19_write_word(struct i2c_client *i2c, u8 reg, u16 value);
extern int s2mps19_read_word(struct i2c_client *i2c, u8 reg);

extern int s2mps19_update_reg(struct i2c_client *i2c, u8 reg, u8 val, u8 mask);

#ifdef CONFIG_EXYNOS_OCP
extern void get_s2mps19_i2c(struct i2c_client **i2c);
#endif

#ifdef CONFIG_SEC_PM
extern struct device *ap_pmic_dev;
#endif /* CONFIG_SEC_PM */
#endif /* __LINUX_MFD_S2MPS19_REGULATOR_H */
