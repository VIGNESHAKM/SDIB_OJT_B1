#include<stdio.h>
int main()
{
    int x ,y;
    printf("enter any two no");
    scanf("%d %d ",&x , &y);

    printf(" your  add is %d\n",x+y);
    printf("your multi is %d \n", x*y);
    printf(" your  sub is %d\n",x-y);
    printf("your div is %d\n",x/y);
    printf(" AND is %d\n", x&&y);
    printf(" or operstion is %d\n", x || y);
    printf("not operation is %d\n",!(x&&y));
    return 0;
}



