#include<stdio.h>
int main()
{
    int arr[],i;
    printf("Enter the number of elements to be entered :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    printf("%d\n",arr[i]);
}