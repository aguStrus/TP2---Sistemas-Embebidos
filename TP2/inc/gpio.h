/*
 * gpio.h
 *
 *  Created on: 22 jun. 2022
 *      Author: agus_
 */

#ifndef AGUS_TP2_INC_GPIO_H_
#define AGUS_TP2_INC_GPIO_H_

#include "defs.h"

//libs/sapi/sapi_vX.X.X/soc/peripherals/inc/sapi_gpio
/* Pin modes */
/*
 *  INPUT  =  0    (No PULLUP or PULLDOWN)
 *  OUTPUT =  1
 *  INPUT_PULLUP
 *  INPUT_PULLDOWN
 *  INPUT_REPEATER (PULLUP and PULLDOWN)
 *  INITIALIZE
 */
typedef enum {
   GPIO_INPUT, GPIO_OUTPUT,
   GPIO_INPUT_PULLUP, GPIO_INPUT_PULLDOWN,
   GPIO_INPUT_PULLUP_PULLDOWN,
   GPIO_ENABLE
} gpioInit_t;

typedef enum {

   // Configure GPIO pins for EDU-CIAA-NXP
		myVCC = -2, myGND = -1,
	      // P1 header
		  myT_FIL1,    myT_COL2,    myT_COL0,    myT_FIL2,    myT_FIL3,    myT_FIL0,    myT_COL1,
		  myCAN_TD,    myCAN_RD,    myRS232_TXD, myRS232_RXD,
	      // P2 header
		  myGPIO8,    myGPIO7,    myGPIO5,    myGPIO3,    myGPIO1,
		  myLCD1,     myLCD2,     myLCD3,     myLCDRS,    myLCD4,
		  mySPI_MISO,
		  myENET_TXD1, myENET_TXD0, myENET_MDIO, myENET_CRS_DV, myENET_MDC, myENET_TXEN, myENET_RXD1,
		  myGPIO6,    myGPIO4,    myGPIO2,    myGPIO0,
		  myLCDEN,
		  mySPI_MOSI,
		  myENET_RXD0,
	      // Switches
	      // 36   37     38     39
		  myTEC1,    myTEC2,    myTEC3,    myTEC4,
	      // Leds
	      // 40   41     42     43     44     45
		  myLEDR,    myLEDG,    myLEDB,    myLED1,    myLED2,    myLED3,
} myGpioMap_t;

//Funciones
void myGpioInit(myGpioMap_t pin, gpioInit_t modo);
uint8_t myGpioWrite( myGpioMap_t pin, uint8_t estado);
bool_t myGpioRead( myGpioMap_t pin );
void myGpioToggle(myGpioMap_t pin );

#endif /* AGUS_TP2_INC_GPIO_H_ */
