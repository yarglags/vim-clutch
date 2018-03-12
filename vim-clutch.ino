#include "DigiKeyboard.h"
#define KeySwitch 2
boolean EditMode = false;

void setup() {
  pinMode(KeySwitch, INPUT);
  digitalWrite(KeySwitch, HIGH);   // Internal pull-up
  }

void loop() {
  if (digitalRead(KeySwitch) == LOW && EditMode == true) {
    DigiKeyboard.sendKeyStroke(KEY_I);
    EditMode = false;
  }
  if (digitalRead(KeySwitch) == HIGH && EditMode == false) {
    DigiKeyboard.sendKeyStroke(41); // ESC character - Not in DigiKeyboard.h
    EditMode = true;
  }
// DigiKeyboard.delay(10);
}
