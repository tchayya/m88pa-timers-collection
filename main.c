/*
 * main.c
 *
 * Created: 5/30/2026 12:30:06 PM
 *  Author: Trix
 */ 
#define F_CPU 16000000
#include <xc.h>
#include <util/delay.h>

int main(void)
{
	DDRC=0x3F;
	PORTC=0x1;

    while(1)
    {
        //TODO:: Please write your application code 
		PORTC ^= 1 << 1;
		_delay_ms(500);
    }
}