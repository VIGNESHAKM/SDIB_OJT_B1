#include<stdio.h>
  int main() 
    {
        float i=10.12;
        float*ptr;
        ptr = &i;
        printf("value of i:%d\n",i);
        printf("address of i:%d\n",&i);
        printf("value of *ptr%d\n",*ptr);
        printf("address of ptr:%d\n",ptr);
        printf("size of float :%d\n",sizeof(i));
         return 0;
         }                                              
   
