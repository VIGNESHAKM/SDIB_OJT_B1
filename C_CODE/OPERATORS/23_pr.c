#include <stdio.h>
void main()
{   
	const char var='A';
	++var;
	printf("%c",var);
}
 //operator works on variables only, we can not change the value of a const