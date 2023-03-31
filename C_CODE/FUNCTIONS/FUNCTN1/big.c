#include <stdio.h>  
   
int main() {  
    int a, b;  
   
     
    printf("Enter Two Integers\n");  
    scanf("%d %d", &a, &b);  
    
    if(a > b) {

        printf("%d is Largest\n", a);          
    } else if (b > a){ 

        printf("%d is Largest\n", b);  
    } else {
 printf("Both Equal\n");
    }
   
    return 0;  
} 