/*
 * led.c
 *
 * Created: 21.03.2017 17:08:51
 *  Author: carlmk
 */ 

#include "led.h"
#include <avr/io.h>

#define LED0 0
#define LED1 2
#define LED2 4
#define LED3 6


void led_init() {
	
	PORTB |= (1 << LED0) |(1 << LED1) |(1 << LED2) |(1 << LED3);
	DDRB = (1 << LED0) |(1 << LED1) |(1 << LED2) |(1 << LED3);
	
}


void led_set(int n, int v) {
	
	if (v)
	{
		PORTB |= (v << n);
	}
	else {
		PORTB &= ~(1 << n);
	}
}