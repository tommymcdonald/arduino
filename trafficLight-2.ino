int leds[] = {13, 12, 11};
void setup() {
  for (int i=0; i < (sizeof(leds)/sizeof(int)); i++) {
    pinMode(leds[i], OUTPUT);  
  }
}

void loop() {
  for (int i=0; i < (sizeof(leds)/sizeof(int)); i++) {
    BlinkMe(leds[i]);  
  }
}

void BlinkMe(int ledOn) {
  digitalWrite(ledOn, HIGH);  
  delay(1000);
  digitalWrite(ledOn, LOW);
  delay(1000);
}
