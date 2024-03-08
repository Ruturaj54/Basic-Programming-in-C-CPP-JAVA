#include<stdio.h>
#include<fcntl.h>  //file control
#include<unistd.h> //universal standards
#include<string.h>

int main()
{
    int fd = 0; //file Descriptor
    char Arr[] = "Marvellous Infosystem";
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd != -1)
    {
        printf("File is Successfully Opened with FD : %d\n",fd);
    }

    Ret = write(fd,Arr,21);  //(Kashat Lihayecha,Kay Lihaycha,Kiti Lihayecha)

    //strlen(Arr); can be used at place of 21 in write function 3rd parameter

    printf("%d Bytes get Written in file\n",Ret);

    close(fd);

    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR   : Read + Write