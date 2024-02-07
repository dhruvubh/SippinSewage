int Liquid_level = 0;

void setup() {
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
}

void loop() {
  Liquid_level = digitalRead(5);

  if (Liquid_level == HIGH) {
    // Liquid detected
    digitalWrite(6, HIGH);
  } else {
    // No liquid detected
    digitalWrite(6, LOW);
  }

  delay(100);
}
