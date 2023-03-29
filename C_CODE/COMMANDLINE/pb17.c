#include<stdio.h>
enum Xenum{
    C,CPP,Java
};
int main()
{
    enum Xenum var;
    printf("%d",sizeof(var));
    return 0;
}
