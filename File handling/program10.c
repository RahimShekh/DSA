#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char FileName[30];
    char Arr[100] = {'\0'}; //garbage
    int iRet = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

    iRet = read(fd,Arr,10);

    printf("Number of bytes succesfully read from the file : %d\n",iRet);
    printf("Data from file : %s\n",Arr);

    close(fd);

    return 0;
}