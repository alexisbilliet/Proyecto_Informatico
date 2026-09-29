void melodia1() {
  tone(8, 262, 300);
  delay(300);
  tone(8, 294, 300);
  delay(300);
  tone(8, 330, 300);
  delay(300);
}

void melodia2() {
  tone(8, 330, 300);
  delay(300);
  tone(8, 294, 300);
  delay(300);
  tone(8, 262, 300);
  delay(300);
}

void melodia3() {
  tone(8, 262, 200);
  delay(200);
  tone(8, 330, 200);
  delay(200);
  tone(8, 392, 400);
  delay(400);
}

void setup() {
  pinMode(8, OUTPUT);
}

void loop() {
  melodia1();
  delay(1000);

  melodia2();
  delay(1000);

  melodia3();
  delay(1000);
}
