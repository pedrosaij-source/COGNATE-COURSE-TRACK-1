int d = 700;

void setup() {

  for (int i = 2; i <= 12; i++) {
    pinMode(i, OUTPUT);
  }

}

void loop() {

  
 for (int i = 12; i >= 2; i--) {
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW);
  }

  
   for (int i = 2; i <= 12; i++) {
    digitalWrite(i, HIGH);
    delay(d);
    digitalWrite(i, LOW);
  }

}