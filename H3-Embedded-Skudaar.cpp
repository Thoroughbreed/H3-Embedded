#include <Arduino.h>
#define LED_Green 5
#define LED_Red 7
//#define year 3600

int year = 2000;
int aarstal;

void setup() {
	Serial.begin(9600);
	
	pinMode(LED_Green, OUTPUT);
	pinMode(LED_Red, OUTPUT);
	digitalWrite(LED_Red, LOW);
	digitalWrite(LED_Green, LOW);
}

void loop() {
	if (year == 1337) {
		for (int i = 0; i < 50; i++)
		{
			digitalWrite(LED_Green, HIGH);
			digitalWrite(LED_Red, LOW);
			delay(50);
			digitalWrite(LED_Red, HIGH);
			digitalWrite(LED_Green, LOW);
			delay(50);
		};
		year++;
	}
	if (year != 1337) {
		if ((year % 4) == 0) {
			if ((year % 100) == 0) {
				if ((year % 400) == 0) {
					digitalWrite(LED_Green, HIGH);
					digitalWrite(LED_Red, LOW);
					Serial.print("Aaret ");
					Serial.print(year);
					Serial.println(" er et skudaar");
				}
				else {
					digitalWrite(LED_Red, HIGH);
					digitalWrite(LED_Green, LOW);
					Serial.print("Aaret ");
					Serial.print(year);
					Serial.println(" er IKKE et skudaar");
				}
			}
			else {
				digitalWrite(LED_Green, HIGH);
				digitalWrite(LED_Red, LOW);
				Serial.print("Aaret ");
				Serial.print(year);
				Serial.println(" er et skudaar");
			}
		}
		else {
			digitalWrite(LED_Red, HIGH);
			digitalWrite(LED_Green, LOW);
			Serial.print("Aaret ");
			Serial.print(year);
			Serial.println(" er IKKE et skudaar");
		}
	}
	
	//	delay(1000);
	aarstal = Serial.parseInt(SKIP_ALL);
	if (aarstal > 0 && aarstal != year) {
	year = aarstal;
	}
}
