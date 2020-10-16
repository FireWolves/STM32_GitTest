#include "Timer.h"
void Timer_InitConfig(TIM_TimeBaseInitTypeDef *TIMx, uint16_t pcr, uint16_t arr)
{
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);
    TIM_TimeBaseInitTypeDef Timer_InitStructure;
    Timer_InitStructure.TIM_ClockDivision = TIM_CKD_DIV1;
    Timer_InitStructure.TIM_CounterMode = TIM_CounterMode_Up;
    Timer_InitStructure.TIM_Prescaler = pcr - 1;
    Timer_InitStructure.TIM_Period = arr - 1;
    TIM_TimeBaseInit(TIMx, &Timer_InitStructure);
}