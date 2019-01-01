
int ledPin = 4;
int buttonApin = 10;
int buttonBpin = 8;

byte leds = 0;

void setup() 
{
  // output is ledpin
  pinMode(ledPin, OUTPUT);]
  // getting input from buttons
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(buttonBpin, INPUT_PULLUP);  
}

void loop() 
{
  // Check to see if on button (Button B) has been pressed 
  if (digitalRead(buttonBpin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
  if (digitalRead(buttonApin) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
  }
}
