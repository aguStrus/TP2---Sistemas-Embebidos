/*=============================================================================
 * Author: Agustin Strusberg <astrusberg@fi.uba.ar>
 * Date: 2022/06/20
 *===========================================================================*/

/*=====[Inclusions of function dependencies]=================================*/

#include "TP2.h"
#include "gpio.h"
#include "my_delay.h"



/*=====[Definition macros of private constants]==============================*/
void myBoardInit();
/*=====[Definitions of extern global variables]==============================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Main function, program entry point after power on or reset]==========*/

int main( void )
{
	myBoardInit();


	myGpioMap_t LED_ROJO = myLED1;
	myGpioInit(LED_ROJO, GPIO_OUTPUT);

   // ----- Repeat for ever -------------------------
   while( 1 ) {
	   myGpioToggle(LED_ROJO);
	   delay(1000);
   }

   // YOU NEVER REACH HERE, because this program runs directly or on a
   // microcontroller and is not called by any Operating System, as in the 
   // case of a PC program.
   return 0;
}

void myBoardInit(){
	   // Read clock settings and update SystemCoreClock variable
	   SystemCoreClockUpdate();

	   SysTick_Config(SystemCoreClock / TICKRATE_HZ);

	   myGpioInit( 0, GPIO_ENABLE);
}


