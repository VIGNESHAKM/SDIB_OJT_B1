#include<stdio.h>
int main()
{
    int x=10,count;
    for(count=10;x!=0;x>>=1)
    if(x & 01)
    count++;
    printf("\n count : %d\n",count);
}