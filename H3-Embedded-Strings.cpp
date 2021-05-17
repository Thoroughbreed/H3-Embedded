String first;
String second;
String both;

void setup() {
  Serial.begin(9600);
  first = String("Hello");
  second = String("Friends");
  both = String(first + " " + second);
}

void loop() {
  Serial.print(first);
  Serial.print(" - ");
  Serial.println(first.length());
  Serial.print(second);
  Serial.print(" - ");
  Serial.println(second.length());
  delay(500);
  Serial.println("Udskiv begge strings som en");
  delay(500);
  Serial.println(both);
  Serial.print("Og længden er nu: ");
  Serial.println(both.length());
  delay(500);
  Serial.println("Udskriv den 3. karakter i den 2. streng");
  Serial.println(second.charAt(2));
}
