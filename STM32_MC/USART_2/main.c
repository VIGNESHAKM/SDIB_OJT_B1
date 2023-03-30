/*
 * 1.Protocol selected : USART2
 * 2.ENABLE APB1 clock with RCC
 * 3.Enable AHB1 Clock with RCC
 * 4.Alternative Function of PA2 as USART2_Tx
 * 5.Alternative Function of PA3 as USART2_Rx
 * 6.
 *
 */
#include"main.h"
void sconfig_Int();
{
RCC->APB1ENR |=0X20000;
RCC->AHB1ENR |=0X1;
GPIOA->MODER |=0X20;
GPIO->AFR[0] |=0X700;
USART2->BRR |=0x683;  //9600 bordarate
USART2->CR1 |=0X8;
USART2->CR1 |=0X2000;

void USART2_Send(Unsigned char *str)
{
	while(*str)
	{
		USART2_Tx(*str);
		*str++;

	}

}
void USART2_Tx(unsigned char data)
{
	while(!(USART2->SR & 0x80)){}
	USART2->DR |=(data & 0xff);
}

void delay(int T)
{
	While(T--)
		{
		for(int i=0;i<100000;i++);
		}
	int main()
		{
		Sconfig_Init();
		while(1)
		{

		}

 USART2_Tx("H");
 delay(500);

 USART2_Tx("E");
 delay(500);

  USART2_Tx("L");
  delay(500);

  USART2_Tx("L");
  delay(500);

  USART2_Tx("O");
  delay(500);

}
}





