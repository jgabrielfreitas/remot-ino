// ***************** INCLUDES ***********************
#include <Arduino.h>
bool ON = true;
bool OFF = false;
bool status = OFF;

void ledSetUp()
{
	pinMode(LED_BUILTIN, OUTPUT);
}

void turnOn()
{
	digitalWrite(LED_BUILTIN, HIGH);
	status = ON;
}

void turnOff()
{
	digitalWrite(LED_BUILTIN, LOW);
	status = OFF;
}

bool isTurnedOn()
{
	return status;
}

void changeStatus()
{
	if (isTurnedOn() == ON)
	{
		turnOff();
	}
	else
	{
		turnOn();
	}
}
