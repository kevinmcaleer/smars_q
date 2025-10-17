# SMARS Q - Distance Monitor

### Description

This project measures distance using an ultrasonic range finder sensor connected to an Arduino board. The system reads distance measurements from the ultrasonic sensor and outputs them to both the Serial monitor and the Arduino Monitor interface.

### What the Code Does

#### Arduino Sketch (`sketch.ino`)
The Arduino code controls an ultrasonic distance sensor (HC-SR04):
- **Initialization**: Sets up the trigger pin (pin 3) and echo pin (pin 2) for the ultrasonic sensor
- **Ping Function**: Sends a ultrasonic pulse and measures the echo time to calculate distance
  - Triggers a pulse on the trigger pin
  - Waits for the echo signal on the echo pin
  - Calculates distance using the formula: `distance = duration × 0.034 / 2` (in cm)
- **Loop**: Continuously reads distance every 500ms and outputs to both Serial and Monitor

#### Python Application (`main.py`)
A simple Python entry point that demonstrates the basic application structure.

### Features
- Real-time distance measurement using ultrasonic sensor
- Outputs measurements to Serial monitor (9600 baud)
- Dual output to both Serial and Monitor interfaces
- Non-blocking 500ms measurement intervals




