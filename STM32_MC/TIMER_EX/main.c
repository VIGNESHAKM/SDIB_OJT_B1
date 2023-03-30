#include "main.h"
int timestamp=0;
int hold=1;
int main(void)
{
	RCC->AHB1ENR   |=1;
	GPIOA->MODER   &=~0xC00;
	GPIOA->MODER    |=0x0800;
	GPIOA->AFR[0] &=~ 0xF00000;
	GPIOA->AFR[0]=0x100000;
	RCC->APB1ENR |=1;
	TIM2->PSC=1600-1;
	TIM2->ARR=10000-1;
	TIM2->CCMR1=0x30;
    TIM2->CCER  |=1;
    TIM2->CNT   =0;
    TIM2->CR1    =1;
    RCC->AHB1ENR  |=1;
    GPIOA->MODER  &=~ 0x3000;
    GPIOA->MODER  |=0x2000;
    GPIOA->AFR[0]  &=~ (0xF<<24);
    GPIOA->AFR[0]  |=(1<<25);
    TIM2->CCR1=0;
    TIM2->CCER |=1;
    TIM2->CNT=0;
    TIM2->CR1 =1;
    RCC->AHB1ENR  |=2;
    TIM3->PSC  =1600-1;
    TIM3->CCMR1=0x41;
    TIM3->CCER=1;
    TIM3->CR1=1;
    while(1)
    {
    	while(!(TIM3->SR  &  2))

    	{	}
    	timestamp=TIM3->CCR1;
    }
}
