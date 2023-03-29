#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
main()
{
    int fd;
    fd=open("read.txt",O_WRONLY);
    if(fd<0)
{
    perror("pipe error");
    exit(1);
}
write(fd,"hello world",10);
}
