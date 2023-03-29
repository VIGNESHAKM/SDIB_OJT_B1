#include <stdio.h>

enum week {Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main()
{
   
    enum week day;
    day = Sunday;
    printf("Day %d",day+1);
    return 0;
}