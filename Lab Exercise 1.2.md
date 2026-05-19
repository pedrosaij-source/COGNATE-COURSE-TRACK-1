<img width="719" height="460" alt="{4A8CB851-CF89-4EA3-A907-81D525C3132B}" src="https://github.com/user-attachments/assets/a645cea2-d018-4b28-b2ec-bbe25aef93fe" />


This circuit shows an Arduino Uno connected to multiple LEDs through current-limiting resistors. Each LED is wired to a separate digital output pin on the Arduino, allowing the microcontroller to control them independently. The resistors are important because they limit the current flowing through the LEDs, protecting both the LEDs and the Arduino pins from damage.

The LEDs share a common ground connection, which is connected to the Arduino’s GND pin. When a digital pin is set to HIGH in the program, current flows through the resistor and LED, causing the LED to light up. When the pin is LOW, the LED turns off.

This type of circuit is commonly used for beginner electronics and programming projects, such as LED blinking patterns, running lights, traffic light simulations, and learning digital output control using Arduino code.
