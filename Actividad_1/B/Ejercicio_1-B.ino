#define Uno 0
#define Dos 2
#define Tres 4
#define Cuatro 6
#define Cinco 8
#define Seis 9
#define Siete 11
#define Ocho 13
#define Nueve 7
#define Diez 12

void setup()
{
  pinMode(Uno , OUTPUT);
  pinMode(Dos , OUTPUT);
  pinMode(Tres , OUTPUT);
  pinMode(Cuatro , OUTPUT);
  pinMode(Cinco , OUTPUT);
  pinMode(Seis , OUTPUT);
  pinMode(Siete , OUTPUT);
  pinMode(Ocho , OUTPUT);
  pinMode(Nueve , OUTPUT);
  pinMode(Diez , OUTPUT);
}

void loop()
{
  delay(500);
  digitalWrite(Uno, HIGH);
  delay(500);
  digitalWrite(Dos, HIGH);
  delay(500);
  digitalWrite(Tres, HIGH);
  delay(500);
  digitalWrite(Cuatro, HIGH);
  delay(500);
  digitalWrite(Cinco, HIGH);
  delay(500);
  digitalWrite(Seis, HIGH);
  delay(500);
  digitalWrite(Siete, HIGH);
  delay(500);
  digitalWrite(Ocho, HIGH);
  delay(500);
  digitalWrite(Nueve, HIGH);
  delay(500);
  digitalWrite(Diez, HIGH);
  delay(500);
  digitalWrite(Uno, LOW);
  digitalWrite(Dos, LOW);
  digitalWrite(Tres, LOW);
  digitalWrite(Cuatro, LOW);
  digitalWrite(Cinco, LOW);
  digitalWrite(Seis, LOW);
  digitalWrite(Siete, LOW);
  digitalWrite(Ocho, LOW);
  digitalWrite(Nueve, LOW);
  digitalWrite(Diez, LOW);

}
