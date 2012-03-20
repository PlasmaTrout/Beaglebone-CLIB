#ifndef beaglebone_h
#define beaglebone_h

#define HIGH 1
#define LOW 0

#define INPUT 0
#define OUTPUT 1

#define true 1
#define false 0

#define PIN3 38
#define PIN4 39
#define PIN5 34
#define PIN6 35
#define PIN11 45
#define PIN12 44

void setup();
void loop();

void gpio_export(unsigned int pin);
void gpio_unexport(unsigned int pin);

void gpio_set_direction(unsigned int direction,unsigned int pin);
void gpio_set(unsigned int value, unsigned int pin);

#endif