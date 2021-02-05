//the pins of 1-digit 7-segment display attached to arduino board digital pins 4 - 11 respectively
const int dp = 4; 
const int c = 5;
const int b = 6;
const int a = 7;
const int f = 8;
const int g = 9;
const int e = 10;
const int d = 11;
const int potPin = A0; // select the input pin (must be analog) for the potentiometer
int potValue;// variable to store the value coming from the sensor
int outputVal;
//***************************************************************
void setup()
{
  Serial.begin(9600);//initialize serial communication on 9600 bps
  pinMode(potPin, INPUT);//set potPin as INPUT
  //loop over thisPin from 4 to 11 and set them all to output
  for (int displayPin = 4; displayPin <= 11; displayPin++)
  {
    pinMode(displayPin, OUTPUT);
    
  }
  digitalWrite(dp, LOW); //turn the dot of the 1-digit 7-segment display module off
}

void loop()
{
  potValue = analogRead(potPin);// read the value from the potentiometer
   // it will be a number between 0 and 1023 that is proportional to the amount of voltage being applied to the pin
  outputVal = map (potValue, 0,511, 0, 9);
  if (outputVal == 0)
  number0();//display 0 to the 7-segment;
  else
  if (outputVal == 1)
  number1();//display 1 to the 7-segment
  else
  if (outputVal == 2)
  number2();//display 2 to the 7-segment
  else
  if (outputVal == 3)
  number3();//display 3 to the 7-segment
  else
  if (outputVal == 4)
  number4();//display 4 to the 7-segment
  else
  if (outputVal == 5)
  number5();//display 5 to the 7-segment
  else
  if (outputVal == 6)
  number6();//display 6 to the 7-segment
  else
  if (outputVal == 7)
  number7();//display 7 to the 7-segment
  else
  if (outputVal == 8)
  number8();//display 8 to the 7-segment
  else
  if (outputVal == 9)
  number9();//display 9 to the 7-segment
  Serial.println(potValue);//print the value of potentiometer
}

void number0(void) //display 0 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}

void number1(void) //display 1 to the 7-segment
{
  digitalWrite(a, LOW);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  
}
void number2(void) //display 2 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  
}
void number3(void) //display 3 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number4(void) //display 4 to the 7-segment
{
  digitalWrite(a, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  
}
void number5(void) //display 5 to the 7-segment
{ 
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number6(void) //display 6 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number7(void) //display 7 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(g, LOW);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  
}
void number8(void) //display 8 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
void number9(void) //display 9 to the 7-segment
{
  digitalWrite(a, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(g, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  
}
