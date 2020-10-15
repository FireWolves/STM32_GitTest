#ifndef __GPIO_INIT_H__
#define __GPIO_INIT_H__

#include "stm32f10x.h"
#include "stm32f10x_gpio.h"
#include "stm32f10x_conf.h"
void GPIO_InitConfig(GPIO_InitTypeDef *GPIOx, GPIOMode_TypeDef GPIO_Mode_x, GPIOSpeed_TypeDef GPIO_Speed_x, uint16_t GPIO_Pin_x);
#endif /* GPIO_Init.h */
