#include<stdio.h>
int num=5;
int main()
{
    fun();
    fun();
    return 0;
}
int fun()
{
    static int num=2;
    printf("%d",num);
    num++;
    return 0;
}

