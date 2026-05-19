<img width="732" height="476" alt="{04DFE01D-47C4-47AA-92D0-35F9500732FD}" src="https://github.com/user-attachments/assets/9c947170-5050-4d98-956b-fd664ccc3f22" />


This circuit shows an Arduino Uno connected to multiple LEDs through current-limiting resistors. Each LED is wired to a separate digital output pin on the Arduino, allowing the microcontroller to control them independently. The resistors are important because they limit the current flowing through the LEDs, protecting both the LEDs and the Arduino pins from damage.

The LEDs share a common ground connection, which is connected to the Arduino’s GND pin. When a digital pin is set to HIGH in the program, current flows through the resistor and LED, causing the LED to light up. When the pin is LOW, the LED turns off.

This type of circuit is commonly used for beginner electronics and programming projects, such as LED blinking patterns, running lights, traffic light simulations, and learning digital output control using Arduino code.
