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
#include "Uart_Interface.h"
#include "Led_Interface.h"
int main(void)
{
	u8 uartRead;
	Led_Init();
	UART_Init(103);
	UART_TransmitStr("Hello UART.............");
    while(1)
    {
		uartRead = UART_ReceiveChr();
		
		if (uartRead == 'm')
		{
			Led_Toggle(LED0);
		}
		else if (uartRead == 'l')
		{
			Led_Toggle(LED1);
		}
    }
}