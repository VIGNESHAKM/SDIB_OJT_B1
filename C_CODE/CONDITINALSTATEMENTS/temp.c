#include<stdio.h>
int main()
{
    int a=10,b=2;
    printf("\n before if statement\n a=%d\tb=%d\n",a,b);
    if(a<b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    printf("\n after if statement\n a=%d\tb=%d\n",a,b);
    }
