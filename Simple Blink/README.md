# Simple Blink
Simple Blink theory and operation works across all MSP430 boards used in this lab.
##Summary
The Simple Blink program will... as crazy as it sounds... simply blink an LED.
##Notes
The main goal of this section of Lab 2 was to learn how to initialze inputs and outputs. 

The code below gives an example of setting Pin 1.0, the LED, as an output.
Example:
```c
	P1OUT &= ~BIT0;                         
	P1DIR |= BIT0;                          

```

The only other major part of Simple Blink was the loop that sets the duty cycle and actually blinks the LED. The program is run in an infinite loop using while(1).
Example:
```c
    while(1)					
    {
        P1OUT ^= BIT0;          
        __delay_cycles(100000); 
    }
```


##Differences between boards
The only signifigant difference between the MSP boards in this portion of the lab was the changing of the pin assignments. Most other functionality remained constant across each board.
