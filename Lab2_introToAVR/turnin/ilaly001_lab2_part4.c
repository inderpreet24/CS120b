/*	Author: ilaly001
 *  Partner(s) Name: None
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    
    DDRA = 0x00; PORTA = 0xFF;
    DDRB = 0x00; PORTB = 0xFF;
    DDRC = 0x00; PORTC = 0xFF;
    DDRD = 0xFF; PORTD =0x00;
     unsigned char tmpA = 0;
    unsigned char tmpB = 0;
   unsigned char tmpC = 0;
   unsigned char tmpD = 0;

    while (1) {
	tmpA = PINA;
        tmpB = PINB;
        tmpC = PINC;
        tmpD = (tmpA + tmpB + tmpC) >>2;
 	tmpD = tmpD & 0xFC;

	if (tmpA - tmpC > 80 || tmpC - tmpA > 80) {
	        tmpD = tmpD | 0x02;
 	PORTD = tmpD;
	}
	if (tmpA + tmpB + tmpC > 140) {
                 tmpD = tmpD | 0x01;
	PORTD = tmpD;
	}
             
	    }
    return 1;
}

