char thisisc = 'c';

void setup() {
  Serial.begin(9600);
}

void loop() {
  
  Serial.print("This is c: ");
  Serial.print(thisisc);
  thisisc = thisisc+2;
  Serial.print("This is c+2: ");
  Serial.println(thisisc);
  thisisc = thisisc-2;
  
  delay(5000);
}
