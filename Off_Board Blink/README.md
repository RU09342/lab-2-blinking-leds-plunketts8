# Off Board Blink

The goal of the off board blink section is to learn about the capabilities of the MSP430G2553 which is the only board that can be utulized. The processor is taken off the board and placed on breadboard meaning that the following must be accounted for:
* Proper power being supplied to the processor
* Proper Reset Circuitry 
* Proper Bypass and Bulk Capacitors as needed (If you had Dr. Schmalzel for electronics you were reminded daily of how important these are)


## Implementation
The 3.3V output of an arduino was used to suppliy power to the processor when placed on the breadboard. The negative terminal of the battery is connected to the VDD pin of the G2553 and the possitive terminal to the VCC pin. According to the datasheet, the max current output at each pin was 6 mV at that voltage. Images of the wire, resistor, capacitor, chip, and led placement can be found and followed in this folder. In order to program the G2 chip, place back in the MSP board and program normally using CCS.

