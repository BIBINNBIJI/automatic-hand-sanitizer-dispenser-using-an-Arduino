#include <Servo.h>

Servo myServo;  // Create servo object
const int trigPin = 9;  // Ultrasonic Sensor Trigger pin
const int echoPin = 10; // Ultrasonic Sensor Echo pin
long duration;          // Variable to store sensor duration
int distance;           // Variable to store distance

void setup() {
  myServo.attach(3);    // Attach servo to pin 3
  pinMode(trigPin, OUTPUT); // Set trigger pin as OUTPUT
  pinMode(echoPin, INPUT);  // Set echo pin as INPUT
  Serial.begin(9600);   // Start Serial Monitor for debugging
}

void loop() {
  // Generate ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Measure distance
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2; // Convert to cm

  // Check if hand is within 10 cm
  if (distance <= 10) {
    myServo.write(90);  // Move servo to press the pump
    delay(1000);        // Wait for 1 second
    myServo.write(0);   // Return to the original position
    delay(1000);        // Wait for 1 second
  }
}
