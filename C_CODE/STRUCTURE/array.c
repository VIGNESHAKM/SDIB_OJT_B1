#include<stdio.h>
struct employ
{
    char *name;
    int id;
    float salary;
    char *desgination;
};
int main()
{
    struct employ emp[2];
    emp[0].name="vignesh";
    emp[0].id=25;
    emp[0].salary=30000.500;
    emp[0].desgination= "Engineer";
 
    emp[1].name="vignesh km";
    emp[1].id=26;
    emp[1].salary=30000.500;
    emp[1].desgination= "Engineer";
 
    printf("\nName        : %s",emp[0].name);
    printf("\nid        : %d",emp[0].id);
    printf("\nsalary     : %f",emp[0].salary);
    printf("\ndesgination    : %s",emp[0].desgination);
   

   printf("\nName        : %s",emp[1].name);
    printf("\nid        : %d",emp[1].id);
    printf("\nsalary     : %f",emp[1].salary);
    printf("\ndesgination    : %s",emp[1].desgination);
  
    return 0;
}