#include<stdio.h>
int main()
{
    int*p;
    p=10;
    *p++;
    printf("\n %d",&p);
    printf("\n %d",&*p);
}
