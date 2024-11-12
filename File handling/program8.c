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

    fd = open(filename,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open");
        return 0;
    }

    printf("Enter the data u want add in file:");
    scanf(" %[^'\n']s",Arr);

    int iRet = write(fd,Arr,strlen(Arr));

    printf("Number of bytes added:%d",iRet);
    return 0;
}