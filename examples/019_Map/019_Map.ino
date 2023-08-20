// ICP Workshop 2020
// Math - Map function

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val = analogRead(A0);

  // map(value, fromLow, fromHigh, toLow, toHigh)
  val = map(val, 0, 1023, 0, 255);
  Serial.println(val);
}
