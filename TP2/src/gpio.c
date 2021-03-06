#include "gpio.h"

/*typedef struct {
 int8_t scu_port;
 int8_t scu_pin;
 int8_t func;
 int8_t gpio_port;
 int8_t gpio_pin;
} myConf_t;*/

//Sacado de firmware_v3/libs/sapi/sapi_vX.X.X/soc/peropherals/src/sapi_gpio.c
const myConf_t myGpioPinInit[] = {
   //{ {PinNamePortN ,PinNamePinN}, PinFUNC, {GpioPortN, GpioPinN} }
      // ---------------------------------------------------------------
      //                           EDU-CIAA-NXP
      // ---------------------------------------------------------------
      //                             Snap  sAPI   Connector  Serigraphy
      // ---------------------------------------------------------------

      // { {1,15}, FUNC0, {0, 2} },   //  0   DIO0    CON2_09   ENET_RXD0

      // { {1, 4}, FUNC0, {0,11} },   //  1   DIO1    CON2_21   SPI_MOSI
      // { {4, 9}, FUNC4, {5,13} },   //  2   DIO2    CON2_23   LCD_EN

      // { {6, 1}, FUNC0, {3, 0} },   //  3   DIO3    CON2_29   GPIO0
      // { {6, 5}, FUNC0, {3, 4} },   //  4   DIO4    CON2_31   GPIO2
      // { {6, 8}, FUNC4, {5,16} },   //  5   DIO5    CON2_33   GPIO4
      // { {6,10}, FUNC0, {3, 6} },   //  6   DIO6    CON2_35   GPIO6

      // { {0, 0}, FUNC0, {0, 0} },   //  7   DIO7    CON2_04   ENET_RXD1
      // { {0, 1}, FUNC0, {0, 1} },   //  8   DIO8    CON2_06   ENET_TXEN
      // { {7, 7}, FUNC0, {3,15} },   //  9   DIO9    CON2_08   ENET_MDC
      // { {1,16}, FUNC0, {0, 3} },   // 10   DIO10   CON2_10   ENET_CRS_DV
      // { {1,17}, FUNC0, {0,12} },   // 11   DIO11   CON2_12   ENET_MDIO
      // { {1,18}, FUNC0, {0,13} },   // 12   DIO12   CON2_14   ENET_TXD0
      // { {1,20}, FUNC0, {0,15} },   // 13   DIO13   CON2_16   ENET_TXD1
      // { {1, 3}, FUNC0, {0,10} },   // 14   DIO14   CON2_18   SPI_MISO

      // { {4,10}, FUNC4, {5,14} },   // 15   DIO15   CON2_22   LCD4
      // { {4, 8}, FUNC4, {5,12} },   // 16   DIO16   CON2_24   LCDRS
      // { {4, 6}, FUNC0, {2, 6} },   // 17   DIO17   CON2_26   LCD3
      // { {4, 5}, FUNC0, {2, 5} },   // 18   DIO18   CON2_28   LCD2
      // { {4, 4}, FUNC0, {2, 4} },   // 19   DIO19   CON2_30   LCD1

      // { {6, 4}, FUNC0, {3, 3} },   // 20   DIO20   CON2_32   GPIO1
      // { {6, 7}, FUNC4, {5,15} },   // 21   DIO21   CON2_34   GPIO3
      // { {6, 9}, FUNC0, {3, 5} },   // 22   DIO22   CON2_36   GPIO5
      // { {6,11}, FUNC0, {3, 7} },   // 23   DIO23   CON2_38   GPIO7
      // { {6,12}, FUNC0, {2, 8} },   // 24   DIO24   CON2_40   GPIO8

      // { {2, 4}, FUNC4, {5, 4} },   // 25   DIO25   CON1_23   RS232_RXD
      // { {2, 3}, FUNC4, {5, 3} },   // 26   DIO26   CON1_25   RS232_TXD
      // { {3, 1}, FUNC4, {5, 8} },   // 27   DIO27   CON1_27   CAN_RD
      // { {3, 2}, FUNC4, {5, 9} },   // 28   DIO28   CON1_29   CAN_TD
      // { {7, 4}, FUNC0, {3,12} },   // 29   DIO29   CON1_31   T_COL1
      // { {4, 0}, FUNC0, {2, 0} },   // 30   DIO30   CON1_33   T_FIL0
      // { {4, 3}, FUNC0, {2, 3} },   // 31   DIO31   CON1_35   T_FIL3
      // { {4, 2}, FUNC0, {2, 2} },   // 32   DIO32   CON1_37   T_FIL2
      // { {1, 5}, FUNC0, {1, 8} },   // 33   DIO33   CON1_39   T_COL0

      // { {7, 5}, FUNC0, {3,13} },   // 34   DIO34   CON1_34   T_COL2
      // { {4, 1}, FUNC0, {2, 1} },   // 35   DIO35   CON1_36   T_FIL1

      {  4, 1, FUNC0, 2, 1  },   //   0   CON1_36   T_FIL1
      {  7, 5, FUNC0, 3,13  },   //   1   CON1_34   T_COL2

      {  1, 5, FUNC0, 1, 8  },   //   2   CON1_39   T_COL0
      {  4, 2, FUNC0, 2, 2  },   //   3   CON1_37   T_FIL2
      {  4, 3, FUNC0, 2, 3  },   //   4   CON1_35   T_FIL3
      {  4, 0, FUNC0, 2, 0  },   //   5   CON1_33   T_FIL0
      {  7, 4, FUNC0, 3,12  },   //   6   CON1_31   T_COL1

      {  3, 2, FUNC4, 5, 9  },   //   7   CON1_29   CAN_TD
      {  3, 1, FUNC4, 5, 8  },   //   8   CON1_27   CAN_RD

      {  2, 3, FUNC4, 5, 3  },   //   9   CON1_25   RS232_TXD
      {  2, 4, FUNC4, 5, 4  },   //  10   CON1_23   RS232_RXD

      {  6,12, FUNC0, 2, 8  },   //  11   CON2_40   GPIO8
      {  6,11, FUNC0, 3, 7  },   //  12   CON2_38   GPIO7
      {  6, 9, FUNC0, 3, 5  },   //  13   CON2_36   GPIO5
      {  6, 7, FUNC4, 5,15  },   //  14   CON2_34   GPIO3
      {  6, 4, FUNC0, 3, 3  },   //  15   CON2_32   GPIO1

      {  4, 4, FUNC0, 2, 4  },   //  16   CON2_30   LCD1
      {  4, 5, FUNC0, 2, 5  },   //  17   CON2_28   LCD2
      {  4, 6, FUNC0, 2, 6  },   //  18   CON2_26   LCD3
      {  4, 8, FUNC4, 5,12  },   //  19   CON2_24   LCDRS
      {  4,10, FUNC4, 5,14  },   //  20   CON2_22   LCD4

      {  1, 3, FUNC0, 0,10  },   //  21   CON2_18   SPI_MISO

      {  1,20, FUNC0, 0,15  },   //  22   CON2_16   ENET_TXD1
      {  1,18, FUNC0, 0,13  },   //  23   CON2_14   ENET_TXD0
      {  1,17, FUNC0, 0,12  },   //  24   CON2_12   ENET_MDIO
      {  1,16, FUNC0, 0, 3  },   //  25   CON2_10   ENET_CRS_DV
      {  7, 7, FUNC0, 3,15  },   //  26   CON2_08   ENET_MDC
      {  0, 1, FUNC0, 0, 1  },   //  27   CON2_06   ENET_TXEN
      {  0, 0, FUNC0, 0, 0  },   //  28   CON2_04   ENET_RXD1

      {  6,10, FUNC0, 3, 6  },   //  29   CON2_35   GPIO6
      {  6, 8, FUNC4, 5,16  },   //  30   CON2_33   GPIO4
      {  6, 5, FUNC0, 3, 4  },   //  31   CON2_31   GPIO2
      {  6, 1, FUNC0, 3, 0  },   //  32   CON2_29   GPIO0

      {  4, 9, FUNC4, 5,13  },   //  33   CON2_23   LCDEN

      {  1, 4, FUNC0, 0,11  },   //  34   CON2_21   SPI_MOSI

      {  1,15, FUNC0, 0, 2  },   //  35   CON2_09   ENET_RXD0


      {  1, 0, FUNC0, 0, 4  },   // 36   TEC1    TEC_1
      {  1, 1, FUNC0, 0, 8  },   // 37   TEC2    TEC_2
      {  1, 2, FUNC0, 0, 9  },   // 38   TEC3    TEC_3
      {  1, 6, FUNC0, 1, 9  },   // 39   TEC4    TEC_4

      {  2, 0, FUNC4, 5, 0  },   // 43   LEDR    LED0_R
      {  2, 1, FUNC4, 5, 1  },   // 44   LEDG    LED0_G
      {  2, 2, FUNC4, 5, 2  },   // 45   LEDB    LED0_B
      {  2,10, FUNC0, 0,14  },   // 40   LED1    LED1
      {  2,11, FUNC0, 1,11  },   // 41   LED2    LED2
      {  2,12, FUNC0, 1,12  },   // 42   LED3    LED3

};


