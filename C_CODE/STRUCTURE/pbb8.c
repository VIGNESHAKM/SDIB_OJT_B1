#include<stdio.h>
int main()
{
    struct bitfields
    {
        int bits_1:2;
        int bits_2:9;
        int bits_3:6;
        int bits_4:1;
    }
    bit;
    printf("%ld\n",sizeof(bit));
    return 0;

    }