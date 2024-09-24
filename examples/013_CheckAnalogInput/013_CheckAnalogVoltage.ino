// PComp 2023
// Analog Input - CheckAnalogVoltage

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);           // initialize serial (console) at 9600 bps.
                                // you don't need to initialize analog pins.
}

void loop() {
  // put your main code here, to run repeatedly:

  int sensorValue = analogRead(A0);
  float voltage = sensorValue * (3.3 / 1024.0);  // convert value to voltage. 
  
  Serial.print( sensorValue );          // print the value of the analog pin.
  Serial.print(" | " );
  Serial.println( voltage );            // print the voltage of the analog pin.
  delay(100);                           // delay in between reads for stability
}
