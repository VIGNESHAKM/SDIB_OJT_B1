#include<stdio.h>
int main()
{
 
    FILE *fp;   
    char fName[20];
 
    printf("\nEnter file name to create :");
    scanf("%s",fName);

    if(fp==NULL)
    {
        printf("File does not created!!!");
        exit(0); 
    }
 
    printf("File created successfully.");

    putc('A',fp);
    putc('B',fp);
    putc('C',fp);
 
    printf("\nData written successfully.");
    fclose(fp);
 
    printf("Contents of file is :\n");
    printf("%c",getc(fp));
    
    fclose(fp);
    return 0;
}