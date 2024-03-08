#include<iostream>
#include<stdlib.h>
using namesoace std;

int main()
{
    int Arr[5];
    int *ptr1 = (int *)malloc(5 * sizeof(int));//Dynamic in cS

    int *ptr2 = new int[5]; //Dynamic in c++

    free(ptr1);  //c

    delete ptr2[];  //c++


    return 0;
}