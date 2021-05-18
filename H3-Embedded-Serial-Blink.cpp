int serialInput = 0;
int delayMultiplier = 1;
int delayTime = 100;

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  serialInput = Serial.read();
  delayMultiplier = serialInput - 48;
  if (serialInput > 47 && serialInput < 58)
  {
    delayTime = 100 * delayMultiplier;
    Serial.print("You pressed ");
    Serial.write(serialInput);
    Serial.println();
    Serial.print("New delay set to: ");
    Serial.println(delayTime);
  }
  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(13, LOW);
  delay(delayTime);
}
