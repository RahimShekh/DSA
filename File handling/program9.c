#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>

int main()
{
    int fd = 0;
    char filename[30];
    char Arr[100];

    printf("Enter the file name to open:");
    scanf("%s",filename);

    fd = open(filename,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open");
        return 0;
    }


    int iRet = read(fd,Arr,5);

    printf("Number of bytes readed:%s",Arr);
    return 0;
}