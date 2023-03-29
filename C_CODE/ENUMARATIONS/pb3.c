#include<stdio.h>
int main()
{
    enum days{mon,tue,wed,thu,fri,sat,sun};
    enum days eday=mon;
    printf("mon=%d\n",eday);
    eday=tue;
    printf("tue=%d\n",edays);
    return 0;
    
}