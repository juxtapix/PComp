// PComp 2023
// Analog Input - CheckAnalogInput

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);           // initialize serial (console) at 9600 bps.
                                // you don't need to initialize analog pins.
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println( analogRead(A0) );     // print the state of the analog pin.
  delay(100);                           // delay in between reads for stability
}
