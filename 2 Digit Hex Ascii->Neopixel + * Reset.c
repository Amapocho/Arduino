#include <Adafruit_NeoPixel.h>
#include <Keypad.h>
const int NeoPIN=2;	 
const int NUMPIXELS=16; // number of neopixels in strip

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUMPIXELS, NeoPIN, NEO_GRB + NEO_KHZ800);

const byte ROWS = 4;
const byte COLS = 4; 
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte rowPins[ROWS] = {11, 10, 9, 8}; 
byte colPins[COLS] = {7, 6, 5, 4};

Keypad customKeypad = Keypad( makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS);

int t=0,u=0;
int f=0;

void setup() {
  Serial.begin(9600);
  pixels.begin();
}

void loop() {
  char customKey = customKeypad.getKey();
  int aschex = customKey - 18;
  if (customKey)
  {
    Serial.println(aschex);
    Serial.println(customKey);
    
  	if (f==0)
    {
      t=aschex;
   	  f++;
    }
    else if (f==1)
    {
      u=aschex;
   	  f++;
    }
    if (customKey=='*')
    {
      t=0;
      u=0;
      f=0;
    }
    Serial.print("T=");
  	Serial.println(t);
  	Serial.print("U="); 
  	Serial.println(u);
  }
  int d;
  if (t!=0 && u!=0)
  {
    pixels.setPixelColor(2, 255,0,0);
    pixels.setPixelColor(3, 255,0,0);
    d=t%10;
    if (d/8==1)
      pixels.setPixelColor(4, 255,0,0);
	d=d%8;
    if (d/4==1)
      pixels.setPixelColor(5, 255,0,0);
	d=d%4;
    if (d/2==1)
      pixels.setPixelColor(6, 255,0,0);
	d=d%2;
    if (d==1)
      pixels.setPixelColor(7, 255,0,0);
    pixels.setPixelColor(10, 255,0,0);
    pixels.setPixelColor(11, 255,0,0);
    d=u%10;
    if (d/8==1)
      pixels.setPixelColor(12, 255,0,0);
	d=d%8;
    if (d/4==1)
      pixels.setPixelColor(13, 255,0,0);
	d=d%4;
    if (d/2==1)
      pixels.setPixelColor(14, 255,0,0);
	d=d%2;
    if (d==1)
      pixels.setPixelColor(15, 255,0,0);
  }
  
  if (customKey=='*')
  {
    for (int i=0; i < NUMPIXELS; i++) 
    {
    	pixels.setPixelColor(i,0,0,0);
    	pixels.show();
    }
  }
  pixels.show();
  delay(100);
}


