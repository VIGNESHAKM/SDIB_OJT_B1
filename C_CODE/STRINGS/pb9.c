#include<stdio.h>
int main()
{
    char str[]="Hello";
    char*ptr=str;
    while(*ptr!='\0')
    printf("%c",++*ptr++);
    printf("\n");
    return 0;

}