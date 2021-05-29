/*
 * ExtINT_Private.h
 *
 *  Created on: May 28, 2021
 *      Author: Eng_Fawzi
 */

#ifndef EXTINT_PRIVATE_H_
#define EXTINT_PRIVATE_H_

#define EXTINT_MCUCR_REG				(*(volatile u8*)0x55)
#define EXTINT_MCUCSR_REG				(*(volatile u8*)0x54)
#define EXTINT_GICR_REG					(*(volatile u8*)0x5B)

#define INT0_EN_BIT						(6)

#endif /* EXTINT_PRIVATE_H_ */
