#include<stdio.h>
int main()
{
    int a[4]={1,2,3,4},*p;
    p=a;
    printf("\n before increment value: %p",p,*p);
    ++*p;
    ++p;
     printf("\n after increment value: %p",p,*p);
    return 0;
}