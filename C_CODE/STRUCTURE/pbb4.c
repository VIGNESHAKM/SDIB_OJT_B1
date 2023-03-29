#include<stdio.h>
int main()
{
    struct value 
    {
        int bit1_1;
        int bit3_2;
        int bit4_3;
        int bit4_4;
    }
    bit;
    printf("%ld\n",sizeof(bit));
    return 0;

    }
