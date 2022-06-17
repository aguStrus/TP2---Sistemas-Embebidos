
#include "sapi.h"
#include "../inc/struct_gpio.h"


typedef struct {
 int8_t scu_port;
 int8_t scu_pin;
 int8_t func;
 int8_t gpio_port;
 int8_t gpio_pin;
} conf_t;


void gpioInit(conf_t *config, uint8_t modo){
	// Configuro el pin y puerto del scu con la func, con el modo (Registro de configuracion, pag. 405 de User Manual)
	ADDRESS(SCU_BASE + config->scu_port * 0x80 + config->scu_port * 0x4) = (modo | config->func)

	// Configuro el pin (LED1) como salida (Registro de direccion, pag. 455 de User Manual)
	ADDRESS(GPIO_BASE, config->gpio_port * 0x20) |= (1 << config->gpio_pin);
}