myConf_t myPin2Conf(myGpioMap_t pin){
	return myGpioPinInit[pin];
}

void getScuGpioMode(gpioInit_t modo, uint16_t* scu_mode, uint8_t* gpio_mode){
	switch(modo) {
		case GPIO_ENABLE:
			/* Initializes GPIO */
			Chip_GPIO_Init(LPC_GPIO_PORT);
			break;

	   case GPIO_INPUT:
		  *scu_mode = SCU_MODE_INACT | SCU_MODE_INBUFF_EN | SCU_MODE_ZIF_DIS;

	      *gpio_mode = GPIO_INPUT;
	      break;

	   case GPIO_INPUT_PULLUP:
	      *scu_mode = SCU_MODE_PULLUP | SCU_MODE_INBUFF_EN | SCU_MODE_ZIF_DIS;

	      *gpio_mode = GPIO_INPUT;
	      break;

	   case GPIO_INPUT_PULLDOWN:
		   *scu_mode = SCU_MODE_PULLDOWN | SCU_MODE_INBUFF_EN | SCU_MODE_ZIF_DIS;

		   *gpio_mode = GPIO_INPUT;
	      break;
	   case GPIO_INPUT_PULLUP_PULLDOWN:
		   *scu_mode = SCU_MODE_REPEATER | SCU_MODE_INBUFF_EN | SCU_MODE_ZIF_DIS;

		   *gpio_mode = GPIO_INPUT;
	      break;

	   case GPIO_OUTPUT:
		   *scu_mode = SCU_MODE_INACT | SCU_MODE_ZIF_DIS | SCU_MODE_INBUFF_EN;

		   *gpio_mode = GPIO_OUTPUT;
	      break;

	   default:
	      break;
	   }
}


