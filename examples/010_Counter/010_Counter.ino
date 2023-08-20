// PComp 2023
// Counter

int counter = 0;              // integer number

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);         // initialize serial (console) at 9600 bps.
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println( counter );      // print to console
  counter++;                      // increment value by 1;
  delay(1000);                    // delay in between readability
}
