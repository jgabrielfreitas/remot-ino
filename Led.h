//***************** INCLUDES *********************** 
#include <Arduino.h>

// int LED_BUILTIN = 13;

void ledSetUp()
{
	pinMode(LED_BUILTIN, OUTPUT);
}

void ledOn()
{
	digitalWrite(LED_BUILTIN, HIGH);
}

void ledOff()
{
	digitalWrite(LED_BUILTIN, LOW);
}
