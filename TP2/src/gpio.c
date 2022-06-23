#include "defs.h"

myConf_t myPin2Conf(myGpioMap_t pin){
	return myGpioPinInit[pin];
}

void myGpioInit(myGpioMap_t pin, uint8_t modo){
	myConf_t config = myPin2Conf(pin);

	// Configuro el pin y puerto del scu con la func, con el modo (Registro de configuracion, pag. 405 de User Manual)
	//ADDRESS(SCU_BASE, config.scu_port * 0x80 + config.scu_port * 0x4) = (modo | config.func);

	// Configuro el pin (LED1) como salida (Registro de direccion, pag. 455 de User Manual)
	//ADDRESS(GPIO_BASE, config.gpio_port * 0x20) |= (1 << config.gpio_pin);
}


