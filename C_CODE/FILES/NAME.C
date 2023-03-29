#include<stdio.h>    
int main()
{    
    FILE *opening;
    opening = fopen("hello.usr","R+");
    fprintf(opening,"VIGNESH");     
    fclose(opening);
    printf("Writing to the file was successful.\n");
    printf("Closing the program");
    return 0;}