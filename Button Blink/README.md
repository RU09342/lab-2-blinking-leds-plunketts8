# Button Blink

The goal of this lab was to write a program that would toggle the state of a LED with the push of a button.

## Implementation

Similair to the other sections of this lab the correct pins need to be initialized as inputs and outputs. Since there is no interrupts the watchdog timer should be disabled with: 

```c
	WDTCTL = WDTPW + WDTHOLD or WDTCTL = WDTPW | WDTHOLD
```

Polling is used to check whether or not the button has been pressed. This is not the most effiecent way to check but will work well for thus aaplication. The main section of code below shows how polling utulized in a while loop.

```c
    

while(1){

    while(swap == 1)
    {
        P1OUT ^= BIT0;                      // Toggle LED
        __delay_cycles(500000);   //Adjust speed
        if(!(P2IN & BIT1)){
                       swap = 0;
                       P1OUT = ~BIT0;
            }
    }

    while(swap == 0){
        P4OUT ^= BIT7;                      //Toggle one of the two LED at different rate
        __delay_cycles(100000);             //Adjust speed
        if(!(P2IN & BIT1)){
                               swap = 1;
                               P4OUT = ~BIT7;
                    }
        }
    }

```

The code above is encompassed in an infinite while loop that is constantly checking whether or not the button has been pressed. Once the button has ben pushed, the code reaches the if statment and executes the changing of the LED.

