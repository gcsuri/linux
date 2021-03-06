/*
 * drivers/amlogic/pinctrl/pinctrl_gxtvbb.c
 *
 * Copyright (C) 2015 Amlogic, Inc. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
*/

#ifndef __AMLOGIC_PINCTRL_GXTVBB_H
#define __AMLOGIC_PINCTRL_GXTVBB_H

#define EE_OFFSET	(14)
#define MESON_PIN(x, n)	PINCTRL_PIN((EE_OFFSET + x), n)


#define	PIN_GPIOZ_0	(EE_OFFSET + GPIOZ_0)
#define	PIN_GPIOZ_1	(EE_OFFSET + GPIOZ_1)
#define	PIN_GPIOZ_2	(EE_OFFSET + GPIOZ_2)
#define	PIN_GPIOZ_3	(EE_OFFSET + GPIOZ_3)
#define	PIN_GPIOZ_4	(EE_OFFSET + GPIOZ_4)
#define	PIN_GPIOZ_5	(EE_OFFSET + GPIOZ_5)
#define	PIN_GPIOZ_6	(EE_OFFSET + GPIOZ_6)
#define	PIN_GPIOZ_7	(EE_OFFSET + GPIOZ_7)
#define	PIN_GPIOZ_8	(EE_OFFSET + GPIOZ_8)
#define	PIN_GPIOZ_9	(EE_OFFSET + GPIOZ_9)
#define	PIN_GPIOZ_10	(EE_OFFSET + GPIOZ_10)
#define	PIN_GPIOZ_11	(EE_OFFSET + GPIOZ_11)
#define	PIN_GPIOZ_12	(EE_OFFSET + GPIOZ_12)
#define	PIN_GPIOZ_13	(EE_OFFSET + GPIOZ_13)
#define	PIN_GPIOZ_14	(EE_OFFSET + GPIOZ_14)
#define	PIN_GPIOZ_15	(EE_OFFSET + GPIOZ_15)
#define	PIN_GPIOZ_16	(EE_OFFSET + GPIOZ_16)
#define	PIN_GPIOZ_17	(EE_OFFSET + GPIOZ_17)
#define	PIN_GPIOZ_18	(EE_OFFSET + GPIOZ_18)
#define	PIN_GPIOZ_19	(EE_OFFSET + GPIOZ_19)
#define	PIN_GPIOZ_20	(EE_OFFSET + GPIOZ_20)

#define	PIN_GPIOH_0	(EE_OFFSET + GPIOH_0)
#define	PIN_GPIOH_1	(EE_OFFSET + GPIOH_1)
#define	PIN_GPIOH_2	(EE_OFFSET + GPIOH_2)
#define	PIN_GPIOH_3	(EE_OFFSET + GPIOH_3)
#define	PIN_GPIOH_4	(EE_OFFSET + GPIOH_4)
#define	PIN_GPIOH_5	(EE_OFFSET + GPIOH_5)
#define	PIN_GPIOH_6	(EE_OFFSET + GPIOH_6)
#define	PIN_GPIOH_7	(EE_OFFSET + GPIOH_7)
#define	PIN_GPIOH_8	(EE_OFFSET + GPIOH_8)
#define	PIN_GPIOH_9	(EE_OFFSET + GPIOH_9)
#define	PIN_GPIOH_10	(EE_OFFSET + GPIOH_10)

#define	PIN_BOOT_0	(EE_OFFSET + BOOT_0)
#define	PIN_BOOT_1	(EE_OFFSET + BOOT_1)
#define	PIN_BOOT_2	(EE_OFFSET + BOOT_2)
#define	PIN_BOOT_3	(EE_OFFSET + BOOT_3)
#define	PIN_BOOT_4	(EE_OFFSET + BOOT_4)
#define	PIN_BOOT_5	(EE_OFFSET + BOOT_5)
#define	PIN_BOOT_6	(EE_OFFSET + BOOT_6)
#define	PIN_BOOT_7	(EE_OFFSET + BOOT_7)
#define	PIN_BOOT_8	(EE_OFFSET + BOOT_8)
#define	PIN_BOOT_9	(EE_OFFSET + BOOT_9)
#define	PIN_BOOT_10	(EE_OFFSET + BOOT_10)
#define	PIN_BOOT_11	(EE_OFFSET + BOOT_11)
#define	PIN_BOOT_12	(EE_OFFSET + BOOT_12)
#define	PIN_BOOT_13	(EE_OFFSET + BOOT_13)
#define	PIN_BOOT_14	(EE_OFFSET + BOOT_14)
#define	PIN_BOOT_15	(EE_OFFSET + BOOT_15)
#define	PIN_BOOT_16	(EE_OFFSET + BOOT_16)
#define	PIN_BOOT_17	(EE_OFFSET + BOOT_17)
#define	PIN_BOOT_18	(EE_OFFSET + BOOT_18)

#define	PIN_CARD_0	(EE_OFFSET + CARD_0)
#define	PIN_CARD_1	(EE_OFFSET + CARD_1)
#define	PIN_CARD_2	(EE_OFFSET + CARD_2)
#define	PIN_CARD_3	(EE_OFFSET + CARD_3)
#define	PIN_CARD_4	(EE_OFFSET + CARD_4)
#define	PIN_CARD_5	(EE_OFFSET + CARD_5)
#define	PIN_CARD_6	(EE_OFFSET + CARD_6)

