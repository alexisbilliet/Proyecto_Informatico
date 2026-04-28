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
 digitalWrite(Uno, HIGH);
 digitalWrite(Tres, HIGH);
 digitalWrite(Cinco, HIGH); 
 digitalWrite(Siete, HIGH);
 digitalWrite(Nueve, HIGH); 
 delay(1000);
 digitalWrite(Uno, LOW);
 digitalWrite(Tres, LOW);
 digitalWrite(Cinco, LOW); 
 digitalWrite(Siete, LOW);
 digitalWrite(Nueve, LOW);
  
 digitalWrite(Dos, HIGH);
 digitalWrite(Cuatro, HIGH);
 digitalWrite(Seis, HIGH); 
 digitalWrite(Ocho, HIGH);
 digitalWrite(Diez, HIGH); 
 delay(1000);
  digitalWrite(Dos, LOW);
 digitalWrite(Cuatro, LOW);
 digitalWrite(Seis, LOW); 
 digitalWrite(Ocho, LOW);
 digitalWrite(Diez, LOW); 
 

}
