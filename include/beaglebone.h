#ifndef beaglebone_h
#define beaglebone_h

#include "beaglepins.h"

#define HIGH 1
#define LOW 0

#define INPUT 0
#define OUTPUT 1

#define true 1
#define false 0

void setup();
void loop();

void pinMode(unsigned int pin, unsigned int direction);
void digialWrite(unsigned int pin, unsigned int value);
unsigned int digitalRead(unsigned int pin);

void gpio_export(unsigned int pin);
void gpio_unexport(unsigned int pin);

void gpio_set_direction(unsigned int direction,unsigned int pin);
void gpio_set(unsigned int value, unsigned int pin);
unsigned int gpio_read(unsigned int pin);

#endif