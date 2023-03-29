#include<stdio.h>
int main()
{
    int a , b ,x;
    printf("enter two no. for perform assignment operator ");
    scanf("%d %d", &a,&b);
    x=(a+=b);
    printf("your+= valus is %d\n",x);
    x=(a-=b);
    printf("your -= value is %d\n",x);
    x=(a*=b);
    printf("your a*=b value  is %d\n",x);
    x=(a/=b);
    printf("your a/=b value is %d\n", x);

    return 0;


}