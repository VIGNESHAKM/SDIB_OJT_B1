#include<stdio.h>

int main() 
{
    int a ,b;
    printf("Enter the two no .");
    scanf("%d %d",&a,&b);

    printf(" value of a=%d b=%d before swapping\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("value of a=%d b=%d after swapping\n", a, b);

    return 0;
}