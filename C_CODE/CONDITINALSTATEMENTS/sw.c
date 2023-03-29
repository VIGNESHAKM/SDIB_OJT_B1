#include<stdio.h>
main()
{
int swap(int X, int Y)
    int x=10,y=15;
    swap (x,y);
    
  printf("%d,%d",&x,&y);
 }
int swap(int x,int y)
{
    x=x+y;
y=x-y;
x=x+y;
printf("%d,%d",&x,&y);
return 0;
}



    
