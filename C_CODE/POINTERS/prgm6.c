#include<stdio.h>
void main()
{
    int a[]={1,5,7,9,4},*p;
    p=a;
    ++*a;
    printf("%d",*p);
    *p++;
    p+=2;
    printf("%d \n",*p);
    
}