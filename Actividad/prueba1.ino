#include <LiquidCrystal.h>

#define boton 2

#include <Adafruit_NeoPixel.h>
#define NEOPIXEL 3
LiquidCrystal LCD(9, 6, 10, 11, 12, 13);
Adafruit_NeoPixel ring = Adafruit_NeoPixel(6, NEOPIXEL, NEO_GRB + NEO_KHZ800);

#define LUZ A5
float CantL;
bool prendido = true;
bool estadoAnterior;
void setup()
{
  attachInterrupt( digitalPinToInterrupt(2) , BotonEX , FALLING );
  pinMode(NEOPIXEL, OUTPUT);
  ring.begin();
  ring.clear();
  ring.show();
  pinMode(LUZ, INPUT);
  pinMode(boton, INPUT);
  Serial.begin(9600);
  LCD.begin(16, 2);
}

void loop()
{
  bool estadoBoton = digitalRead(boton);

  if (estadoBoton == LOW && estadoAnterior == HIGH)
  {
    prendido = !prendido;

    delay(200);
  }

  estadoAnterior = estadoBoton;
  
  
  if(prendido == true)
  {
    CantL = analogRead(LUZ);
  
  CantL = map(CantL, 1017, 344, 0, 100);
  Serial.print("Cantidad de Luz:");
  Serial.println(CantL);
  // Prendemos los leds en base a la luz y de paso escribimos
  // en la consola serial lo que se necesita
  if( CantL < 15)
  {
    ring.setPixelColor(0, 0, 255, 0, 255);
    ring.show();
    Serial.println("Led: 0");
    Serial.println("Color Verde");
  }
  if(CantL > 15 and CantL < 30)
  {
    Serial.println("Led: 1");
    Serial.println("Color Verde");
    ring.setPixelColor(0, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(1, 0, 255, 0, 255);
    ring.show();
  }
  if( CantL > 30)
  {
    Serial.println("Led: 2");
    Serial.println("Color amarillo");
    ring.setPixelColor(0, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(1, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(2, 255, 255, 0, 255);
    ring.show();
  }
  if(CantL > 30 and CantL < 70)
  {
    Serial.println("Led: 3");
    Serial.println("Color amarillo");
    ring.setPixelColor(0, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(1, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(2, 255, 255, 0, 255);
    ring.show();
    ring.setPixelColor(3, 255, 255, 0, 255);
    ring.show();
  }
  if( CantL > 70)
  {
    Serial.println("Led: 4");
    Serial.println("Color rojo");
    ring.setPixelColor(0, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(1, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(2, 255, 255, 0, 255);
    ring.show();
    ring.setPixelColor(3, 255, 255, 0, 255);
    ring.show();
    ring.setPixelColor(4, 255, 0, 0, 255);
    ring.show();
  }
  if(CantL > 70 and CantL < 101)
  {
    Serial.println("Led: 5");
    Serial.println("Color rojo");
    ring.setPixelColor(0, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(1, 0, 255, 0, 255);
    ring.show();
    ring.setPixelColor(2, 255, 255, 0, 255);
    ring.show();
    ring.setPixelColor(3, 255, 255, 0, 255);
    ring.show();
    ring.setPixelColor(4, 255, 0, 0, 255);
    ring.show();
    ring.setPixelColor(5, 255, 0, 0, 255);
    ring.show();
  }
  }
  else
  {
    ring.clear();
    ring.show();
  }
  // apagamos todo para que se reinicie y hacer que se apaguen cuando vuelva el sensor
  delay(50);
  ring.clear();
  ring.show();
  
  ////////////////////////////////////////
  // Prendemos el LCD y mostramos la cantidad de luz
  // mostramos si esta prendido el sistema o no
  // y en base a la luz que tenemos mostramos que led se deberia de prender
 
  LCD.setCursor(0, 0);
  LCD.print("LUZ:   ");
  LCD.setCursor(4, 0);
  LCD.print(CantL);
  LCD.setCursor(0, 1);
  if(!prendido)
  {
    LCD.print("OFF");
  }
  else
  {
    LCD.print("ON ");
  }
  LCD.setCursor(4, 1);
  if(CantL >= 0 and CantL < 30)
  {
    LCD.print("Verde");
  }
  if(CantL > 30 and CantL < 70)
  {
    LCD.print("Amarillo");
  }
  if(CantL > 70 and CantL < 101)
  {
    LCD.print("Rojo");
  }
  // borramos todo para que no haya errores visuales en el LCD
  LCD.print("                                    ");
  
  
  
}
// Funcion que se ejecuta cuando se toca el boton
void BotonEX()
{
  bool estadoBoton = digitalRead(boton);

  if (estadoBoton == LOW && estadoAnterior == HIGH)
  {
    prendido = !prendido;

    delay(200);
  }

  estadoAnterior = estadoBoton;
}