float x = 1.0;
float y = -1.0;
float z = 2.1;

String valueX;
String valueY;
String valueZ;

void setup() {
  pinMode(13, OUTPUT);
  pinMode(13, LOW);
  Serial.begin(9600);
}

void loop() {
  valueX = String(x,1);
  valueY = String(y,1);
  valueZ = String(z,1);
  
  Serial.println("Udskriver som en CSV-streng:");
  Serial.println(String(valueX +  "," + valueY + "," + valueZ));

  Serial.println("Udskriver som et JSON-object");
  String json = "{""sensor"":""accelerometer"",""data"":[";
  json = json + valueX;
  json = json + ',';
  json = json + valueY;
  json = json + ',';
  json = json + valueZ;
  json = json + "]}";
  Serial.println(json);

  delay(5000);
}
