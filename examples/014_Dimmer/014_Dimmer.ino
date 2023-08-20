// ICP Workshop 2020
// Analog Input and PWM - Dimmer

// constants won't change.
const int ledPin = 10;
const int potPin = A0;

// variables will change:
int val = 0;                        // variable to store the analog value

void setup() {
  // put your setup code here, to run once:

  pinMode(ledPin, OUTPUT);         // initialize pin 10 as an output.
}

void loop() {
  // put your main code here, to run repeatedly:

  val = analogRead(potPin);       // read the analog pin
  analogWrite(ledPin, val / 4);   // analogRead values go from 0 to 1023, analogWrite values from 0 to 255
}
