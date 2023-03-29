#include<stdio.h>
struct student;
{
    int id;
    char name[10];
    float height;
    struct marks;
}s;
int main()
{
    struct marks;
    {
        int maths;
        int physics;
        int chemestry;
    }
    s.id=16;
    s.name="vignesh";
    s.height=157.5;
    printf("\n id: %d",s.id);
    printf("\n name: %s",s.name);
    printf("\n height: %f",s.height);

    }
