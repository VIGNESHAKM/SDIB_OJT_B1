#include <stdio.h>
union unionstudent
{

   char name[32];
   int age;
   int id;
} ustudent;

int main()
{
   printf("size of union = %d bytes", sizeof(ustudent));

   return 0;
}