#include<stdio.h>
int main(int argc, char*argv[])
{
int i;
{
    printf("\n %s",argv[0]);
    printf("\n %d ",argc);
    for(i=0;i<argc;i++)
    printf("%c",argv[i]);

}
}