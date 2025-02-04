#include <Servo.h>
#include <Arduino.h>

Servo servoL;
Servo servoR;

//PWM pin
int servoPinL = 9;
int servoPinR = 10;

void setup() {
  //Attach servos to the specific pin
  servoL.attach(servoPinL);
  servoR.attach(servoPinR);
}

void loop() {
  //Start position
  servoL.write(0);
  servoR.write(0);
  delay(1000);

  //Rotate to 90 degrees
  servoL.write(90);
  servoR.write(180);
  delay(1000);
}
