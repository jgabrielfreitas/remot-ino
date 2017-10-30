#include <IRremote.h>
#include <ButtonMap.h>
#include <Led.h>

int RECV_PIN = 2;
IRrecv irrecv(RECV_PIN);
decode_results results;
// the setup function runs once when you press reset or power the board
void setup()
{
	Serial.begin(9600);
	irrecv.enableIRIn(); // Start the receiver
	ledSetUp();
}

// the loop function runs over and over again forever
void loop()
{
	if (irrecv.decode(& results))
	{
		Serial.println(results.value, HEX);
		irrecv.resume(); // Receive the next value
		if (results.value == POWER)
		{
			changeStatus();
			Serial.println("POWER");
		}
		
	}
}
