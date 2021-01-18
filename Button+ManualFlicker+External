const int buttonPin = 2;     // the number of the pushbutton pin
const int ledPin =  13;// the number of the LED pin
const int led =  8;//set external led
int sensorValue = 0;
int sensorPin = A0;
// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  pinMode(led, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  sensorValue = analogRead(sensorPin);//read input from potentiometer
  buttonState = digitalRead(buttonPin);
  sensorValue = map(sensorValue, 0, 1023, 40, 600);//change frequency range to a more narrower one

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(led, HIGH);
    delay(sensorValue);
    digitalWrite(led, LOW);
    delay(sensorValue);
    digitalWrite(ledPin, LOW);
  } else {
    // turn LED off:
    digitalWrite(led, LOW);
    digitalWrite(ledPin, HIGH);
  }
}
