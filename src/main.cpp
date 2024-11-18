#include <Servo.h>
#include <Arduino.h>

// Create a Servo object
Servo myServo;

// Define the PWM pin
int servoPin = 9;

void setup() {
  // Attach the servo to the specified pin
  myServo.attach(servoPin);
}

void loop() {
  // Rotate to 0 degrees
  myServo.write(0);
  delay(1000);

  // Rotate to 90 degrees
  myServo.write(90);
  delay(1000);

  // Rotate to 180 degrees
  myServo.write(180);
  delay(1000);
}
