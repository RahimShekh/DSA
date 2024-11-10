#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd = 0;

    char Filename[40];

    printf("Enter the file name:");
    scanf("%s",Filename);

    fd = creat(Filename,0777);

    if(fd == -1)
    {
        printf("Unable to create file");
    } 
    else
    {
        printf("file succesfully created:%d",fd);
    }

    return 0;
}