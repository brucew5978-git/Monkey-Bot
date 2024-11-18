#include <Arduino.h>

// Define the pin for the LED
int ledPin = 9;

void setup() {
  // Set the LED pin as an OUTPUT
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED ON
  digitalWrite(ledPin, HIGH);
  delay(1000); // Wait for 1 second

  // Turn the LED OFF
  digitalWrite(ledPin, LOW);
  delay(1000); // Wait for 1 second
}
