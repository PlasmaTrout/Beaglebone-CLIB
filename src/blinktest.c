#include <beaglebone.h>
#include <mainloop.h>

//This prototype isn't required however it stops a warning when compiled with
//-Wall on.
void sleep(int);

//The main setup loop. Just like an Arduino however the different power types
//must be used since muxing may require different drivers. 
void setup(){
    gpio_export(PIN3);
    gpio_set_direction(OUTPUT,PIN3);
}

//The loop area similar to an arduino.
void loop(){
    gpio_set(HIGH,PIN3);
    sleep(1);
    gpio_set(LOW,PIN3);
    sleep(1);
}

//mainloop.h defines the setup() and main() implementation. if you want to 
//do your own implement your own main function here and comment out the 
//include.


