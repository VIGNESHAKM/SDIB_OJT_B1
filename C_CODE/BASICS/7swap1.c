#include<stdio.h>
int main()
{
int a=3,b=4;
printf("Before swapping two no \na=%d \nb=%d",a,b);
a=a+b;
b=a-b;
a=a-b;
printf("\nAfter swapping no \na=%d \nb=%d",a,b);
return 0;

}