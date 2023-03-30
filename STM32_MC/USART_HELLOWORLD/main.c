/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------* */
#include <stdint.h>
#include<stdio.h>

#if !defined(_SOFT_FP) && defined(_ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
int_write(int file, char *ptr, int len)
{
	int i=0;
	for(i=0;i<len;i++)
		ITM_SendChar((*ptr++));
	return len;
}
int main(void)
{
    /* Loop forever */
	printf("welcome to embedded world\n");
	for(;;);
}
