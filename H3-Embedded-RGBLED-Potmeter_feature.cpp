#include <Arduino.h>

#define LED_R 3
#define LED_G 5
#define LED_B 6

int R_brightness = 0;
int G_brightness = 0;
int B_brightness = 0;

int R_Old = 0;
int G_Old = 0;
int B_Old = 0;

void setup() {
	Serial.begin(9600);
	pinMode(LED_R, OUTPUT);
	pinMode(LED_G, OUTPUT);
	pinMode(LED_B, OUTPUT);
}

void loop() {
	R_brightness = map(analogRead(A0), 0, 1023, 0, 255);
	G_brightness = map(analogRead(A1), 0, 1023, 0, 255);
	B_brightness = map(analogRead(A2), 0, 1023, 0, 255);
	
	analogWrite(LED_R, R_brightness);
	analogWrite(LED_G, G_brightness);
	analogWrite(LED_B, B_brightness);
	
	if (R_brightness != R_Old || G_brightness != G_Old || B_brightness != B_Old)
	{
		Serial.print("Red potmeter: ");
		Serial.print(R_brightness);
		Serial.print(" - Green potmeter: ");
		Serial.print(G_brightness);
		Serial.print(" - Blue potmeter: ");
		Serial.print(B_brightness);
		Serial.println();		
	}
	delay(200);
	R_Old = R_brightness;
	G_Old = G_brightness;
	B_Old = B_brightness;
}
