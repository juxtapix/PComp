void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);       // initialize serial (console) at 9600 bps.
  pinMode(5, OUTPUT);
}

void loop() {
  // put your main code here, to run forever!!!!!!!!:
  for (int i = 0; i <= 255; i++) {
    Serial.println( i );            // print to console
    analogWrite(5, i);
    delay(10);                      // delay in between readability
  }

  for (int i = 255; i >= 0; i--) {
    Serial.println( i );            // print to console
    analogWrite(5, i);
    delay(10);                      // delay in between readability
  }

}
