/*
 * my_delay.c
 *
 *  Created on: 30 jun. 2022
 *      Author: agus_
 */

//#include "board.h"
#include "my_delay.h"
#include "defs.h"

static volatile uint32_t tick_ct = 0;

void SysTick_Handler(void)
{
   tick_ct++;
}

void delay(uint32_t tk)
{
   uint32_t end = tick_ct + tk;
   while(tick_ct < end)
      __WFI();
}
