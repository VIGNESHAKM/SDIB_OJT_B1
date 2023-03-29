#include<stdio.h>
void dispaly(int n)
{
    if(n<1)
    return;

else {
    printf("%d",n);
    dispaly(n-1)
    printf("%d",n);
}
}
int main()
{
    int n=3;
    dispaly(n);
    return 0;

}
