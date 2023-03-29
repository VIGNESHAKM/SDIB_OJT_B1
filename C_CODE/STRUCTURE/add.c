#include<stdio.h>
struct add;
{
    int a;
    int b;
     int *result;
}val;
int add(int a,int b,int result);
int main()
{
    int a,b;
    
     printf("enter the value of a is");
     scanf("%d",&val.a);
    
     printf("enter the value of b is");
     scanf("%d",&val.b);
     val.result=add(val.a,val.b);
     printf("%d",val.result);

}
