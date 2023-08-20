// ICP Workshop 2020
// Digital Output - Timer

// this constant won't change:
const int  buttonPin = 2;   // the pin that the pushbutton is attached to
const int ledPin = 13;       // the pin that the LED is attached to

// Variables will change:
int buttonState = 1;         // current state of the button
int lastButtonState = 0;     // previous state of the button

long time = 0;               // the last time the output pin was toggled
long debounce = 200;         // the debounce time, increase if the output flickers

void setup() {
  // put your setup code here, to run once:

  pinMode(buttonPin, INPUT);       // initialize digital pin 12 (buttonPin) as an input.
  pinMode(ledPin, OUTPUT);          // initialize digital pin 13 (ledPin) as an output.
}


void loop() {
  // read the pushbutton input pin:

  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH && millis() - time > debounce) {
    if (lastButtonState == HIGH) {
      buttonState = LOW;
    }
    else {
      buttonState = HIGH;
    }
    time = millis();
    
    digitalWrite(ledPin, buttonState);    // Turn LED ON
    lastButtonState = buttonState;        // Update Button State
    delay(6000);                          // wait for 3 seconds
    buttonState = LOW;                    // Change Button state to OFF (LOW)
    digitalWrite(ledPin, buttonState);    // Turn LED OFF
    lastButtonState = buttonState;         // Update Button State
    
  }
}
