//3.a.Hardware- To interface a temperature sensor (e.g., LM35) with Arduino

const int sensorPin = A0;
void setup() {
  Serial.begin(9600);
  Serial.println("Temperature Sensor Interface Starting...");
}
void loop() {
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float temperature = voltage * 100.0;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  delay(1000);
}