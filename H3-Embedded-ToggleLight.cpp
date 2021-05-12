#include <Arduino.h>

#define KNAP 2
#define LED 5
bool KnapState;
bool SidsteKnap = LOW;
bool LedOn = false;

unsigned long lastDebounce = 0;
unsigned long debounceDelay = 50;

void setup() {
	Serial.begin(9600);
	pinMode(KNAP, INPUT_PULLUP);
	pinMode(LED, OUTPUT);
	digitalWrite(LED, LedOn);
}

void loop() {
	bool KnapOn = digitalRead(KNAP);
	if (KnapOn != SidsteKnap) 
	{
		lastDebounce = millis();
	}
	if ((millis() - lastDebounce) > debounceDelay) 
	{
		if (KnapOn != KnapState)
		 {
			KnapState = KnapOn;
			if (KnapState == 1) 
			{
				LedOn = !LedOn;
				Serial.print("Dioden er ");
				if (LedOn) 
				{
					Serial.println("taendt.");
				}
				else 
				{
					Serial.println("slukket.");
				}
			}
		}
	}
	
	digitalWrite(LED, LedOn);
	SidsteKnap = KnapOn;	
}