#define	PIN_GPIOW_0	(EE_OFFSET + GPIOW_0)
#define	PIN_GPIOW_1	(EE_OFFSET + GPIOW_1)
#define	PIN_GPIOW_2	(EE_OFFSET + GPIOW_2)
#define	PIN_GPIOW_3	(EE_OFFSET + GPIOW_3)
#define	PIN_GPIOW_4	(EE_OFFSET + GPIOW_4)
#define	PIN_GPIOW_5	(EE_OFFSET + GPIOW_5)
#define	PIN_GPIOW_6	(EE_OFFSET + GPIOW_6)
#define	PIN_GPIOW_7	(EE_OFFSET + GPIOW_7)
#define	PIN_GPIOW_8	(EE_OFFSET + GPIOW_8)
#define	PIN_GPIOW_9	(EE_OFFSET + GPIOW_9)
#define	PIN_GPIOW_10	(EE_OFFSET + GPIOW_10)
#define	PIN_GPIOW_11	(EE_OFFSET + GPIOW_11)
#define	PIN_GPIOW_12	(EE_OFFSET + GPIOW_12)
#define	PIN_GPIOW_13	(EE_OFFSET + GPIOW_13)
#define	PIN_GPIOW_14	(EE_OFFSET + GPIOW_14)
#define	PIN_GPIOW_15	(EE_OFFSET + GPIOW_15)
#define	PIN_GPIOW_16	(EE_OFFSET + GPIOW_16)
#define	PIN_GPIOW_17	(EE_OFFSET + GPIOW_17)
#define	PIN_GPIOW_18	(EE_OFFSET + GPIOW_18)
#define	PIN_GPIOW_19	(EE_OFFSET + GPIOW_19)
#define	PIN_GPIOW_20	(EE_OFFSET + GPIOW_20)

#define	PIN_GPIOY_0	(EE_OFFSET + GPIOY_0)
#define	PIN_GPIOY_1	(EE_OFFSET + GPIOY_1)
#define	PIN_GPIOY_2	(EE_OFFSET + GPIOY_2)
#define	PIN_GPIOY_3	(EE_OFFSET + GPIOY_3)
#define	PIN_GPIOY_4	(EE_OFFSET + GPIOY_4)
#define	PIN_GPIOY_5	(EE_OFFSET + GPIOY_5)
#define	PIN_GPIOY_6	(EE_OFFSET + GPIOY_6)
#define	PIN_GPIOY_7	(EE_OFFSET + GPIOY_7)
#define	PIN_GPIOY_8	(EE_OFFSET + GPIOY_8)
#define	PIN_GPIOY_9	(EE_OFFSET + GPIOY_9)
#define	PIN_GPIOY_10	(EE_OFFSET + GPIOY_10)
#define	PIN_GPIOY_11	(EE_OFFSET + GPIOY_11)
#define	PIN_GPIOY_12	(EE_OFFSET + GPIOY_12)
#define	PIN_GPIOY_13	(EE_OFFSET + GPIOY_13)

#define	PIN_GPIOX_0	(EE_OFFSET + GPIOX_0)
#define	PIN_GPIOX_1	(EE_OFFSET + GPIOX_1)
#define	PIN_GPIOX_2	(EE_OFFSET + GPIOX_2)
#define	PIN_GPIOX_3	(EE_OFFSET + GPIOX_3)
#define	PIN_GPIOX_4	(EE_OFFSET + GPIOX_4)
#define	PIN_GPIOX_5	(EE_OFFSET + GPIOX_5)
#define	PIN_GPIOX_6	(EE_OFFSET + GPIOX_6)
#define	PIN_GPIOX_7	(EE_OFFSET + GPIOX_7)
#define	PIN_GPIOX_8	(EE_OFFSET + GPIOX_8)
#define	PIN_GPIOX_9	(EE_OFFSET + GPIOX_9)
#define	PIN_GPIOX_10	(EE_OFFSET + GPIOX_10)
#define	PIN_GPIOX_11	(EE_OFFSET + GPIOX_11)
#define	PIN_GPIOX_12	(EE_OFFSET + GPIOX_12)
#define	PIN_GPIOX_13	(EE_OFFSET + GPIOX_13)
#define	PIN_GPIOX_14	(EE_OFFSET + GPIOX_14)
#define	PIN_GPIOX_15	(EE_OFFSET + GPIOX_15)
#define	PIN_GPIOX_16	(EE_OFFSET + GPIOX_16)
#define	PIN_GPIOX_17	(EE_OFFSET + GPIOX_17)
#define	PIN_GPIOX_18	(EE_OFFSET + GPIOX_18)
#define	PIN_GPIOX_19	(EE_OFFSET + GPIOX_19)
#define	PIN_GPIOX_20	(EE_OFFSET + GPIOX_20)
#define	PIN_GPIOX_21	(EE_OFFSET + GPIOX_21)
#define	PIN_GPIOX_22	(EE_OFFSET + GPIOX_22)
#define	PIN_GPIOX_23	(EE_OFFSET + GPIOX_23)
#define	PIN_GPIOX_24	(EE_OFFSET + GPIOX_24)
#define	PIN_GPIOX_25	(EE_OFFSET + GPIOX_25)
#define	PIN_GPIOX_26	(EE_OFFSET + GPIOX_26)
#define	PIN_GPIOX_27	(EE_OFFSET + GPIOX_27)

#define	PIN_GPIOCLK_0	(EE_OFFSET + GPIOCLK_0)

#define	PIN_GPIO_TEST_N	(EE_OFFSET + GPIO_TEST_N)


#endif
