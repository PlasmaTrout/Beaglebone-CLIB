#include <beaglebone.h>
#include <mainloop.h>

//This prototype isn't required however it stops a warning when compiled with
//-Wall on.
void sleep(int);

//The main setup loop. Just like an Arduino however the different power types
//must be used since muxing may require different drivers. 
void setup(){
    pinMode(PIN8_3,OUTPUT);
}

//The loop area similar to an arduino.
void loop(){
    digitalWrite(PIN8_3,HIGH);
    sleep(1);
    digitalWrite(PIN8_3,LOW);
    sleep(1);
}

//mainloop.h defines the setup() and main() implementation. if you want to 
//do your own implement your own main function here and comment out the 
//include.


