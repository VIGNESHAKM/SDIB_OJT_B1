#include<stdio.h>
int main()
{
int a , b ;
printf(" enter the no a and b ");
scanf("%d %d ", &a, &b);
  if(a && b){
  printf("frist statement of  lines is true \n");
  }
  else
  {
    printf(" sry frist line   statement is  flase\n");
  }
  if(a || b)
  {
    printf("secind line statement is true \n");
  }
  else{
    printf("sry second line its false\n");
  }

if(!(a && b))
{
    printf(" third lie statement is true \n");
}
else 
{
    printf(" third line is faluse ");
}
return 0;

}