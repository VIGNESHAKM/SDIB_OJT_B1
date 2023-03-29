#include<stdio.h>
int main()
{
    struct c{
        double z;
        short int y;
        int x;
    };
    printf("size of struct :%ld\n",sizeof (struct c));
    return ;

    }
