#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *ptr;
    int i,n;
    ptr=(int*)malloc(n*sizeof(int));
    
for(i=0;i<10;i++)
{
*ptr=ptr[i]+1;
}
printf("%d is the value",*ptr);
 return 0;
}