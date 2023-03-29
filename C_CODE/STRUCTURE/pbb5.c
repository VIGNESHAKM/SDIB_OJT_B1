#include<stdio.h>
int main()
{
    struct value 
    {
        int bit_1:16;
        int bit_2:10;
        int bit_3:6;
        int bit_4:1;
    }
    bit;
    printf("%ld\n",sizeof(bit));
    return 0;

    }
