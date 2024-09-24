// PComp 2024
// Analog Input - CheckAnalogValue

// Variables
int maxValue = 980;
int minValue = 120;
int previousValue = 0;
int noise = 20;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // Simple approach to deal with noise on analog input

  // read the input on analog pin 0
  int sensorValue = analogRead(A0);
  // check if sensorValue is above maxValue (high noise zone)
  if (sensorValue >= maxValue) {
    previousValue = 1024;
  }
  // check if sensorValue is below minValue (high noise zone)
  else if (sensorValue <= minValue) {
    previousValue = 0;
  }
  // check if sensorValue changed and ignore noise
  else if (sensorValue > (previousValue + noise) || sensorValue < (previousValue - noise)) {
    previousValue = sensorValue;
  }
  delay(2);
  Serial.println(previousValue);
}
