// Define Pins
#define BLUE 3
#define GREEN 5
#define RED 6

void setup()
{
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(BLUE, OUTPUT);
digitalWrite(RED, LOW);
digitalWrite(GREEN, LOW);
digitalWrite(BLUE, LOW);
}

// define variables
int redValue;
int greenValue;
int blueValue;

// main loop
void loop()
{
// delay 10 if you want to use loop to change colors 

selectColor(255,0,0); // red
delay(1000);
selectColor(0,255,0); // green
delay(1000);
selectColor(0,0,255); // blue 
delay(1000);
selectColor(50,46,96); // random color.
delay(1000);

}

void selectColor(int R, int G, int B){
  // select color funtion so we dont have to repeat analogWrite. 
  // Takes in R , G , B value 
  analogWrite(RED, R);
  analogWrite(GREEN, G);
  analogWrite(BLUE, B);

  
  
  
  }
