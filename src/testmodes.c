#include <stdio.h>
#include <beaglebone.h>
#include <beaglepins.h>

void printbits(unsigned char v) {
   for (; v; v >>= 1) putchar('0' + (v & 1));
}

int main(){

    printf("Checking pin modes enumeration... ");
    MuxMode model = 0 | RX_ENABLED;
    printf("Mux Mode 0 Receive Enabled is 0x%X \n",model);
    
    model = 0 | DISABLE_PULLUP_RESISTOR;
    printf("Mux Mode 0 Pullup Disabled is 0x%X \n",model);
    
    model = 1 | DISABLE_PULLUP_RESISTOR;
    printf("Mux Mode 1 Pullup Disabled is 0x%X \n",model);
   
    model = 2 | DISABLE_PULLUP_RESISTOR;
    printf("Mux Mode 2 Pullup Disabled is 0x%X \n",model);
    
    model = 3 | DISABLE_PULLUP_RESISTOR;
    printf("Mux Mode 3 Pullup Disabled is 0x%X \n",model);
    
    model = 4 | DISABLE_PULLUP_RESISTOR;
    printf("Mux Mode 4 Pullup Disabled is 0x%X \n",model);
    
    model = 5 | DISABLE_PULLUP_RESISTOR;
    printf("Mux Mode 5 Pullup Disabled is 0x%X \n",model);
    
    model = RESERVED3 | RESERVED2 | DISABLE_PULLUP_RESISTOR;
    printf("Mux Mode 6 Pullup Disabled is 0x%X -> ",model);
    printbits((char) model);
    printf("\n");
    
    model = 0 | DISABLE_PULLUP_RESISTOR | PULL_UP_NOT_DOWN;
    printf("Mux Mode 0 Pullup Disabled/Pull Up Not Down is 0x%X \n",model);
    
    model = 5 | RX_ENABLED;
    printf("Mux Mode 5 Receive Enabled is 0x%X \n",model);
    
     model = 7 | RX_ENABLED;
    printf("Mux Mode 7 Receive Enabled is 0x%X \n",model);
    
    printf("\n");
    
}