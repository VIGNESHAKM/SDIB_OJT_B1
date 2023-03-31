#include<stdio.h>
int func(int);
int main()
{
int num, square;
printf("\n Enter an num : ");
scanf("%d",&num);
square = func(num);
printf("\n Square of num is : %d ", square);
}
int func(int i)
{
return i*i;
}
    

