#include <stdio.h>
struct student
{
    char name[10];
    int id;
    float marks;
}s;
int main()
{
    struct student s;
    
 s.char "vignesh";
 s.int 16;
 s.float 58.2;

    printf("Enter name: ");
   scanf("%d", &s.name);
    printf("Enter id number: ");
    scanf("%d", &s.id);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    return 0;
}