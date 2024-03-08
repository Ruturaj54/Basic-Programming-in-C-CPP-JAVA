#include<stdio.h>

int Odd(int No1)
{
    int ans=0;
    ans=No1 % 2;
    return ans;
}

int main()
{
    int Value1=0,rel=0;
    printf("Enter the one number...\n");
    scanf("%d",&Value1);
    rel=Odd(Value1);
    
    if(rel==0)
    {
        printf("Your entered number is EVEN:-%d",Value1);
    }
    else
    {
        printf("Your entered number is odd:-%d",Value1);
    }
    return 0;
}