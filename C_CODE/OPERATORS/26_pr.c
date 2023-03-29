#include <stdio.h>
int main()
{
	int var;
	var=- -10;
	printf("value of var= %d\n",var);
	var=+ +10;
	printf("value of var= %d\n",var);
	return 0;
}
// here uniary adn mins.op are negative so according to mahths rule
// --=+ , ++=+ so   - -10 = 10 , + +10 = 10;
// so ans is 10 ,10