// PComp 2023
// Digital Output - Blink

void setup() {
  // put your setup code here, to run once:

  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(13, HIGH);       // turn the LED on (HIGH)
  delay(1000);                  // wait for 1 second
  digitalWrite(13, LOW);        // turn the LED off (LOW)
  delay(1000);                  // wait for 1 second
}
