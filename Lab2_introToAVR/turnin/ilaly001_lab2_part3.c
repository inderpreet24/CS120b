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
    DDRB = 0xFF; PORTB = 0x00;
     unsigned char tmpA = 0;
    unsigned char cntaval = 0;

    while (1) {
	tmpA = PINA;
	if (tmpA == 0x00 || tmpA == 0x80) {
	        cntaval = 0x04;
                     PORTC = cntaval;
	}
	else if (tmpA == 0x01 || tmpA == 0x02 || tmpA == 0x04 || tmpA == 0x08) {
                       cntaval = 0x03;
		PORTC = cntaval;	
	}
	else if ( tmpA == 0x03 || tmpA == 0x05 || tmpA ==0x06 || tmpA ==0x09) {
                     cntaval = 0x02;
                    PORTC = cntaval;	
        }
        else if(tmpA == 0x07 || tmpA == 0x0B || tmpA == 0x0D || tmpA == 0x0E) {
                 cntaval = 0x01;
    		PORTC = cntaval;
        }
	else {
          cntaval = 0x80;
           PORTC = cntaval;
	    }
}
    return 1;
}

