#define Peaton1 5
#define Peaton2 6
#define Speak 2
void setup()
{
  pinMode(Peaton1, OUTPUT);
  pinMode(Peaton2, OUTPUT);
  pinMode(Speak, OUTPUT);
}

void loop()
{
  digitalWrite(Peaton1, HIGH);
  digitalWrite(Speak, HIGH);
  delay(1000);
  digitalWrite(Peaton1, LOW);
  digitalWrite(Speak, LOW);
  digitalWrite(Peaton2, HIGH);
  delay(1000);
  digitalWrite(Peaton2, LOW);
}
