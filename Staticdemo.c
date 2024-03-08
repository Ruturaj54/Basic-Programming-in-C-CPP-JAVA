#include<stdio.h>

void Func()
{
    auto int i = 10;
    i++;
    printf("value of i:%d\n",i);
}

int main()
{
    int no = 51;
    Func();
    Func();
    Func();

    return 0;
}