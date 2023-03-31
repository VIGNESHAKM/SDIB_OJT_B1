#include<stdio.h>
int main()
{
    struct c{
        int z;
        double y;
        short int x;
    };
    printf("size of struct :%d\n",sizeof(struct c));
    return 0;

    }
