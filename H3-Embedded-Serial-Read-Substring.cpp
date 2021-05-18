String input;
String output[2];

void setup() {
  Serial.begin(9600);
}

void loop() {
  input = Serial.readString();
  if (input != "")
  {
    output[0] = input.substring(0,2);
    output[1] = input.substring(3,5);
    output[2] = input.substring(6,8);

    Serial.print("Sensor nummer: ");
    Serial.println(output[0]);
    Serial.print("Temperatur: ");
    Serial.println(output[1]);
    Serial.print("Luftfugtighed: ");
    Serial.println(output[2]);
  }
  
  delay(1000);
}
