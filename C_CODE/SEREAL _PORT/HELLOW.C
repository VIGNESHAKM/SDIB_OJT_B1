#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<windows.h>
int main()
{
    int fd,n,r;
    char *buff ="hello world";
    char buff[10];
    fd=open("/dev/ttyusb0",O_RDWR);
    printf("fd value is :%d\n",fd);
    if(fd ==-1)
    {
        perror("device not found");
        exit(1);
    }
    n=write(fd,"hello world",10);
    printf("\n file created succesfull");
    r=read(fd,buff,10);
    printf("buff bytes rea %d",r);
    printf("%s",buff);
}
    

