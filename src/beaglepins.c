#include <stdio.h>

#include "../include/beaglepins.h"

#define MUXPATH "/sys/kernel/debug/omap_mux"

Pin header8[46] = {
  {"","",1,0},
  {"","",2,0},
  {"gpmc_ad6","PIN8_3",3,PIN8_3},
  {"gpmc_ad7","PIN8_4",4,PIN8_4},
  {"gpmc_ad2","PIN8_5",5,PIN8_5}
};

Pin header9[46] = {
  {
      "GND",
      "",
      1,
      0
  },
  {
      "GND",
      "",
      2,
      0
  }
};


Pin findPinInHeader(Pin *array,int pin){
    int counter = 0;
    
    for(counter = 0; counter < 46; counter++){
        //printf("Searching pin %i name %s\n",counter,array[counter].pinname);
        if(array[counter].pinnumber == pin){
            return array[counter];
        }
    }
    return array[0];
}

Pin findPin(int header,int pin){
    Pin returnPin;
    
    if(header == 9){
        returnPin = findPinInHeader(header9,pin);
    }else{
        returnPin = findPinInHeader(header8,pin);
    }
    
    return returnPin;
    
}

