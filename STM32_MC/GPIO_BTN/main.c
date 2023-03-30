#include"stm32f4xx.h"
#include<stdio.h>
void delay(int T)
{
    int i;
    while(T--)
    {
        for(i=0;i<5000;i++);
    }
}
int main()
{
    RCC->AHB1ENR |= 7;
    GPIOA->MODER |= 0x10000;
    GPIOB->MODER |= 0x10000;
    GPIOC->MODER |= 0x40000;
    while(1)
    {
        GPIOA->ODR |= 0x100;
        delay(200);
        GPIOA->ODR &= ~0x100;
        delay(200);
        GPIOB->ODR |= 0x100;
        delay(200);
        GPIOB->ODR &= ~0x100;
        delay(200);
        GPIOC->ODR |= 0x200;
        delay(200);
        GPIOC->ODR &= ~0x200;
        delay(200);
    }
}
