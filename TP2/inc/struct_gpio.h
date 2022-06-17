#ifndef struct_gpio_h
#define struct_gpio_h

#include "sapi.h"


typedef struct { 
 int8_t scu_port; 
 int8_t scu_pin; 
 int8_t func; 
 int8_t gpio_port; 
 int8_t gpio_pin; 
} conf_t; 



#endif
