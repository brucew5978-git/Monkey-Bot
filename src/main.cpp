#include <Servo.h>
#include <Arduino.h>

// Create a Servo object
Servo myServo;

// Define the PWM pin
int servoPinL = 9;
int servoPinR = 7;
int ledPin = 1;

void setup() {
  // Attach the servo to the specified pin

  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Rotate to 0 degrees  
  myServo.attach(servoPinL);
  myServo.write(0);
  delay(20);
  myServo.attach(servoPinR);
  myServo.write(0);
  digitalWrite(ledPin, HIGH);
  delay(1000);

  // Rotate to 90 degrees
  myServo.attach(servoPinL);
  myServo.write(90);
  delay(20);
  myServo.attach(servoPinR);
  myServo.write(90);
  digitalWrite(ledPin, HIGH);
  
  delay(1000);
}
