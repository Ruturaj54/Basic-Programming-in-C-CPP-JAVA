//it is a header file which has the input output functions like printf and scanf
#include<stdio.h>

int Addition(int No1,int No2)
{
    int Sum = 0;
    Sum = No1 + No2;
    return Sum;
}
//entry point function for execution
int main()
{
    int value1=10;
    int value2=20;
    int Ans=0;

    Ans = Addition(value1,value2);

    printf("Addition is : %d\n",Ans);

    int Value3 = 50;
    int Value4 = 50;
    int Answer=0;

    Ans = Addition(Value3,Value4);

    printf("Addition is : %d\n",Ans);

    Ans = Addition(value1,Value4);

    printf("Addition is : %d",Ans);

    return 0;//to return 0 to os indicates that sucess
}
