#include "main.h"
void sconfig_init()
{
	RCC->APB1ENR   |=0x20000;
	RCC->AHB1ENR   |=0x1;
	GPIOA->MODER   |=0X20;
	GPIOA->AFR[0]  |=0X700;
	USART2->BRR    |=0x683;  // 9600 rate
	USART2->CR1    |=0X8;
	USART2->CR1    |=0x2000;
	}
void USART2_Tx(unsigned char data)
{
	while(!(USART2->SR & 0x80))
	{}
	USART2->DR    |=(data & 0xFF);

}
void delay (int T)
{
	while(T--)
	for(int i=0;i<3000;i++);
}
int main()
{
	sconfig_init();
	while(1)
	{
		USART2_Tx('H');
		delay(100);
		USART2_Tx('E');
		delay(100);
		USART2_Tx('L');
		delay(100);
		USART2_Tx('L');
		delay(100);
		USART2_Tx('O');
		delay(100);

	}

}
