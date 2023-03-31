#include <stdio.h>
int sumseries(int);
 intmain()
{
int number,sum;
printf("\n Enter the value:  ");
scanf("%d", &number);
sum = sumseries(number);
printf("\n Sum of the above series = %d ", sum);
}
 int sumseries(int m)
{
int sum2 = 0, f = 1, i;
for (i = 1; i <= m; i++)
{
f = f * i;
sum2 = sum2 +(i / f);
}
return(sum2);
}