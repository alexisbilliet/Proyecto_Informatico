#define parlante 2
#define boton 8
void setup()
{
  pinMode(parlante, OUTPUT);
  pinMode(boton, INPUT);
}

void loop()
{
  if (digitalRead(boton) == HIGH) 
  {
    digitalWrite(parlante, HIGH); 
    delay(200);
    digitalWrite(parlante, LOW);
    delay(400);
  } 
  else 
  {
    digitalWrite(parlante, LOW); 
  }
  
}