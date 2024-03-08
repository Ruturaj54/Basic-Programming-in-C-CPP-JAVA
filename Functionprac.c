//WAP to make addition substraction multiplication
#include<stdio.h>

int Addition(int No1,int No2)
{
    int Sum = 0;
    Sum = No1+No2;
    return Sum;
}

int Substraction(int No1,int No2)
{
    int Sub = 0;
    Sub = No1-No2;
    return Sub;
}

int multiplication(int No1,int No2)
{
    int mul = 0;
    mul = No1*No2;
    return mul;
}

int main()
{
    int Value1 = 10;
    int Value2 = 20;
    int ans = 0;

    ans=Addition(Value1,Value2);
    printf("Addition=%d\n",ans);

    ans=Substraction(Value1,Value2);
    printf("Substraction is=%d\n",ans);

    ans=multiplication(Value1,Value2);
    printf("multiplication =%d\n",ans);

    return 0;
}
