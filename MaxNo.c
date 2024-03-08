#include<stdio.h>


int Max(int No1, int No2)
{
    int Result = 0;
    
    if(No1 > No2)
    {
        Result = 1;
    }
    else if(No1 < No2)
    {
        Result = 0;
    }
    else if(No1 == No2)
    {
        Result = -1;
    }
    else
    {
        printf("Enter the proper value:..\n");
    }
    return Result;
}

int main()
{
    int Value1 = 0;
    int Value2 = 0;
    int Ans = 0;

    printf("Enter the 1st number\n");
    scanf("%d",&Value1);

    printf("Enter the 2nd Number\n");
    scanf("%d",&Value2);

    Ans = Max(Value1,Value2);

    if(Ans == 1)
    {
        printf("Value1 is Greater: %d\n",Value1);
    }
    else if(Ans == 0)
    {
        printf("Value2 is Greater: %d\n",Value2);
    }
    else if(Ans == -1)
    {
        printf("Both values are Same:%d = %d\n",Value1,Value2);
    }
    else
    {
        printf("Please enter the Numeric values properly.....\n");
    }

    return 0;
}