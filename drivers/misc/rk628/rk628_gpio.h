/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2020 Rockchip Electronics Co., Ltd.
 *
 * Author: Wyon Bi <bivvy.bi@rock-chips.com>
 */

#ifndef RK628_GPIO_H
#define RK628_GPIO_H

#define RK628_GPIO0_BASE      0x000D0000
#define RK628_GPIO1_BASE      0x000E0000
#define RK628_GPIO2_BASE      0x000F0000
#define RK628_GPIO3_BASE      0x00100000
#define RK628_GPIO_MAX_REGISTER       (RK628_GPIO3_BASE + GPIO_VER_ID)

/* GPIO control registers */
#define GPIO_SWPORT_DR_L        0x00
#define GPIO_SWPORT_DR_H        0x04
#define GPIO_SWPORT_DDR_L       0x08
#define GPIO_SWPORT_DDR_H       0x0c
#define GPIO_INTEN_L            0x10
#define GPIO_INTEN_H            0x14
#define GPIO_INTMASK_L          0x18
#define GPIO_INTMASK_H          0x1c
#define GPIO_INTTYPE_L          0x20
#define GPIO_INTTYPE_H          0x24
#define GPIO_INT_POLARITY_L     0x28
#define GPIO_INT_POLARITY_H     0x2c
#define GPIO_INT_BOTHEDGE_L     0x30
#define GPIO_INT_BOTHEDGE_H     0x34
#define GPIO_DEBOUNCE_L         0x38
#define GPIO_DEBOUNCE_H         0x3c
#define GPIO_DBCLK_DIV_EN_L     0x40
#define GPIO_DBCLK_DIV_EN_H     0x44
#define GPIO_INT_STATUS         0x50
#define GPIO_INT_RAWSTATUS      0x58
#define GPIO_PORTS_EOI_L        0x60
#define GPIO_PORTS_EOI_H        0x64
#define GPIO_EXT_PORT           0x70
#define GPIO_VER_ID             0x78

#define GPIO_REG_LOW            0x0
#define GPIO_REG_HIGH           0x1

/* GPIO control registers */
#define GPIO_INTMASK            0x34
#define GPIO_PORTS_EOI          0x4c

#define BANK_OFFSET 32

#define GPIO_DIRECTION_OUT 1
#define GPIO_DIRECTION_IN 0

enum {
	GPIO_HIGH_Z,
	GPIO_PULL_UP,
	GPIO_PULL_DOWN,
};

enum {
	GPIO_BANK0 = 0,
	GPIO_BANK1,
	GPIO_BANK2,
	GPIO_BANK3,
	GPIO_BANKX = 9,
};


enum {
	GPIO0_A0 = BANK_OFFSET * 0,
	GPIO0_A1,
	GPIO0_A2,
	GPIO0_A3,
	GPIO0_A4,
	GPIO0_A5,
	GPIO0_A6,
	GPIO0_A7,
	GPIO0_B0,
	GPIO0_B1,
	GPIO0_B2,
	GPIO0_B3,
	GPIO1_A0 = BANK_OFFSET * 1,
	GPIO1_A1,
	GPIO1_A2,
	GPIO1_A3,
	GPIO1_A4,
	GPIO1_A5,
	GPIO1_A6,
	GPIO1_A7,
	GPIO1_B0,
	GPIO1_B1,
	GPIO1_B2,
	GPIO1_B3,
	GPIO1_B4,
	GPIO1_B5,
	GPIO2_A0 = BANK_OFFSET * 2,
	GPIO2_A1,
	GPIO2_A2,
	GPIO2_A3,
	GPIO2_A4,
	GPIO2_A5,
	GPIO2_A6,
	GPIO2_A7,
	GPIO2_B0,
	GPIO2_B1,
	GPIO2_B2,
	GPIO2_B3,
	GPIO2_B4,
	GPIO2_B5,
	GPIO2_B6,
	GPIO2_B7,
	GPIO2_C0,
	GPIO2_C1,
	GPIO2_C2,
	GPIO2_C3,
	GPIO2_C4,
	GPIO2_C5,
	GPIO2_C6,
	GPIO2_C7,
	GPIO3_A0 = BANK_OFFSET * 3,
	GPIO3_A1,
	GPIO3_A2,
	GPIO3_A3,
	GPIO3_A4,
	GPIO3_A5,
	GPIO3_A6,
	GPIO3_A7,
	GPIO3_B0,
	GPIO3_B1,
	GPIO3_B2,
	GPIO3_B3,
	GPIO3_B4,
	PIN_I2SM_SCK = BANK_OFFSET * 4 + 2,
	PIN_I2SM_D,
	PIN_I2SM_LR,
	PIN_RXDDC_SCL,
	PIN_RXDDC_SDA,
	PIN_HDMIRX_CE,
	PIN_JTAG_EN,
	PIN_UART_SEL,
	PIN_UART_RTS_EN,
	PIN_UART_CTS_EN,
	PIN_MUX,
};

#endif // RK628_GPIO_H
