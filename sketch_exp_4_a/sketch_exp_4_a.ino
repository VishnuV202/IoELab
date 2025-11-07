//4.a.Hardware - Interfacing LM35 Temperature Sensor and Buzzer with Arduino to Implement a Threshold-based Alert System

const int tempSensorPin = A0;
const int buzzerPin = 9;
const float thresholdTemp = 40.0;
void setup() {
  pinMode(tempSensorPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int analogValue = analogRead(tempSensorPin);
  float voltage = (analogValue / 1023.0) * 5.0;
  float temperature = voltage * 100.0;
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  if (temperature > thresholdTemp) {
    digitalWrite(buzzerPin, HIGH);
  } else {
    digitalWrite(buzzerPin, LOW);
  }
  delay(1000);
}