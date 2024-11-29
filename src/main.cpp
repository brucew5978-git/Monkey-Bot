#include <Servo.h>
#include <Arduino.h>

// Create a Servo object
Servo myServo;

// Define the PWM pin
int servoPinL = 9;
int servoPinR = 7;
int redLedPin1 = 2;
int redLedPin2 = 3;
int blueLedPin = 5;

void setup() {
  // Attach the servo to the specified pin

  pinMode(redLedPin1, OUTPUT);
  pinMode(redLedPin2, OUTPUT);
  pinMode(blueLedPin, OUTPUT);
  digitalWrite(redLedPin1, HIGH);
  digitalWrite(redLedPin2, HIGH);
  digitalWrite(blueLedPin, HIGH);
}

void loop() {
  // Rotate to 0 degrees  
  myServo.attach(servoPinL);
  myServo.write(0);
  delay(20);
  myServo.attach(servoPinR);
  myServo.write(0);
  // digitalWrite(redLedPin1, HIGH);
  // digitalWrite(redLedPin2, HIGH);
  // digitalWrite(blueLedPin, HIGH);
  delay(1000);

  // Rotate to 90 degrees
  myServo.attach(servoPinL);
  myServo.write(90);
  delay(20);
  myServo.attach(servoPinR);
  myServo.write(90);
  // digitalWrite(redLedPin1, LOW);
  // digitalWrite(redLedPin2, LOW);
  // digitalWrite(blueLedPin, LOW);
  
  delay(1000);
}
