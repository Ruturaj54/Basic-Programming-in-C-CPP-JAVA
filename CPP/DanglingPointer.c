//Dangling pointer implementation

#include<stdio.h>
int *Dangling()
{
    int x = 16;
    return &x;
}

int main()
{

    int *ptr = Dangling();

    printf("Address is :%d",*ptr);

    return 0;
}