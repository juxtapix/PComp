// PComp 2023
// Math - Math functions

int val = 5;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);       // initialize serial (console) at 9600 bps.
}

void loop() {
  // put your main code here, to run repeatedly:

  // abs - Return the absolute value of a number
  Serial.print( "abs:" );
  Serial.println( abs(-123) );

  // max - Return the maximum of two numbers
  Serial.print( "max:" );
  Serial.println( max(val, 20) );

  // min - Return the minimum of two numbers
  Serial.print( "min:" );
  Serial.println( min(val, 20) );

  // constrain - Constrains a number to be within a range.
  Serial.print( "constrain:" );
  Serial.println( constrain(val, 10, 150) );

  Serial.println( "---------------" );
  delay(1000);
}
