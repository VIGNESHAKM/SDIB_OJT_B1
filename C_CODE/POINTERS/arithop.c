#include<stdio.h>
int (*fnptr)(int x, int y)=&add;
int (*fnptr)(int x, int y)=&sub;
int (*fnptr)(int x, int y)=&mul;
int (*fnptr)(int x, int y)=&div;

int add(int a , int b)
{
return a+b;
}
int sub(int a , int b)
{
return (a-b);
}
int mul(int a, int b)
{
return(a*b);
}
int div(int a ,int b)
{
return (a/b);
}
int main()
{
int i;
int  (*fun)(int a, int b);
fun=add;
i=fun(5,10);
printf("%d\n",i);
fun=sub;
i=fun(5,10);
printf("%d\n",i);
fun=mul;
i=fun(5,10);
printf("%d\n",i);
fun=div;
i=fun(5,10);
printf("%d\n",i);

}