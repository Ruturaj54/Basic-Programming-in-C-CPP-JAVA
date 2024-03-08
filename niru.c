#include<stdio.h>

int main()
{
    int i,j,a,sum=0;
    printf("enter the number");
    scanf("%d",&a);

    for(i=a;i<=0;i--)
    {
       printf("%d",i);
       sum=sum+i;
    
    }
    printf("%d",sum);
    return 0;
}