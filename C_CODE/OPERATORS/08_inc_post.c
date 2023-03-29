#include<stdio.h>
int main()
{
    int x,y,z;
    x=5;
    y=x++;
    printf(" %d %d\n",y,x);
    z=y++;
    printf("%d %d\n ",z,x);
    y=x--;
    printf("%d %d\n",x,y);
    z=y--;
    printf("%d %d\n",y,z);
    
    return 0;
}