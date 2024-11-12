#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int fd = 0;
    char Filename[30];
    char Arr[30];

    printf("Enter the file name u want to open:");
    scanf("%s",Filename);

    fd = open(Filename,O_RDWR | O_APPEND);

    if(fd == -1)
    {
        printf("Unable to open");
        return 0;
    }

    printf("Enter the data u want to enter:");
    scanf(" %[^'\n']s",Arr);

    write(fd,Arr,strlen(Arr));

    return 0;
}