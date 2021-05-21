#include <LiquidCrystal.h>
int speed = 0;
int temp = 20;
int i = 0;

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(6, OUTPUT);
}

void loop() {
  analogWrite(6, speed);
  lcd.setCursor(0,0);
  lcd.print("Temperatur: ");
  lcd.setCursor(12,0);
  lcd.print(temp);
  lcd.setCursor(0,1);
  lcd.print(" Hastighed: ");
  lcd.setCursor(12,1);
  lcd.print(speed);
  if (speed > 0)
  {
    lcd.setCursor(15,1);
    lcd.print('|');
    delay(150);
    lcd.setCursor(15,1);
    lcd.print('/');
    delay(150);
    lcd.setCursor(15,1);
    lcd.print('-');
    delay(150);
    lcd.setCursor(15,1);
    lcd.print('\\');
    delay(150);
  }
  else
  {
    lcd.setCursor(15,1);
    lcd.print(' ');
  }
  if (temp <= 20)
  {
    speed = 0;
  }
  if (temp > 20 && temp < 25)
  {
    speed = 100;
  }
  if (temp >= 25)
  {
    speed = 250;
  }
  // Nedenstående er hardcoded demo-data da jeg ikke havde mulighed for at manipulere med temperaturen
  i++;
  if (i > 10) temp = 23; 
  if (i > 20) temp = 26;
  if (i > 40) temp = 24;
  if (i > 60) 
  {
    temp = 19;
    i = 0;
  }
}
 
