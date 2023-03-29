#include<stdio.h>

int main()
{
    #if defined EVEN
                    int A=12,B=16;
    #else
    #if defined odd
            int a=11,b=31;
    #else
            int a=0,b=0;
    #endif
    #endif
    printf("\n sum of two numbers :%d \n",a+b);


}