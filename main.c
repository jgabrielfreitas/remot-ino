#include <Led.h>


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  ledSetUp();
}

// the loop function runs over and over again forever
void loop() {
  ledOn();   // turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  ledOff();    // turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
}