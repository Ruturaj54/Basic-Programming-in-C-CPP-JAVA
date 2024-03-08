#include<stdio.h>
#include<fcntl.h>  //file control
#include<unistd.h> //universal standards
#include<string.h>

int main()
{
    unlink("Marvellous.txt");

    printf("File deleted sucessfully");

    return 0;
}

//O_RDONLY : Read
//O_WRONLY : Write
//O_RDWR   : Read + Write