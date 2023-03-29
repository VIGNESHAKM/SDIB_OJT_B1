#include<stdio.h>
void disp();
int main()
{
    int a=10,b=10;
    printf("\n file in use:%s\n",__FILE__);
    printf("\n present line :%d\n",__LINE__);
    printf("\n present function :%s\n",__func__);

}
void disp()
{
printf("\n present function :%s",__FUNCTION__);
}
