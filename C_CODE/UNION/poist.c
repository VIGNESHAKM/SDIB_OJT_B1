#include<stdio.h>
int main()
{
    int a=10;
    char b;
    float c;
    void *p;
    p=&a;
    p=&b;
    p=&c;
    printf("\n %d",*(int*)p);
     printf("\n%d",*(char*)p);
     printf("\n %d",*(float*)p);
}