void myGpioInit(myGpioMap_t pin, gpioInit_t modo){
	myConf_t config = myPin2Conf(pin);

	uint16_t scu_mode;
	uint8_t gpio_mode;

	getScuGpioMode(modo, &scu_mode, &gpio_mode);
	if(modo != GPIO_ENABLE){
    Chip_SCU_PinMux(config.scu_port, config.scu_pin, scu_mode, config.func);

    Chip_GPIO_SetDir( LPC_GPIO_PORT, config.gpio_port, ( 1 << config.gpio_pin ), gpio_mode);
    // si output Chip_GPIO_SetPinState( LPC_GPIO_PORT, gpioPort, gpioPin, 0);
	}
}

uint8_t myGpioWrite( myGpioMap_t pin, uint8_t estado){
   if( pin == myVCC || pin == myGND)
	  return FALSE;

   uint8_t resultado = 1;
   myConf_t config = myPin2Conf(pin);

   Chip_GPIO_SetPinState( LPC_GPIO_PORT, config.gpio_port, config.gpio_pin, estado);

   return resultado;
}

bool_t myGpioRead( myGpioMap_t pin )
{
	   if( pin == myVCC || pin == myGND)
		  return FALSE;
	   uint8_t resultado;
	   myConf_t config = myPin2Conf(pin);

	   resultado = (bool_t) Chip_GPIO_ReadPortBit( LPC_GPIO_PORT, config.gpio_port, config.gpio_pin );

   return resultado;
}

void myGpioToggle(myGpioMap_t pin ){
	   if( pin == myVCC || pin == myGND)
		  return;
	   myConf_t config = myPin2Conf(pin);
	   myGpioWrite(pin, !(bool_t) Chip_GPIO_ReadPortBit( LPC_GPIO_PORT, config.gpio_port, config.gpio_pin ));
}

