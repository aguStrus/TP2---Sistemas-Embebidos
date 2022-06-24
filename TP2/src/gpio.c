#include "defs.h"
#include "gpio.h"

/*typedef struct {
 int8_t scu_port;
 int8_t scu_pin;
 int8_t func;
 int8_t gpio_port;
 int8_t gpio_pin;
} myConf_t;*/


myConf_t myPin2Conf(myGpioMap_t pin){
	return myGpioPinInit[pin];
}

void getScuGpioMode(myGpioInit_t modo, uint16_t* scu_mode, uint8_t* gpio_mode){
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


void myGpioInit(myGpioMap_t pin, myGpioInit_t modo){
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
   if( pin == VCC || pin == GND)
	  return FALSE;

   uint8_t resultado = 1;
   myConf_t config = myPin2Conf(pin);

   Chip_GPIO_SetPinState( LPC_GPIO_PORT, config.gpio_port, config.gpio_pin, estado);

   return resultado;
}


