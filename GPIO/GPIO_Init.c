#include "GPIO_Init.h"

void GPIO_InitConfig(GPIO_InitTypeDef *GPIOx, GPIOMode_TypeDef GPIO_Mode_x, GPIOSpeed_TypeDef GPIO_Speed_x, uint16_t GPIO_Pin_x)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_x;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_x;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_x;
    GPIO_Init(GPIOx, &GPIO_InitStructure);
}