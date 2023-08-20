// PComp 2023
// Digital Output - RGB

// constant for RGB LED pins
const int rPin = 5;
const int gPin = 3;
const int bPin = 2;

void setup() {
  // put your setup code here, to run once:

  // You do not need to call pinMode() to set the pins as an Analog Outputs(PWM).
}

void loop() {
// put your main code here, to run repeatedly:
  rgb(255,0,0);     // Red
  delay(1000);
  rgb(0,255,0);     // Green
  delay(1000);
  rgb(0,0,255);     // Blue
  delay(1000);
}

// This is a Function that expect 3 values (R, G, B)
void rgb(int r, int g, int b){
  analogWrite(rPin, r);
  analogWrite(gPin, g);
  analogWrite(bPin, b);
}
