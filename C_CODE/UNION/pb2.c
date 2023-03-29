#include<stdio.h>
int main(){

union job
{
   
    float salary;
    int workerno;
}j;
j.salary=12.3;
j.workerno=100;

    printf("salary=%1f\n",j.salary);
    printf("number of workers=%d\n",j.workerno);
    return 0;

}
