#include<stdio.h>
int fun(int i)
{
    i++;
    return i;
}
int main()
{
    int fun(int);
    int i=3;
    fun(i=fun(fun(i)));
    printf("%d\b",i);
    return 0;
}
