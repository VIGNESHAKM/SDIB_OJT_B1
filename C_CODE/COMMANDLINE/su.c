#include<stdio.h>
int main(int argc, char *argv[])
{
    int sum=0,n,i;
    for(i=1;i<argc;i++)
sscanf(argv[i],"%d",&n);
sum=sum+n;

printf("%d",sum);


}