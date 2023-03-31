#include<stdio.h>
int main()
{
    int a=100,b=200;
    int *p=&a;
    p=&b;
    *p=15;
    printf("%p \n",&b);
    printf("%d %p \n",*p,p);
    printf("%d\n",b);

}