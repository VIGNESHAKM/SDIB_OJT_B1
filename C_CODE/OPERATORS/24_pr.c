#include <stdio.h>
void main()
{   
	int x=10;
	x+=(x++)+(++x)+x;
	printf("%d",x);
}  
// frist we will expand  the expression 
// x = X+{(X++)+(++X)+X}
// x = 10 + 12  + 11  +12 = 45 