
#include "main.h"

int main(void)
{
	RCC->AHB1ENR |=1;
	GPIOA->MODER  |= ~0xC00;
		GPIOA->MODER   |=0x400;
	RCC->APB1ENR |=1;
	TIM2->PSC =15999-1;
	TIM2->ARR =1000-1;
	TIM2->CNT=0;
	TIM2->CR1=0x1;
	while(1)
	{
		while(!(TIM2->SR &1)) {}
		TIM2->SR &= ~1;
		GPIOA->ODR ^=(1<<8);
	}
}
