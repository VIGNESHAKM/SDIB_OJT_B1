#include<stdio.h>  
void main ()  
{  
    char s[30]; 
    char str[20];    
    printf("Enter the string? ");  
    gets(s);  
    printf("You entered %s",s); 

    fgets(str, 20, stdin);   
   printf("%s", str);   
}   