#include <stdio.h>

int main() 
{

    int a , b;
    printf("enter two oprants ");
    scanf("%d %d",&a,&b);
    printf("Output AND = %d\n", a & b);
    printf("output of OR %d\n",a|b);
     printf("output of Exclusive %d\n",a^b);

    return 0;
}