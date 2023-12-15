#include <Adafruit_NeoPixel.h>
 
#define neoPin 4
#define neoNbr 21
unsigned long color = 0;
//int neoLumin = 100; // Varier cette variable pour modifier la luninosité
 
Adafruit_NeoPixel neoStrip = Adafruit_NeoPixel(neoNbr, neoPin, NEO_GRB + NEO_KHZ800);
 
void setup()
{
  neoStrip.begin();
  neoStrip.setBrightness(255);
  neoStrip.show();
  color = 0xff4500;
}
 
void loop()
{ 
  for (byte i = 0; i < neoNbr; i++)
  {
    //neoStrip.setPixelColor(i, 255, 128, 0); // Toutes les LEDs en vert
    neoStrip.setPixelColor(i, color); // Toutes les LEDs en vert
  }
  neoStrip.show();
  delay(9500);
 
  for (byte i = 0; i < neoNbr; i++)
  {
    neoStrip.setPixelColor(i, 0, 0, 0); // Toutes les LEDs sans couleur
  }
  neoStrip.show();
  delay(500);
}
