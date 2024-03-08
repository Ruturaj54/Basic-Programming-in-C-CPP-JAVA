#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5];   //static memory
    float fValue; //statiic memory
    double Brr[4]; //static memory

    int iSize = 0;
    int *ptr = NULL;

    printf("Enter the size of array");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));
    
    free(ptr);
   
    return 0;
}