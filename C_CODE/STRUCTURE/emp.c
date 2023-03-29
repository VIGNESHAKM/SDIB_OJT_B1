#include<stdio.h>
struct emp
{
    char *name;
    int id;
    float salary;
    char *desgination;
}emp;
int main()
{
    
    emp.name="Elumalai";
    emp.id=25;
    emp.salary=30000.500;
    emp.desgination= "Engineer";
 
    printf("\nName        : %s",emp.name);
    printf("\nid        : %d",emp.id);
    printf("\nsalary     : %f",emp.salary);
    printf("\ndesgination    : %s",emp.desgination);
   printf("\nSize of Struct : %d",sizeof(emp));
    return 0;
}