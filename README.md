# **Sistemas Embebidos**
## **Trabajo Práctico N° 2: GPIO**
### **Integrantes:**

Villacampa Horta Augusto - 102602

Strusberg Agustin Javier - 102809

Joel Gottfried - 102498


### Objetivos ###
En este trabajo se busca crear las funciones gpioInit, gpioWrite y gpioRead, las cuales implementan completamente el uso de los
GPIOs de la placa en una manera simple y general.

### Implementación ###

Lo primero que se hace es incluir las bibliotecas stdint.h, cmsis.h, core_cm4.h y chip_lpc43xx.h que contienen definiciones de el microcontrolador brindadas por el fabricante.
Se procedio a crear una estructura llamada myConf_t que contiene el puerto y el pin a configurar por el SCU, la función para que el pin anterior se configure como GPIO y el puerto y el pin del GPIO utilizado. Tambien se creo un tipo enumerativo que contiene los diferentes modos en los que puede operar un GPIO a partir de la hoja de datos, que se lo llamo myGpioInit_t.

Se creo un vector global de estas estructuras llamado myGpioPinInit que contiene todas las posibles configuraciones que pueden adoptar los GPIOs. Todas estas definiciones se agruparon en la biblioteca defs.h. 

En la biblioteca gpio.h se creo un tipo enumerativo llamado myGpioMap_t en el cual esta relacionado cada nombre del pinout del chip con su respectiva posicion en el vector myGpioPinInit.

Una vez terminadas de confeccionar las bibliotecas se procedio a implementar las funciones deseadas, gpioInit, gpioWrite y gpioRead en el archivo gpio.c. Primero se crearon dos funciones auxiliares, myPin2Conf y getScuGpioMode, en el caso de la primera toma el nombre del pinout y devuelve el numero de pin y en el caso de la segunda toma un myGpioInit_t y devuelve mediante dos punteros el scu_mode, y el gpio_mode. Despues se implementaron las funciones usando las funciones de la librería Chip de LPCOpen.
