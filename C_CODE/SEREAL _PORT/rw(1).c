#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int fd, c, x;
    fd = open("COM1",O_RDONLY);
    printf("fd value is : %d\n",fd);
    if(fd==-1)
    {
        perror("Device not found");
        exit(1);
    }
    printf("\n file created successfully");
    c=write(fd,"Helloworld",10);
    printf("%d",c);
    close(fd);
    getchar();
    fd = open("COM1",O_RDONLY);
    printf("fd value is : %d\n",fd);
    if(fd==-1)
    {
        perror("Device not found");
        exit(1);
    }
    printf("\n file created successfully");
    c=read(fd,"Helloworld",10);
    printf("%d",c);
    close(fd);
    putchar(c);
}