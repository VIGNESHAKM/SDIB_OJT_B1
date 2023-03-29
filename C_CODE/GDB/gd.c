#include<stdio.h>
 int add(int,int);
int main() 
{
   int num1, num2, res;
 
   printf("\nEnter the two numbers : ");
   scanf("%d %d", &num1, &num2);
   res = add(num1, num2);

   printf("\nAddition of two number is : %d\n",res);
   return (0);
}
int add(int num1, int num2) 
{
   int num3;
   num3 = num1 + num2;
   return (num3);
}