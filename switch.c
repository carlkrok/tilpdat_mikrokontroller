/*
 * CFile1.c
 *
 * Created: 21.03.2017 17:08:20
 *  Author: carlmk
 */ 

#include "switch.h"
#include <avr/io.h>

#define BUTTON0 1
#define BUTTON1 3
#define BUTTON2 5
#define BUTTON3 7

void switch_init()
{
	PORTB |= (1 << BUTTON0) |(1 << BUTTON1) |(1 << BUTTON2) |(1 << BUTTON3);
	DDRB &= ~((1 << BUTTON0) |(1 << BUTTON1) |(1 << BUTTON2) |(1 << BUTTON3));
}

int switch_read(int n)
{
	uint8_t read = (PINB & (1 << n));
	
	if (read)
	{
		return 0;
	}
	else {
		return 1;
	}
}