#include <stdio.h>

#include "../include/beaglepins.h"

#define MUXPATH "/sys/kernel/debug/omap_mux"

Pin header8[46] = {
  {"gnd","GND",1,0},
  {"gmd","GND",2,0},
  {"gpmc_ad6","GPIO1_6",3,PIN8_3},
  {"gpmc_ad7","GPIO1_7",4,PIN8_4},
  {"gpmc_ad2","GPIO1_2",5,PIN8_5},
  {"gpmc_ad3","GPIO1_3",6,PIN8_6},
  {"gpmc_advn_ale","TIMER4",7,PIN8_7},
  {"gpmc_oen_ren","TIMER7",8,PIN8_8},
  {"gpmc_be0n_cle","TIMER5",9,PIN8_9},
  {"gpmc_wen","TIMER6",10,PIN8_10},
  {"gpmc_ad13","GPIO1_13",11,PIN8_11},
  {"GPMC_AD12","GPIO1_12",12,PIN8_12},
  {"gpmc_ad9","EHRPWM2B",13,PIN8_13},
  {"gpmc_ad10","GPIO0_26",14,PIN8_14},
  {"gpmc_ad15","GPIO1_15",15,PIN8_15},
  {"gpmc_ad14","GPIO1_14",16,PIN8_16},
  {"gpmc_ad11","GPIO0_27",17,PIN8_17},
  {"gpmc_clk_mux0","GPIO2_1",18,PIN8_18},
  {"gpmc_ad8","EHRPWM2A",19,PIN8_19},
  {"gpmc_csn2","GPIO1_31",20,PIN8_20},
  {"gpmc_csn1","GPIO1_30",21,PIN8_21},
  {"gpmc_ad5","GPIO1_5",22,PIN8_22},
  {"gpmc_ad4","GPIO1_4",23,PIN8_23},
  {"gpmc_ad1","GPIO1_1",24,PIN8_24},
  {"gpmc_ad0","GPIO1_0",25,PIN8_25},
  {"gpmc_csn0","GPIO1_29",26,PIN8_26},
  {"lcd_vsync","GPIO2_22",27,PIN8_27},
  {"lcd_pclk","GPIO2_24",28,PIN8_28},
  {"lcd_hsync","GPIO2_24",29,PIN8_29},
  {"lcd_ac_bias_en","GPIO2_25",30,PIN8_30},
  {"lcd_data14","UART5_CTSN",31,PIN8_31},
  {"lcd_data15","UART5_RTSN",32,PIN8_32},
  {"lcd_data13","UART4_RTSN",33,PIN8_33},
  {"lcd_data11","UART3_RTSN",34,PIN8_34},
  {"lcd_data12","UART4_CTSN",35,PIN8_35},
  {"lcd_data10","UART3_CTSN",36,PIN8_36},
  {"lcd_data8","UART5_TXD",37,PIN8_37},
  {"lcd_data9","UART5_RXD",38,PIN8_38},
  {"lcd_data6","GPIO2_12",39,PIN8_39},
  {"lcd_data7","GPIO2_13",40,PIN8_40},
  {"lcd_data4","GPIO2_10",41,PIN8_41},
  {"lcd_data5","GPIO2_11",42,PIN8_42},
  {"lcd_data2","GPIO2_8",43,PIN8_43},
  {"lcd_data3","GPIO2_9",44,PIN8_44},
  {"lcd_data0","GPIO2_6",45,PIN8_45},
  {"lcd_data1","GPIO2_7",46,PIN8_46}
};

Pin header9[46] = {
   { "gnd","GND",1,0 },
   { "gnd","GND",2,0 },
   { "VDD_3V3EXP ","DC_3.3",3,0 },
   { "VDD_3V3EXP ","DC_3.3",4,0 },
   { "VDD_5V","VDD_5V",5,0 },
   { "VDD_5V","VDD_5V",6,0 },
   { "SYS_5V","SYS_5V",7,0 },
   { "SYS_5V","SYS_5V",8,0 },
   { "PWR_BUT*","PWR_BUT*",9.0 },
   { "SYS_RESETn","SYS_RESETn",10,0 }
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

