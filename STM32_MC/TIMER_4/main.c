#include"stm32f4xx.h"
int main(void)
{
	RCC->AHB1ENR |=1;
	GPIOA->MODER &=~(3<<16);
	GPIOA->MODER |=(1<<16);
	RCC->APB1ENR |=1;
	TIM2->PSC =1600-1;
	TIM2->ARR =2000-1;
	TIM2->CNT =0;
	TIM2->CR1 =0X1;
	while(1)
	{
		while(!(TIM2->SR & 1)) {}
		TIM2->SR&=~1;
		GPIOA->ODR ^=(1<<8);
	}
}

