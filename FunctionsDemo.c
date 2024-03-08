#include <stdio.h>

int Addition(int No1,int No2)
{
    int result=0;
    result=No1+No2;
    return result;
}

int Multiplication(int No1,int No2)
{
    int result=0;
    result=No1*No2;
    return result;
}

int division(int No1,int No2)
{
    int result=0;
    result=No1/No2;
    return result;
}


int main()
{
    int Value1=0,Value2=0,ans=0;

    printf("enter the two numbers \n");
    scanf("%d%d",&Value1,&Value2);

    ans=Addition(Value1,Value2);
    printf("ADDITION IS :%d  \n",ans);

    ans=Multiplication(Value1,Value2);
    printf("Multiplication IS :%d\n",ans);

    ans=division(Value1,Value2);

    printf("DIVISION IS :%d  \n",ans);
   
    return 0;

}