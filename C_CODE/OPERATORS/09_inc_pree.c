#include<stdio.h>
int main()
{
    float x ,y, z;
    x=3.4l;
    y = ++x;
    printf("%f %f\n",x,y);

    z = y;
    y= ++z;
    printf("%f %f\n",y,z);

    return 0;

}