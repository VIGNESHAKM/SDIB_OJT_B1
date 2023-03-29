#include <stdio.h>
int main()
{
    int x,y;
    
    x=(100,200);
    y=100,200;
    
    printf("x=%d,y=%d",x,y);

    return 0;
} // x = 200 bcs is it  in brecket and in brecket  value assigen 
//left to right and y = 100 bcs its  in = so directly asssign next value 
