
const int ledPin = 13;//the led attach to

void setup()
{ 
  pinMode(ledPin,OUTPUT);//initialize the ledPin on board. 
  pinMode(2,INPUT);
  digitalWrite(2, HIGH);

} 
/******************************************/
void loop() 
{  
  
  int digitalVal = digitalRead(2);
  
  if(LOW == digitalVal)
  {
    digitalWrite(ledPin,LOW);//turn the led off
  }
  else
  {
    digitalWrite(ledPin,HIGH);//turn the led on 
  }
}
/**********************************************/
