#include<stdio.h>
int main ()
{
    int a = 10, b = 20;
     int *p;
    p = &a;
    printf ("value of a is %d, *p is %d \n", a, *p);
    *p = 5;  //wrong you can not change value at address
    printf ("value of a is %d, *p is %d \n", a, *p);
    p = &b;  //you can change address
    return 0;
}