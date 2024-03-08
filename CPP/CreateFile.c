#include<stdio.h>
#include<fcntl.h>  //file control
#include<unistd.h> //universal standards

int main()
{
    int fd = 0; //file Descriptor

    fd = creat("Marvellous.txt",0777);

    if(fd != -1)
    {
        printf("File is Successfully created with FD : %d\n",fd);
    }


    return 0;
}