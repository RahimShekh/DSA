#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
    int fd = 0;
    char filename[30];

    printf("Enter the file that u want to open:");
    scanf("%s",filename);

    fd = open(filename,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open");
    }

    write(fd,"Hello",5);
    return 0;
}