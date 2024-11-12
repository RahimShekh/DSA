#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>
#include<string.h>

int main()
{   
    int fd = 0;
    char FileName[30];
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter the file name that you want to open : \n");
    scanf("%s",FileName);

    fd = open(FileName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return 0;
    }

   while(iRet = read(fd,Arr,sizeof(Arr)) != 0)
   {
        printf("%s",Arr);
   }
    close(fd);

    return 0;
}