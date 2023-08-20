// PComp 2023
// Digital Output - Fade

// Constant:
const int pwmPin = 9;
const int fadeAmount = 5;

void setup() {
  // You do not need to call pinMode() to set the pin as an Analog Output(PWM).
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = 0 ; fadeValue <= 255; fadeValue += fadeAmount) {
    // sets the value (range from 0 to 255):
    analogWrite(pwmPin, fadeValue);
    // wait for 50 milliseconds
    delay(50);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = 255 ; fadeValue >= 0; fadeValue -= fadeAmount) {
    // sets the value (range from 0 to 255):
    analogWrite(pwmPin, fadeValue);
    // wait for 50 milliseconds
    delay(50);
  }
}
