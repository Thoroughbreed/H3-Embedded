#include <Arduino.h>

#define KNAP 2
bool KnapState;
bool SidsteKnap = LOW;
bool sheepOn = LOW;
int sheepCounter = 0;

unsigned long lastDebounce = 0;
unsigned long debounceDelay = 50;

void setup() {
	Serial.begin(9600);
	pinMode(KNAP, INPUT_PULLUP);
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
			{ sheepOn = HIGH; }
		}
	}
	if (sheepOn) 
	{
		sheepCounter++;
		Serial.print("Antallet af faar er: ");
		Serial.println(sheepCounter);
		sheepOn = LOW;
	}
	SidsteKnap = KnapOn;
}
