#include <stdio.h>

int main()
{
    int a = 10, b = 20;
    int const *const ptr;    
    ptr = &a;    // This is not allowed
    printf("%d", *ptr);
    return 0;
}