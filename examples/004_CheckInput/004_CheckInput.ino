// PComp 2023
// Digital Input - CheckInput

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);           // initialize serial (console) at 9600 bps.
  pinMode(12, INPUT);          // initialize digital pin 13 as an input.
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println( digitalRead(12) );  // print the state of the input pin.
  delay(10);                           // delay in between reads for stability
}
