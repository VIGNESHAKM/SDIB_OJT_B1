#include<stdio.h>
void fun(char**);
int main()
{
    char*arr[]={"bat","cat","fat","hat","mat","pat"};
    fun(arr);
    return 0;
}
    void fun(char**P)
{
        char*t;
        t=(P += sizeof(int))[-1];
        printf("%s \n",t);
    }

    
