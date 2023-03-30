#include "stm32f4xx.h"
void delayMs(int n);
int main(void)
{
	RCC->AHB1ENR |=1;
	GPIOA->MODER &=~0X00000C00;
	GPIOA->MODER |=0X000004000;
	while(1)
	{
		delayMs(1000);
		GPIOA->ODR ^=0X0000020;
	}
}
void delayMs(int n)
{
	int i;
	SysTick->LOAD =16000;
	SysTick->CTRL =0X5;
	for(i=0;i<n;i++)
	{
		while((SysTick->CTRL & 0X10000)==0)
		{}
	}
	SysTick->CTRL =0;
}

