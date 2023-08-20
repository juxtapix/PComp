// PComp 2023
// Variables

int     x = 1;              // integer number
float   y = 1.342;          // float number
char    z = 'a';            // character
String  w = "hello world";  // sequence of characters (words / frases)

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);       // initialize serial (console) at 9600 bps.
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println( x );      // print to console

  delay(10);                // delay in between for readability
}
