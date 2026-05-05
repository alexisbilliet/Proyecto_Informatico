#define ledRojo 2 
#define ledAmarillo 3
#define ledVerde 4
#define Peaton1 5
#define Peaton2 6
void setup()
{
  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(Peaton1, OUTPUT);
  pinMode(Peaton2, OUTPUT);
}

void loop()
{
  digitalWrite(ledVerde, LOW);
  digitalWrite(Peaton2, LOW);
  digitalWrite(ledRojo, HIGH);
  digitalWrite(Peaton1, HIGH);
  delay(2000); 
  digitalWrite(ledAmarillo, HIGH);
  delay(1000);
  digitalWrite(ledRojo, LOW);
  digitalWrite(ledAmarillo, LOW);
  digitalWrite(Peaton1, LOW);
  digitalWrite(ledVerde, HIGH);
  digitalWrite(Peaton2, HIGH);
  delay(2000);
  digitalWrite(ledAmarillo, HIGH);
  delay(1000);
  digitalWrite(ledAmarillo, LOW);
  
}
