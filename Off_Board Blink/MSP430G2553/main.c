#include <msp430.h>


/*
 This code is meant to be used to blink an LED on a breadboard
 */

void main(void)
{
    WDTCTL = WDTPW | WDTHOLD;       // stop watchdog timer
    P1DIR |= (BIT0 + BIT6);         // configure P1.0 and P1.6 as output
    P1OUT &= ~(BIT0 + BIT6);        // reset the LEDs so they start in off position

    while(1)
    {
        P1OUT ^= (BIT0 + BIT6);             // toggle P1.0 and P1.6LED
        __delay_cycles(250000);;
    }
}
