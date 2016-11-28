//Example for controlling TIP120 with Attiny85
//Go through both articles and check programs and steps
//1 -> https://www.hackster.io/arjun/programming-attiny85-with-arduino-uno-afb829 -> Program attiny85 with arduino 
//2 -> http://www.instructables.com/id/Use-Arduino-with-TIP120-transistor-to-control-moto/ Use arduino with TIP120 transistor 
//COmbine both, make the connections (I used a 12V - LED tape for running the example) and the result is  a simplified version of the TIP120 example

//The idea is to control high voltage with TIP120 transistor with attiny85 (arduino compatible inexpensive  2 dolar chip :-)

// Define which pin to be used to communicate with Base pin of TIP120 transistor
int TIP120pin = 0; //Use Attiny85 0 pin for controlling TIP120
void setup() {
  pinMode(TIP120pin, OUTPUT); // Set pin for output to control TIP120 Base pin  
}

void loop() {
// By changing values from 0 to 255 you can control motor speed or perhaps LED light (eg dimming)
//Using PWM on ATtiny85 PIN 0. (Code tested with led tape)
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

