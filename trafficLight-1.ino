int led1 = 13;
int led2 = 12;
int led3 = 11;
void setup() {
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop() {
  BlinkMe(led1);
  BlinkMe(led2);
  BlinkMe(led3);
}

void BlinkMe(int ledOn) {
  digitalWrite(ledOn, HIGH);  
  delay(1000);
  digitalWrite(ledOn, LOW);
  delay(1000);
}
