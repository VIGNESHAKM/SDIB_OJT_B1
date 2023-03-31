#include<stdio.h>
void main()
{
    int number;
    scanf("%d",&number);
    bin(number);
}
void bin(number)
{
    int x;
    for(int i=7;i>=0;i--)
    {
        x=(number>>i)&0x01;
        printf("%d",x);
    }
}