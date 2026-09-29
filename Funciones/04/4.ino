int movimiento = 7;
int led = 8;

void detectarMovimiento() {
  if (digitalRead(movimiento) == HIGH) {
    digitalWrite(led, HIGH);
  } else {
    digitalWrite(led, LOW);
  }
}

void setup()
{
  pinMode(movimiento, INPUT);
  pinMode(led, OUTPUT);
}

void loop() {
  detectarMovimiento();
}
