#include<stdio.h>
#include<fcntl.h>  //file control
#include<unistd.h> //universal standards
#include<string.h>

int main()
{
    int fd = 0; //file Descriptor
    char Arr[20];
    int Ret = 0;

    fd = open("Marvellous.txt",O_RDWR);

    if(fd != -1)
    {
        printf("File is Successfully Opened with FD : %d\n",fd);
    }

    Ret = read(fd,Arr,10);  //(Kashahatun wachaycha,Kashat wachaicha,Kiti Wachaicha)

    //strlen(Arr); can be used at place of 21 in write function 3rd parameter

    printf("%d Bytes get Read from the file\n",Ret);

    printf("Data is : %s\n",Arr);

    close(fd);

    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR   : Read + Write