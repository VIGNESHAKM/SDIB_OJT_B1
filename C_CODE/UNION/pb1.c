#include<stdio.h>
union unionjob
{
    char name[32];
    float salary;
    int workerno;
}
ujob;
struct structjob
{
    char name[32];
    float salary;
    int workerno;
}
sjob;
int main()
{
    printf("size of union =%ld bytes",sizeof(ujob));
    printf("\n size of structure=%ld bytes\n",sizeof(sjob));
    return 0;

}
