#include<stdio.h>
struct course
{
    int courseno;
    char courseno;
    char courename[25];
};
int main()
{
    struct course c[]={102,"java"};
    {103, "PHP"},
    {104,"DotNet"} };
    printf("%d",c[1].courseno);
    printf("%s\n",(*(c+2)).coursename);
    return 0;
    }
