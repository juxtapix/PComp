// ICP Workshop 2020
// Analog Sensor - Sharp (Distance)

// constants won't change.
const int sensorPin = A0;           // Sensor pin
const int numReadings = 70;         // Number of readings

// variables will change:
int val = 0;                        // variable for reading the pin status
int total = 0;                      // the running total
int average = 0;                    // the average


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  total = 0;
  
  for (int i = 0; i < numReadings; i++) {
    val = analogRead(sensorPin);
    total = total + val;
    delay(2);
  }

  average = total / numReadings;
  Serial.println(average);
}
