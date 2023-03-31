#include<stdio.h>
int i;
int fin1(int);
int fun2(int);
int main()
{
    extern int j;
    int i=3,x;
    x=fun1(i);
    printf("%d",i);
    return 0;
}
int fun1(int i)
{
    printf("%d",++i)
    return j;
}
int fun2(int i)
{
    printf("%D",++i);
    return 0;
}

