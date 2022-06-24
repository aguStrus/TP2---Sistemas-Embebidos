/*
 * gpio.h
 *
 *  Created on: 22 jun. 2022
 *      Author: agus_
 */

#ifndef AGUS_TP2_INC_GPIO_H_
#define AGUS_TP2_INC_GPIO_H_

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
} myGpioInit_t;

typedef enum {

   // Configure GPIO pins for EDU-CIAA-NXP
      VCC = -2, GND = -1,
      // P1 header
	  T_FIL1,    T_COL2,    T_COL0,    T_FIL2,    T_FIL3,    T_FIL0,    T_COL1,
	  CAN_TD,    CAN_RD,    RS232_TXD, RS232_RXD,
      // P2 header
	  GPIO8,    GPIO7,    GPIO5,    GPIO3,    GPIO1,
	  LCD1,     LCD2,     LCD3,     LCDRS,    LCD4,
	  SPI_MISO,
	  ENET_TXD1, ENET_TXD0, ENET_MDIO, ENET_CRS_DV, ENET_MDC, ENET_TXEN, ENET_RXD1,
	  GPIO6,    GPIO4,    GPIO2,    GPIO0,
	  LCDEN,
	  SPI_MOSI,
	  ENET_RXD0,
      // Switches
      // 36   37     38     39
	  TEC1,    TEC2,    TEC3,    TEC4,
      // Leds
      // 40   41     42     43     44     45
	  LEDR,    LEDG,    LEDB,    LED1,    LED2,    LED3,
} myGpioMap_t;

//Funciones
void myGpioInit(myGpioMap_t pin, myGpioInit_t modo);
uint8_t myGpioWrite( myGpioMap_t pin, uint8_t estado);

#endif /* AGUS_TP2_INC_GPIO_H_ */
