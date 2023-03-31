#include<stdio.h>
int main()
{
    int a=100,b=200;
    int *p,*q;
    int c=300;
    p=&a;
    q=&b;
    c=*q;
    *p=20;
    printf("%d %p %d \n",p,*p);
    printf("%p %p %d \n", &q,p,*(&c));
    return 0;

}