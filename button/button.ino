#include <Arduino.h>

const int buttonPin = 2;
const int ledPin = 13;

int buttonState = 0;   


void setup() {
  Serial.begin(9600);

  pinMode(ledPin, OUTPUT);              // initialize the LED pin as an output:
  pinMode(buttonPin, INPUT_PULLUP);     // initialize the pushbutton pin as an input pullup

  Serial.println("init done");
}


void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is LOW (due to INPUT_PULLUP mode):
  if (buttonState == LOW) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    Serial.print("!");
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
    Serial.print(".");
  }

  delay(100);
}