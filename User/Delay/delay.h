#ifndef __DELAY_H

#define __DELAY_H

#include "stm32f10x.h"
void delay_us(uint32_t us);
void delay_ms(uint16_t ms);
void systick_delay_ms(uint32_t ms);
void systick_delay_us(uint32_t us);
#endif
