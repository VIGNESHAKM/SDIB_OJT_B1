#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[20],ch; 
     FILE *fp; 
    printf("Enter file name to create :");
    scanf("%[^\n]",name);
 
    fp=fopen(name,"w+");
    printf("value of the fp is:%d",fp);
    if(fp==NULL)
    {
        printf("\n file to create a file \n",name);
        exit(1);
    }
    printf("\n data in %s  file \n",name);
    while((ch=getc(fp))!=EOF)
    putc(ch,fp);
    fseek(fp,10,SEEK_SET);
    printf("\n \n data in file\n");
    while((ch=getc(fp))!=EOF)
    putchar(ch);

    fclose(fp);
    return 0;
}