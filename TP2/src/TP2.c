/*=============================================================================
 * Author: Agustin Strusberg <astrusberg@fi.uba.ar>
 * Date: 2022/06/20
 *===========================================================================*/

/*=====[Inclusions of function dependencies]=================================*/

#include "TP2.h"
#include "gpio.h"

/*=====[Definition macros of private constants]==============================*/

/*=====[Definitions of extern global variables]==============================*/

/*=====[Definitions of public global variables]==============================*/

/*=====[Definitions of private global variables]=============================*/

/*=====[Main function, program entry point after power on or reset]==========*/
void myDelay(uint64_t time){
	for(int i = 0; i < time;i++){ }
}


int main( void )
{
   // ----- Setup -----------------------------------
   // Read clock settings and update SystemCoreClock variable
   SystemCoreClockUpdate();

   cyclesCounterInit( SystemCoreClock );


	//boardInit();
	myGpioInit( 0, GPIO_ENABLE);

	myGpioMap_t LED_ROJO = LED2;
	myGpioInit(LED_ROJO, GPIO_OUTPUT);
	myGpioWrite(LED_ROJO, 1);

   // ----- Repeat for ever -------------------------
   while( 1 ) {
	   myGpioWrite(LED_ROJO, 0);
	   delay(1000);
	   myGpioWrite(LED_ROJO, 1);
	   delay(1000);
   }

   // YOU NEVER REACH HERE, because this program runs directly or on a
   // microcontroller and is not called by any Operating System, as in the 
   // case of a PC program.
   return 0;
}
