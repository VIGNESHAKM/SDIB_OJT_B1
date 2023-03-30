#include "main.h"
unsigned char uart_read()
{
	while(!(USART2->SR &0x20)){}
	return USART2->DR;
}
	void Delay(int T)
	{
		while(T--)
		{
			for(int i=0;i<100000;i++);

		}

}
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

led_init()
{
	GPIOA->MODER |=0x400;

}

void led_toggle(int count)
{
	for(count %=10;count>0;count--)
	{
		GPIOA->BSRR |=0X20;
		Delay(1000);
		GPIOA->BSRR |=0x200000;
		Delay(1000);
	}
}
char dat;
int main()
{
	sconfig_init();
	led_init();
	while(1)
	{
		dat=uart_read();
		led_toggle(dat);
	}
}

