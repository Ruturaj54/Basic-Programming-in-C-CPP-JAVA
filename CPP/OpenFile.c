#include<stdio.h>
#include<fcntl.h>  //file control
#include<unistd.h> //universal standards

int main()
{
    int fd = 0; //file Descriptor

    fd = open("Marvellous.txt",O_RDWR);

    if(fd != -1)
    {
        printf("File is Successfully Opened with FD : %d\n",fd);
    }

    close(fd);

    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR   : Read + Write