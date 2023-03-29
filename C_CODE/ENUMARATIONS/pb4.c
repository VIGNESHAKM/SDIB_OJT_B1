#include<stdio.h>
enum state{working=0,failed,freezes};
enum state currstate=2;
enum state findstate(){
    return currstate;
}
int main()
{
    (findstate()==working)?printf("working\n"):printf("not working\n");
    return 0;
}
