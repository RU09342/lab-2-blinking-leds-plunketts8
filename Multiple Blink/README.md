# Multiple Blink
The goal of this section of the lab is to make two different LEDs blink at diffrent rates. 

## Implementation 
Similair to other sections, the main logic behind the program will be the same but with just slight implementation or syntax changes between each board. Different to simple blink two LEDs need to initialized.


Example on getting two LEDs to blink one twice as fast as the other:
```c
 while(1)									
    {
        P1OUT ^= BIT0;                      //Toggle LED1 on and off.
        P1OUT ^= BIT1;                      //Toggle LED2 on and off.
        __delay_cycles(500000);             //Adjust speed
        P1OUT ^= BIT1;                      //Toggle LED2 at a different rate
        __delay_cycles(500000);             //Adjust speed
    }
```
This same method is used across each board.