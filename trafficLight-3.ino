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
  TurnMeOn(leds[0]);
  DelayMe(1000);
  SetMe(leds[1], HIGH);
  DelayMe(500);
  TurnMeOn(leds[2]);
  DelayMe(2000);
  
  TurnMeOff(leds[0]);
  SetMe(leds[1], LOW);
  SetMe(leds[2], LOW);
  DelayMe(1000);
  
  for (int i = 0; i < (sizeof(leds)/sizeof(int)); i++) {
    TurnMeOn(leds[i]);  
  }
  DelayMe(500);
  
  for (int i = 0; i < (sizeof(leds)/sizeof(int)); i++) {
    SetMe(leds[i], LOW);  
  }
  DelayMe(500);
}

void TurnMeOn(int ledOn) {
  digitalWrite(ledOn, HIGH);
}

void TurnMeOff(int ledOff) {
  digitalWrite(ledOff, LOW);
}

void SetMe(int led, boolean state) {
   digitalWrite(led, state);
}

void DelayMe(int time) {
  delay(time);
}

