#ifndef defs_h
#define defs_h

#include "stdint.h"
#include "cmsis.h"
#include "core_cm4.h"
#include "chip_lpc43xx.h"


#define SCU_BASE                0x40086000

#define GPIO_BASE               0x400F4000

typedef struct {
 int8_t scu_port;
 int8_t scu_pin;
 int8_t func;
 int8_t gpio_port;
 int8_t gpio_pin;
} myConf_t;


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


//Sacado de firmware_v3/libs/sapi/sapi_vX.X.X/board/inc/sapi_peripherial_map.h
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

/*
 * Por las dudas, despues borrar:
 *       myVCC = -2, myGND = -1,
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
 */

#endif
