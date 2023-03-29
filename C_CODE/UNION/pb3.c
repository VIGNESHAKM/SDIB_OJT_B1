#include<stdio.h>
union test1 {
    int x;
    int y;
}
test1;
union test2;{
    int x;
    char y;
}
test2;
union test3;
{
    int arr[10];
    char y;
}
test3;
int main()
{
    printf("sizeof(test1)=%lu,sizeof(test2)=%lu,"
        "sizeof(test3)=%lu",
        sizeof(test1),
        sizeof(test2),sizeof(test3));
        return 0;
}