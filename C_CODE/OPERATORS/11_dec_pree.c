#include<stdio.h>
int main()
{
    int x,y,z;
    printf("enter the value of x");
    scanf("%d", &x);
    y = --x;
   printf("%d %d\n",x,y);
    z = --y;
    printf("%d %d", y,z);
    return 0;
}