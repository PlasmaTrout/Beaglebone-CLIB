#include <stdio.h>
#include <beaglebone.h>

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
    printf("HIGH\n");
    sleep(1);
    digitalWrite(PIN8_3,LOW);
    printf("LOW\n");
    sleep(1);
}

int main(){
    
    int i=0;
    
    setup();
    
    for(i=0;i < 3;i++){
      printf("Iteration %i\n",i+1);
      loop();
    }
    
    pinMode(PIN8_3,INPUT);
    int value_read = digitalRead(PIN8_3);
    printf("Found value %i\n",value_read);
    
    gpio_unexport(PIN8_3);
    
}

//mainloop.h defines the setup() and main() implementation. if you want to 
//do your own implement your own main function here and comment out the 
//include.
