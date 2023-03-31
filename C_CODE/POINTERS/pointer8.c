#include<stdio.h>
int main()
{
int i,*p; 
    
    int a[] = {1, 2, 3, 4, 5};    
    p=a;
    *p=50;
     {     
        printf("\n %d ", p);   
        printf("\n %d ",++p);   
        printf("\n %d ", p );    
printf("\n %d ", *p );    

}
}