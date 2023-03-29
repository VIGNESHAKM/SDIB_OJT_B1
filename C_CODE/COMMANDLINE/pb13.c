#include<stdio.h>

int main(int sizeofargv, char *argv[])
{
    while(sizeofargv)
        printf("%s", argv[--sizeofargv]);
    return 0;
}