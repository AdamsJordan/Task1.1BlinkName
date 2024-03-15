/*
  BlinkName

  Blinks the name Jordan in morse code using an LED
*/

const int DOT = 100;
const int DASH = 500;
const int OFF = 100;
const int SPACE = 1000;

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DOT);                     
  digitalWrite(LED_BUILTIN, LOW);   
  delay(OFF); 
}

void dash() {
  digitalWrite(LED_BUILTIN, HIGH);  
  delay(DASH);  
  digitalWrite(LED_BUILTIN, LOW);  
  delay(OFF); 
}

void loop() {
  //J
  dot();                   
  dash();
  dash();
  dash();
  delay(SPACE);  

  //O
  dash();
  dash();
  dash();
  delay(SPACE);  

  //R
  dot();
  dash();
  dot();
  delay(SPACE);

  //D
  dash();
  dot();
  dot();
  delay(SPACE);

  //A
  dot();
  dash();
  delay(SPACE);

  //N
  dash();
  dot();
  delay(SPACE);
}
