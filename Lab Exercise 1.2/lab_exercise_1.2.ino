int d = 500;

void setup() {
  for (int a = 2; a <= 12; a++) pinMode(a, OUTPUT);
}

void blink(int a) {
  int left = 2 + a, right = 12 - a;

  digitalWrite(left, HIGH);
  digitalWrite(right, HIGH);
  delay(d);
  digitalWrite(left, LOW);
  digitalWrite(right, LOW);
}

void loop() {
  for (int a = 0; a <= 5; a++) blink(a);
  for (int a = 4; a >= 0; a--) blink(a);
}