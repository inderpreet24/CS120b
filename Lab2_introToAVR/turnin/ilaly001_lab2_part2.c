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
	if (tmpA == 0x01) {
	        cntaval +=1;
                     PORTC = cntaval;
	}
	if (tmpA == 0x02) {
                  
                       cntaval +=1;
		PORTC = cntaval;	
	}
	if ( tmpA == 0x04) {
                    
                     cntaval +=1;
                    PORTC = cntaval;	
        }
	if(tmpA == 0x08){
           cntaval +=1;
           PORTC = cntaval;
	 
   }
}
    return 1;
}

