/*
 * Timer0_Private.h
 *
 * Created: 6/4/2021 1:26:47 PM
 *  Author: Eng_Fawzi
 */ 


#ifndef TIMER0_PRIVATE_H_
#define TIMER0_PRIVATE_H_

#define TIMER0_TCCR0_REG			(*((volatile u8*)0x53))
#define TIMER0_TCNT0_REG			(*((volatile u8*)0x52))
#define TIMER0_TIMSK_REG			(*((volatile u8*)0x59))
#define TIMER0_TIFR_REG				(*((volatile u8*)0x58))
#define TIMER0_OCR0_REG				(*((volatile u8*)0x5C))

#define OVERFLOW_INT_EN_BIT			(0)
#define COMP_INT_EN_BIT				(1)
#endif /* TIMER0_PRIVATE_H_ */