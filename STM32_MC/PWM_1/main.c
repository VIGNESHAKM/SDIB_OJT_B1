/* USER CODE BEGIN Header */
/**
  **************************
  * @file           : main.c
  * @brief          : Main program body
  **************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  **************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
void delayMs(int n);
int main()
{
	RCC->AHB1ENR    |=0x1;
	GPIOA->MODER   &=~(3<<10);
	GPIOA->MODER   |=(1<<11);
	GPIOA->AFR[0]  &=~(0xF<<20);
	GPIOA->AFR[0]   |=1<<20;


	RCC->APB1ENR|=1;
	TIM2->PSC=10-1;
	TIM2->ARR=3200-1;
	TIM2->CNT=0;
	TIM2->CCMR1=0x0068;
	TIM2->CCER=1;
	TIM2->CCR1=32;
	TIM2->CR1=1;
	while(1)
	{
		TIM2->CCR1=TIM2->CCR1  *110/100;
		if(TIM2->CCR1>32000)
			TIM2->CCR1=32;
		delayMs(20);
	}
}

	void delayMs(int n)
	{
		int i;
		for(;n>0;n--)
			for(i=0;i<3195;i++);

	}
