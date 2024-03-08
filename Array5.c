#include<stdio.h>

int main()
{
    int Arr[3] [4] = {1,2,3,4,5,6,7,8,9,10,11,12};//member initialization by list
    Arr[0] [0] = 1;
    Arr[0] [1] = 2;
    Arr[0] [1] = 2;
    printf("%d",Arr[3-1]);


    return 0;
}