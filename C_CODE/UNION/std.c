#include <stdio.h>
union student
{
    char name[50];
    int id;
    int age[50];
};
 
int main( )
{
    union student stu;
    printf("\nEnter the name of the student: ");
    scanf("%s", &stu.name);
    printf("Enter the id of student: ");
    scanf("%ld", &stu.id);
    printf("Enter the age of the student: ");
    scanf("%s", &stu.age);
    
     
    printf("The name of the student entered is %s\n", stu.name);
    printf("The id of the student entered is %d\n", stu.id);
    printf("The age of the student entered is %s\n", stu.age);
     
    return 0;
}