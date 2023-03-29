#include<stdio.h>
int main()
{
    int x , y,  big;
    printf("enter the two no");
    scanf("%d %d",&x, &y);
      big = x>y ? x:y;
      printf("largest no in %d and %d is %d\n" ,  x,y, big);
      return 0;

}