#define Verde1 1
#define Azul1 2
#define Rojo1 3

#define Verde2 8
#define Azul2 9
#define Rojo2 10

void setup()
{
  pinMode(Verde1, OUTPUT);
  pinMode(Azul1, OUTPUT);
  pinMode(Rojo1, OUTPUT);
  pinMode(Verde2, OUTPUT);
  pinMode(Azul2, OUTPUT);
  pinMode(Rojo2, OUTPUT);
}

void loop()
{
  //
  digitalWrite(Rojo1, HIGH);
  delay(200);
  digitalWrite(Rojo1, LOW);
  digitalWrite(Azul1, HIGH);
  digitalWrite(Verde1, HIGH);
  delay(200);
  digitalWrite(Azul1, LOW);
  digitalWrite(Verde1, LOW);
  digitalWrite(Verde1, HIGH);
  delay(200);
  digitalWrite(Verde1, LOW);
  digitalWrite(Rojo1, HIGH);
  digitalWrite(Azul1, HIGH);
  delay(200);
  digitalWrite(Rojo1, LOW);
  digitalWrite(Azul1, LOW);
  digitalWrite(Azul1, HIGH);
  delay(200);
  digitalWrite(Azul1, LOW);
  digitalWrite(Azul1, HIGH);
  digitalWrite(Verde1, HIGH);
  digitalWrite(Rojo1, HIGH);
  delay(200);
  digitalWrite(Azul1, LOW);
  digitalWrite(Verde1, LOW);
  digitalWrite(Rojo1, LOW);
  digitalWrite(Verde1, HIGH);
  digitalWrite(Rojo1, HIGH);
  delay(200);
  digitalWrite(Verde1, LOW);
  digitalWrite(Rojo1, LOW);
  //
  digitalWrite(Rojo2, HIGH);
  delay(200);
  digitalWrite(Rojo2, LOW);
  digitalWrite(Azul2, HIGH);
  digitalWrite(Verde2, HIGH);
  delay(200);
  digitalWrite(Azul2, LOW);
  digitalWrite(Verde2, LOW);
  digitalWrite(Verde2, HIGH);
  delay(200);
  digitalWrite(Verde2, LOW);
  digitalWrite(Rojo2, HIGH);
  digitalWrite(Azul2, HIGH);
  delay(200);
  digitalWrite(Rojo2, LOW);
  digitalWrite(Azul2, LOW);
  digitalWrite(Azul2, HIGH);
  delay(200);
  digitalWrite(Azul2, LOW);
  digitalWrite(Azul2, HIGH);
  digitalWrite(Verde2, HIGH);
  digitalWrite(Rojo2, HIGH);
  delay(200);
  digitalWrite(Azul2, LOW);
  digitalWrite(Verde2, LOW);
  digitalWrite(Rojo2, LOW);
  digitalWrite(Verde2, HIGH);
  digitalWrite(Rojo2, HIGH);
  delay(200);
  digitalWrite(Verde2, LOW);
  digitalWrite(Rojo2, LOW);
} 
