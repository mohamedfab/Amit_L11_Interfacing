/*
 * Amit_L11_Interfacing.c
 *
 * Created: 6/4/2021 2:30:29 AM
 *  Author: Eng_Fawzi
 */ 

#define F_CPU 16000000UL
#include "util/delay.h"
#include "GlblInterrupt_Interface.h"
#include "BIT_MATH.h"
#include "avr/io.h"
#include "Led_Interface.h"
int main(void)
{
	Led_Init();
	/*	Reset CPU every 2.1 s	*/
SET_BIT(WDTCR,3);	
WDTCR|=0x07;

Led_ON(LED0);
_delay_ms(1000);
Led_OFF(LED0);
_delay_ms(1000);


    while(1)
    {
		asm("WDR");
    }
}