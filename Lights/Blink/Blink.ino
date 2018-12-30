

void setup() {
  // initialize digital pin LED_BUILTIN as an output.

  pinMode(LED_BUILTIN, OUTPUT);
}

// forever loop 
void loop() {
  // led can alternat between high voltage and low voltage. High meaning on and low 
  // meaning off. 
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(1000);                       // wait for a 1.1 (1100 millaseconds) 
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(500);                       // wait for 1 second
}
