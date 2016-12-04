//The idea is to control high voltage with TIP120 transistor with attiny85 (arduino compatible inexpensive  2 dolar chip :-)

// Define which pin to be used to communicate with Base pin of TIP120 transistor
int TIP120pin = 0; //Use Attiny85 0 pin for controlling TIP120
void setup() {
  pinMode(TIP120pin, OUTPUT); // Set pin for output to control TIP120 Base pin  
}

void loop() {
// By changing values from 0 to 255 you can control motor speed or perhaps LED light (eg make it dim) Using PWM on ATtiny85 PIN 0. 

  pinMode(TIP120pin, OUTPUT); 
  analogWrite(TIP120pin, 255); 
  delay(5000);
  analogWrite(TIP120pin, 100);
  delay(5000);
  analogWrite(TIP120pin, 50);
  delay(5000);
  analogWrite(TIP120pin, 0);
  delay(5000);
}

