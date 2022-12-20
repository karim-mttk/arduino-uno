int led = 13;
void setup() {
  //set output
pinMode(led, OUTPUT);
}

void loop() {
  // run repeatedly:
  digitalWrite(led, HIGH);
  delay(100);
  digitalWrite(led, LOW);
  delay(100);
}