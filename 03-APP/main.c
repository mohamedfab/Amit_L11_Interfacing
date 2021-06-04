/*
 * Amit_L11_Interfacing.c
 *
 * Created: 6/4/2021 2:30:29 AM
 *  Author: Eng_Fawzi
 */ 

#define F_CPU 16000000UL
#include "GlblInterrupt_Interface.h"
#include "Timer0_Private.h"
#include "avr/interrupt.h"
#include "Led_Interface.h"

#define NO_OF_OVERFLOWS		(100)
#define TIMER0_START_VALUE	(100)
#define PRESCALLER_1024		(5)

volatile u8 count=0;
ISR(TIMER0_OVF_vect)
{
	count++;
	if (count == NO_OF_OVERFLOWS)
	{
	 /*	Take Your Action	*/
	 
	 Led_Toggle(LED0);
	 count=0;
	}
	TIMER0_TCNT0_REG = TIMER0_START_VALUE;
}

int main(void)
{
	Led_Init();
	EnableAllInterrupts();
	TIMER0_TCNT0_REG = TIMER0_START_VALUE;
	/*	Enable Timer0 Overflow Interrupt	*/
	SET_BIT(TIMER0_TIMSK_REG,OVERFLOW_INT_EN_BIT);
	/*	Set Timer0 Prescaller to /1024	*/
	/*	Start Timer	*/
	TIMER0_TCCR0_REG|=PRESCALLER_1024;

	
    while(1)
    {
       
    }
}