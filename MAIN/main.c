#include "main.h"

u8 i = 0;

int main(void)
{
	__NOP();
	GPIO_InitConfig(GPIOA,GPIO_Mode_AIN,GPIO_Speed_10MHz,GPIO_Pin_10);
	
}
