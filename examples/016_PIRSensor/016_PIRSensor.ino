// ICP Workshop 2020
// Digital Sensor - PIR (Proximity)

// constants won't change.
const int sensorPin = 12;          // Sensor pin
const int ledPin = 13;            // LED pin
 
// variables will change:
int pirState = LOW;               // we start, assuming no motion detected
int val = 0;                      // variable for reading the pin status
 
void setup() {
  Serial.begin(9600);
    
  pinMode(ledPin, OUTPUT);        // initialize led pin as an output.
  pinMode(sensorPin, INPUT);      // initialize sensor pin as an input.
 
}
 
void loop(){
  val = digitalRead(sensorPin);   // read input value
  
  if (val == HIGH) {              // check if the input is HIGH
    digitalWrite(ledPin, HIGH);   // turn LED ON
    if (pirState == LOW) {
      // we have just turned on
      Serial.println("Motion detected!");
      pirState = HIGH;
    }
  } else {
    digitalWrite(ledPin, LOW); // turn LED OFF
    if (pirState == HIGH){
      // we have just turned of
      Serial.println("Motion ended!");
      pirState = LOW;
    }
  }
}
