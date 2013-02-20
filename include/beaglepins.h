#ifndef beaglepins_h
#define beaglepins_h

#define PIN8_3 38
#define PIN8_4 39
#define PIN8_5 34
#define PIN8_6 35
#define PIN8_7 66
#define PIN8_8 67
#define PIN8_9 69
#define PIN8_10 68
#define PIN8_11 45
#define PIN8_12 44
#define PIN8_13 23
#define PIN8_14 26
#define PIN8_15 47
#define PIN8_16 46
#define PIN8_17 27
#define PIN8_18 65
#define PIN8_19 22
#define PIN8_20 63
#define PIN8_21 62
#define PIN8_22 37
#define PIN8_23 36
#define PIN8_24 33
#define PIN8_25 32
#define PIN8_26 61
#define PIN8_27 86
#define PIN8_28 88
#define PIN8_29 87
#define PIN8_30 89
#define PIN8_31 10
#define PIN8_32 11
#define PIN8_33 9
#define PIN8_34 81
#define PIN8_35 8
#define PIN8_36 80
#define PIN8_37 78
#define PIN8_38 79
#define PIN8_39 76
#define PIN8_40 77
#define PIN8_41 74
#define PIN8_42 75
#define PIN8_43 72
#define PIN8_44 73
#define PIN8_45 70
#define PIN8_46 71

#define PIN9_11 30
#define PIN9_12 48
#define PIN9_13 31
#define PIN9_14 50
#define PIN9_15 48
#define PIN9_16 51
#define PIN9_17 5
#define PIN9_18 4
#define PIN9_19 13
#define PIN9_20 12
#define PIN9_21 3
#define PIN9_22 2
#define PIN9_23 49
#define PIN9_24 15
#define PIN9_25 117
#define PIN9_26 14
#define PIN9_27 115
#define PIN9_28 113
#define PIN9_29 111
#define PIN9_30 112
#define PIN9_31 110
#define PIN9_41 20
#define PIN9_42 7

#define MODE0 0x000
#define MODE1 0x001
#define MODE2 0x002
#define MODE3 0x003
#define MODE4 0x004
#define MODE5 0x005
#define MODE6 0x006
#define MODE7 0x007

typedef struct {
    char muxname[20];
    char pinname[10];
    int pinnumber;
    int ionumber;
} Pin;

typedef enum {
    RESERVED1 = 1,
    RESERVED2 = 2,
    RESERVED3 = 4,
    DISABLE_PULLUP_RESISTOR = 8,
    PULL_UP_NOT_DOWN = 16,
    RX_ENABLED = 32,
    SLEW_SLOW = 64
} MuxMode;


Pin findPin(int header,int pin);
void muxPin(Pin pin,int mode); 

#endif