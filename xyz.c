#include<stdio.h>
#include<stdlib.h>

int main()
{
    int arr[3];
    int i = 0;
    int *ptr = NULL;
    int iSize = 0;

    printf("Enter the arry elements\n");
    for(int i =0;i < 3;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j = 0;j < 3;j++)
    {
        printf("%d",arr[j]);
    }

    printf("Enter the size of array i.e how many integer elments to stored:\n");

    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the arry elements\n");
    for(i =0;i < iSize;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Array has these elemnts\n");
    for(i = 0;i < iSize;i++)
    {
        printf("%d\n",arr[i]);
    }
    
    free(ptr);

    
    return 0;
}