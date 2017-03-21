/*
 * GccApplication1.c
 *
 * Created: 21.03.2017 16:31:43
 *  Author: carlmk
 */ 


#include <avr/io.h>
#include "led.h"
#include "switch.h"

int main_1(void)
{
	led_init();
	switch_init();
	
    while(1)
    {
        for (int i = 1; i < 8; i += 2)
        {
			if (switch_read(i)) {
				led_set(i-1, 0);
			}
			else {
				led_set(i-1, 1);
			}
         
		}
	}
}

