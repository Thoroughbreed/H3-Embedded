#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  lcd.print("Jan");
  lcd.setCursor(0,1);
  lcd.print("Andreasen");
}

void loop() {  
  lcd.setCursor(15,0);
  lcd.print('|');
  delay(150);
  lcd.setCursor(15,0);
  lcd.print('/');
  delay(150);
  lcd.setCursor(15,0);
  lcd.print('-');
  delay(150);
  lcd.setCursor(15,0);
  lcd.print('\\');
  delay(150);
}
