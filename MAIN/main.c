#include "main.h"

u8 i = 0;

int main(void)
{
	__NOP();
	GPIO_InitConfig(GPIOA,GPIO_Mode_Out_PP,GPIO_Speed_50MHz,GPIO_Pin_10|GPIO_Pin_11);
	
}
