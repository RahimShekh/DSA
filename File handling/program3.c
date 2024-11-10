#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char filename[30];

    printf("Enter the file name to open:");
    scanf("%s",filename);

    fd = open(filename,O_RDWR);

    if(fd ==  -1)
    {
        printf("unable to open");
    }
    else
    {
        printf("Sucessfully opened with fd %d",fd);
    }
    return 0;
}