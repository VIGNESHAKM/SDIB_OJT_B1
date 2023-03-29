#include <stdio.h>
struct employee
{
    char    *name;
    int     id;
    float   salary;
    char    *designation;
    double salary;
 
int main()
{
     emp.name="vignesh";
    emp.id=16;
    emp.salary=10000.45;
    emp.designation="embedded engineer";
    emp.salary=20000.85;
 
      printf("\nName        : %s",emp.name);
    printf("\nid        : %d",emp.id);
    printf("\nsalary     : %f",emp.salary);
    printf("\ndesgination    : %s",emp.designation);
     printf("\n salary   : %s",emp.salary);
   printf("\nSize of Struct : %d",sizeof(emp));

printf("\nSize of char : %d",sizeof(char));
printf("\nSize of int : %d",sizeof(int));
printf("\nSize of float : %d",sizeof(float));
printf("\nSize of char : %d",sizeof(char));

 return 0;
   
}

