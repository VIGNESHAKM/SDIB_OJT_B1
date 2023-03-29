#include <stdio.h>       
#include <sys/types.h>       
#include <string.h> 
 
int main(){
    FILE *fp;                                
    fp = fopen("hello.txt","o_creat");
    if(fp==NULL){        
        perror(fp);  
        str error();                 
        printf("Value of errno: %d",errno);
        printf("\nError Message: %s",strerror(errno));
        perror("Message from perror");
    }
    else{
        int num;
        fscanf(fp,"%d",&num);             
        printf("File Data: %d",num);
        fclose(fp); 
    }
    return 0;
}