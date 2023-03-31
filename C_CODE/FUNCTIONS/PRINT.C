#include <stdio.h>
int main( )
{
    int j;
auto int j = 1;
{
auto int j= 2;
{
auto int j = 3;
printf ( " %d ", j);
}
printf ( "\t %d ",j);
}
printf( "%d\n", j);}

int add(void) {
    int a,b;
   int a=13;
   auto int b=48;
return a+b;}