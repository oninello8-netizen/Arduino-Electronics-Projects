void setup() {
  // 15 covers pins 0-13, plus 14 (A0) and 15 (A1)
  for (int i = 0; i <= 15; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  // Forward Chase: 0 to A1
  for (int i = 0; i <= 15; i++) {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }

  // Backward Chase: A1 down to 0
  for (int i = 15; i >= 0; i--) {
    digitalWrite(i, HIGH);
    delay(50);
    digitalWrite(i, LOW);
  }
}
