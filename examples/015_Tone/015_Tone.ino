// PComp 2023
// Analog Input - Tone

void setup() {
  // You do not need to call pinMode() to set the pin as an Analog Input.
}

void loop() {
  int sensorReading = analogRead(A0);       // read the value of the analog sensor
  tone(8, sensorReading, 10);               // change the pitch to the sensor value
  delay(10);
}
