#include <Arduino.h>
#define LED_Green 5
#define LED_Red 7
//#define year 3600

int year = 2000;
int aarstal;

bool CalculateLeap(int y) {
	if ((y % 4) == 0) {
		if ((y % 100) == 0) {
			if ((y % 400) == 0) {
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return true;
		}
	}
	else {
		return false;
	}
}

void setup() {
	Serial.begin(9600);
	
	pinMode(LED_Green, OUTPUT);
	pinMode(LED_Red, OUTPUT);
	digitalWrite(LED_Red, LOW);
	digitalWrite(LED_Green, LOW);
}

void loop() {
	if (CalculateLeap(year)) {
		digitalWrite(LED_Green, HIGH);
		digitalWrite(LED_Red, LOW);
		Serial.print("Aaret ");
		Serial.print(year);
		Serial.println(" er et skudaar");
	}
	else {
		digitalWrite(LED_Green, LOW);
		digitalWrite(LED_Red, HIGH);
		Serial.print("Aaret ");
		Serial.print(year);
		Serial.println(" er IKKE et skudaar");
	}
	
	
	delay(500);
	aarstal = Serial.parseInt(SKIP_ALL);
	if (aarstal > 0 && aarstal != year) {
	year = aarstal;
	}
}

