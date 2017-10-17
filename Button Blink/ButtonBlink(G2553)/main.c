#include <msp430.h> 


/**
 * main.c
 * ButtonBlink
 */
int main(void)
{
    WDTCTL = WDTPW | WDTHOLD;               // Stop WDT

    // Configure GPIO
    P1OUT &= ~BIT0;                         // Clear P1.0 output latch for a defined power-on state
    P1DIR |= BIT0;                          // Set P1.0 to output direction
    P1OUT &= ~BIT6;                        // Clear P1.1 output latch
    P1DIR |= BIT6;                          // Set p1.1 output latch

    P1DIR &= ~BIT3;
    P1REN |= BIT3;
    P1OUT |= BIT3;
    
    P1DIR |= BIT6;


 while(1)
    {
        while(P1IN & BIT3){         
            P1OUT &= ~BIT0;       
            P1OUT |= BIT6;
        }
        P1OUT |= BIT0;           
        P1OUT &= ~BIT6;
    }
}
