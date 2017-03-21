# attiny84-transistor-high-current-control


### The concept is to control high voltage devices (over 5v) with TIP120 power transistor and attiny85 arduino compatible chip.


#### 1  Program attiny85 with arduino in order to get familiar with uploading arduino code to attiny chip-> https://www.hackster.io/arjun/programming-attiny85-with-arduino-uno-afb829

#### 2 Go through instructable  to get familiar with TIP120 transistor controlled by arduino-> http://www.instructables.com/id/Use-Arduino-with-TIP120-transistor-to-control-moto/ 

#### 3 Combine the above knowledge by using the file provided (basicTIP120.ino) and make the correct connections (circuit will be provided, but in essence it is a simplified version of the above examples).
#### Define which pin to be used to communicate with Base pin of TIP120 transistor
#### Use Attiny85 0 pin for controlling TIP120 -> TIP120pin = 0; 


#### By changing values from 0 to 255 you can control  LED light (eg make it dim) or perhaps controlling speed of a motor, using PWM on ATtiny85 PIN 0. 

(I used a 12V - LED tape for running the example) and the result is  a simplified version of the  arduino TIP120 transistor example (staed above).

