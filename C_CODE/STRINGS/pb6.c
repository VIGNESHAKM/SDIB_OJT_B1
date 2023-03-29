#include<stdio.h>
#include<stdio.h>
int main()
{
    static char s[]="Hello!";
    printf("%d\n",*(s+strlen(s)));
    return 0;
}