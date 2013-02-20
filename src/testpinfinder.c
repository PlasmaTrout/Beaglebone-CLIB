#include <stdio.h>
#include <beaglebone.h>

int main(){
    char uinput[3];
    int input;
    printf("Enter A Pin Number In Header 8: ");
    scanf("%d",&input);
    Pin pin = findPin(8,input);
    printf("\n");
    printf("Name %s and Mux Name of %s and IO number of %i \n",pin.pinname,pin.muxname,pin.ionumber);
    
    printf("Enter A Pin Number In Header 9: ");
    scanf("%d",&input);
    pin = findPin(9,input);
    printf("\n");
    printf("Name %s and Mux Name of %s and IO number of %i \n",pin.pinname,pin.muxname,pin.ionumber);
    
}