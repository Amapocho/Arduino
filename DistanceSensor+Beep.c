
//the pins of 1-digit 7-segment display attached to arduino board digital pins 4 - 11 respectively
const int dp = 4; 
const int c = 5;
const int b = 6;
const int a = 7;
const int f = 8;
const int g = 9;
const int e = 10;
const int d = 11
const int actuators = 12;
int trigPin = 2;    // Trigger
int echoPin = 3;    // Echo
int outputVal;
long duration, cm;
void setup()
{
  Serial.begin(9600);//initialize serial communication on 9600 bps
  //loop over thisPin from 4 to 11 and set them all to output
  for (int displayPin = 4; displayPin <= 12; displayPin++)
  {
    pinMode(displayPin, OUTPUT);
    
  }
  digitalWrite(dp, LOW); //turn the dot of the 1-digit 7-segment display module off
   pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
}

void loop()
{
    // The sensor is triggered by a HIGH pulse of 10 or more microseconds.
  // Give a short LOW pulse beforehand to ensure a clean HIGH pulse:
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  // Read the signal from the sensor: a HIGH pulse whose
  // duration is the time (in microseconds) from the sending
  // of the ping to the reception of its echo off of an object.
  duration = pulseIn(echoPin, HIGH);
 
  // Convert the time into a distance
  cm = (duration/2) / 29.1;     // Divide by 29.1 or multiply by 0.0343


  outputVal = map (cm, 0,99, 9, 0);
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
  delay(10);
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
  digitalWrite(actuators, HIGH);
  delay(500);
  digitalWrite(actuators, LOW);
  delay(1000);
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
  digitalWrite(actuators, HIGH);
  delay(500);
  digitalWrite(actuators, LOW);
  delay(900);
  
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
  digitalWrite(actuators, HIGH);
  delay(400);
  digitalWrite(actuators, LOW);
  delay(800);
  
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
  digitalWrite(actuators, HIGH);
  delay(400);
  digitalWrite(actuators, LOW);
  delay(700);
  
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
  digitalWrite(actuators, HIGH);
  delay(500);
  digitalWrite(actuators, LOW);
  delay(600);
  
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
  digitalWrite(actuators, HIGH);
  delay(500);
  digitalWrite(actuators, LOW);
  delay(500);
  
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
  digitalWrite(actuators, HIGH);
  delay(400);
  digitalWrite(actuators, LOW);
  delay(400);
  
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
  digitalWrite(actuators, HIGH);
  delay(250);
  digitalWrite(actuators, LOW);
  delay(250);
  
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
  digitalWrite(actuators, HIGH);
  delay(100);
  digitalWrite(actuators, LOW);
  delay(100);
  
}
