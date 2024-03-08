#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iSize = 0;
    int arr[2];
    int i = 0;
    int j = 0,k =0;
    int *ptr = NULL;
    int Nsize = 0;


    printf("Enter the array elements:\n");
    for(i = 0;i < 2;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array Elements:\n");
    for(i = 0;i<2;i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("Enter the array size you want i.e number of integers:\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the array elements from first:\n");
    for(i = 0;i < iSize;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array Elements:\n");
    for(i = 0;i < iSize;i++)
    {
        printf("%d\n",arr[i]);
    }

    printf("Size of array:%d\n",(iSize*4));

    printf("Enter the size you want to incease:\n");
    scanf("%d",&Nsize);

    ptr = (int*)realloc(ptr,Nsize);

    printf("Enter the array elements:\n");
    for(i = 0;i<Nsize;i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("Array Elements are:\n");
    for(i = 0;i<Nsize;i++)
    {
        printf("%d\n",arr[i]);
    }

    free(ptr);

    return 0;
}