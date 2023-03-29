#include<stdio.h>

#ifndef POSITIVE
#define NEGETIVE
#endif
int main()
{
    #ifdef POSITIVE
    int a=10,b=20;
    #endif

    #ifdef NEGETIVE
    int a=-10,b=-20;
    #endif
    printf("\n %d +%d=%d\n",a,b,a+b);

}
