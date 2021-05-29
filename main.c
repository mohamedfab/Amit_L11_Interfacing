+/*
 * main.c
 *
 *  Created on: May 28, 2021
 *      Author: Eng_Fawzi
 */
#include "avr/io.h"
#include "GlblInterrupt_Interface.h"
#include "ExtINT_Private.h"
#include <avr/interrupt.h>
#include "Led_Interface.h"
#include "avr/io.h"
ISR(INT0_vect)
{
	Led_Toggle(LED0);
}

int main ()
{

	while(1)
	{
		/*	Write your App	*/
	}
return 0;
}
