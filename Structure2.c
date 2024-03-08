#include<stdio.h>

struct Demo
{
    int i;
    float f;
};

int main()
{

    struct Demo Arry[3];

    Arry[0].i = 10;
    Arry[0].f = 10.5;

    return 0;
}