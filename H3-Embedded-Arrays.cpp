int numbers[] = {7, 9, 13};
char myName[] = "Jan";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("Lav en løkke der udskriver tallene et for et");
  delay(100);
  for (int i = 0; i < sizeof(numbers); i++)
  {
    Serial.println(numbers[i]);
    delay(100);
  }
  delay(2000);
  
  Serial.println("Prøv at lade løkken udskrive 4 i stedet for 3 elementer");
  delay(100);
  for (int i = 0; i < sizeof(numbers)+1; i++)
  {
    Serial.println(numbers[i]);
    delay(100);
  }
  delay(2000);

  Serial.println("Prøv at lokalisere de 3 tal i hukommelsen vha debug");
  // Har ingen programmer/debug funktionalitet hjemme, prøver med simulatoren
  delay(2000);

  Serial.println("Find dit navn i hukommelsen");
  // Har ingen programmer/debug funktionalitet hjemme, prøver med simulatoren
  delay(2000);

  Serial.println("Udskriv dit navn baglæns vha en løkke der udskriver karaktererne en for en");
  delay(100);
  for (int j = sizeof(myName); j < 0; j--)
  {
    Serial.print(myName[j]);
    Serial.print(" - ");
    delay(100);
  }
  delay(2000);

  Serial.println("Prøv at udskriv navnet med Serial.println(), hvad fortæller længden af udskriften");
  Serial.println(myName);
  Serial.println("Null char (ansi 0) er en terminating char, hvilket fortæller at strengen er slut");

  // End of program, wait 10 sec for loop
  delay(10000);
}
