#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20]="HELLO",str2[20]="word";
    printf("%s\n",strcpy(str2,strcat(str1,str2)));
    return 0;

}
