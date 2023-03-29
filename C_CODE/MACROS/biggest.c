#include <stdio.h>

#define BIG(x,y) ((x>y)?x:y)

int main()
{
	int a,b,BIG;
    char Y='F',Z='S';
	
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);	
 
	
	BIG=BIG(a,b);
	printf("Maximum number is: %d\n",BIG);
	
	return 0;
}