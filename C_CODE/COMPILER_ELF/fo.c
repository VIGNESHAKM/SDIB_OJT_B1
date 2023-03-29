#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h> 
#include<sys/stat.h>   
#include<stdlib.h>

int main()
{   
    int fd;
    fd=open("hello txt",O_WRONLY ,O_EXCL,O_CREAT);
    if(fd== -1)
    {
    printf("file to create file");     
   exit(1);
}
printf("file creted sucessfully");
}

