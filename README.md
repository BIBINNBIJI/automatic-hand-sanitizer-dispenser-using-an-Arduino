Materials Required
Arduino Uno/Mega/Nano – 1 unit
Ultrasonic Sensor (HC-SR04) – For detecting hands
Servo Motor (SG90) – To control the dispenser mechanism
Hand Sanitizer Bottle – With a press pump
12V DC Power Supply or USB Power Bank – To power the Arduino
Connecting Wires
Breadboard (optional) – For prototyping
Resistors – As required (for current control)
Mini Pump (optional) – If you want a more advanced version
Circuit Connections
Ultrasonic Sensor (HC-SR04):
VCC: Connect to the 5V pin on Arduino.
GND: Connect to GND on Arduino.
Trigger (Trig): Connect to Arduino digital pin D9.
Echo: Connect to Arduino digital pin D10.
Servo Motor (SG90):
Red Wire (VCC): Connect to 5V pin on Arduino.
Brown Wire (GND): Connect to GND.
Orange Wire (Signal): Connect to Arduino digital pin D3.
Power Supply:
Ensure the Arduino is powered using a USB cable or external power source.

How It Works
The ultrasonic sensor continuously sends sound waves and measures the distance of objects.
When a hand is detected within 10 cm, the Arduino sends a signal to the servo motor.
The servo motor moves to press the sanitizer pump, dispensing sanitizer.
After dispensing, the servo returns to its original position and waits for the next detection.
Advanced Features (Optional Enhancements)
LCD Display: Show messages like "Place your hand."
Mini Pump: Replace the servo with a mini pump for direct dispensing.
Battery Operated: Use a rechargeable battery to make the device portable.
Sensor Adjustment: Add a potentiometer to adjust the detection distance.
LED Indicator: Light up an LED when sanitizer is dispensed.
# automatic-hand-sanitizer-dispenser-using-an-Arduino
