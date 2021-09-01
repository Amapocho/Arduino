//ARDUINO WITH LED, ULTRASONIC SENSOR, PIEZOELECTRIC SPEAKER

#include <Wire.h>
#include <LiquidCrystal.h>
String pass="    ";
int st=0;//Position in pass string
int speaker=3;
int trigPin = 9;
int echoPin = 10;
int cm,duration;

// initialize the library by associating any needed LCD interface pin
// with the arduino pin number it is connected to
LiquidCrystal lcd(12,11,5,4,8,7);


void setup() 
{
  Wire.begin(4);// Start I2C Bus as Slave               
  Wire.onReceive(receiveEvent);
  Serial.begin(9600);//Use serial print on monitor to checck values
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
  lcd.print("Enter password");
}

void loop() 
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  cm = (duration/2) / 29.1;
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
  if (cm<100)//check proximity
    if (pass!="2012")//check for correct password
    	tone(3, 262, 500);
  if (cm<100)
    digitalWrite(speaker,LOW);
  Serial.println(pass);
  if (pass[0]!=' ')
  {
    lcd.clear();
    lcd.print(pass);
  }
  if (pass=="2012")
  {
    lcd.clear();
    lcd.print("Welcome");
  }
  delay(100); // Wait for 100 millisecond(s)
}

void receiveEvent(int x)//Function to carry out on receiving data
{
  char ch= char(Wire.read());
  if (ch!='*' && ch!='#')
  pass[st]= char(ch);
  st++;
  if (ch=='*')//clear
  {
    pass="    ";
    st=0;
    lcd.clear();
    lcd.print("Enter password");
  }
  if (ch=='#')//backspace
  {
    st--;
    st--;
    pass[st]=' ';
    if (st==0)
    {
      lcd.clear();
      lcd.print("Enter password");
    }
  }
}

//ARDUINO WITH KEYPAD

#include <Wire.h>
#include <Keypad.h>
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


void setup()
{
  Wire.begin();// Start I2C Bus as Master
}

void loop()
{
  char customKey = customKeypad.getKey();
  if (customKey)
  {
    Wire.beginTransmission(4);// transmit to device #4    
    Wire.print(customKey);                
    Wire.endTransmission();//end transmission
  }
  delay(100); // Wait for 100 millisecond(s)
}
