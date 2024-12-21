# Motion Sensor Arduino Project

## Description

This project utilizes a motion sensor to detect movement and trigger a response, such as activating an LED or an alarm. It is built using Arduino and integrates with a PIR (Passive Infrared) sensor to detect motion in its vicinity. The code can be customized to trigger different actions based on the detected motion.

## Features
- Detects motion with the PIR sensor.
- Triggers actions such as turning on an LED or an alarm.
- Simple setup with Arduino.

## Requirements

- Arduino board (e.g., Arduino Uno)
- PIR motion sensor
- LED (optional)
- Buzzer or alarm (optional)
- Jumper wires
- Breadboard (optional)

## Wiring Setup

1. **PIR Sensor**:
   - VCC to 5V on Arduino
   - GND to GND on Arduino
   - OUT to a digital input pin (e.g., Pin 7)

2. **LED (Optional)**:
   - Anode (long leg) to a digital output pin (e.g., Pin 13)
   - Cathode (short leg) to GND through a resistor (220 ohms)

3. **Buzzer (Optional)**:
   - Positive leg to a digital output pin (e.g., Pin 8)
   - Negative leg to GND


