#include<stdio.h>
#include<sdlib.h>
int main()
{
    int*numbers=(int*)calloc(4,sizeof(int));
    numbers[0]=9;
    free(numbers);
    printf("\n stored")
}