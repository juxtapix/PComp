// PComp 2023
// Digital Output - Button

// constants won't change.
const int buttonPin = 2;     // Button pin
const int ledPin = 13;        // LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton state

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonPin, INPUT);       // initialize digital pin 12 (buttonPin) as an input.
  pinMode(ledPin, OUTPUT);          // initialize digital pin 13 (ledPin) as an output.
}

void loop() {
  // put your main code here, to run repeatedly:

  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }
}
