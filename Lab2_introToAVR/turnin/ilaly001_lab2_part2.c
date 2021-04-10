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
DDRA=0x00;PORTA = 0xFF;
    DDRB = 0xFF; PORTB = 0x00;
    unsigned char tempA = 0x00;
    unsigned char cntavail = 0;
    while (1) {
	tempA = PINA;
	if (tempA == 0x00) {
 		//4 Spots
                cntavail = 0x04;
		PORTC = cntavail;
	}
	else if (tempA == 0x01 || tempA == 0x02 || tempA == 0x04 || tempA == 0x08) {
		//3 Spots
                 cntavail = 0x03;
                PORTC =cntavail;	
	}
	else if (tempA == 0x03 || tempA == 0x05 || tempA == 0x06 || tempA == 0x09 || tempA == 0x0A || tempA == 0x0C) {
		//2 Spots
                cntavail = 0x02;
                PORTC = 0x02;
	}
	else if (tempA == 0x07 || tempA == 0x0B || tempA == 0x0D || tempA == 0x0E) {
                  //1 Parking
                   cntavail = 0x01;
                   PORTC = 0x01;
        }
	else {
                  //No Parking
 		cntavail = 0x00;
		PORTC = cntavail;
	}
    }
    return 1;
}
