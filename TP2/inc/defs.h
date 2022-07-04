#ifndef defs_h
#define defs_h

#include "stdint.h"
#include "cmsis.h"
#include "core_cm4.h"
#include "chip_lpc43xx.h"
#include "board.h"


#define SCU_BASE                0x40086000

#define GPIO_BASE               0x400F4000

#define TICKRATE_HZ (1000)

typedef uint8_t bool_t;
typedef uint64_t tick_t;
typedef void (*callBackFuncPtr_t)(void *);

typedef struct {
 int8_t scu_port;
 int8_t scu_pin;
 int8_t func;
 int8_t gpio_port;
 int8_t gpio_pin;
} myConf_t;


#endif
