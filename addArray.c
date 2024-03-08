#include<stdio.h>

int Addition(int No1)
{
    int Sum = 0, i ;
    //int No1 = 0;
    int Drry[No1];

    printf("Enter the Elements to add:");
    for(i=0;i<=No1;i++)
    {
        scanf("%d",Drry[i]);
        Sum = Sum + Drry[i];   
    }

    return Sum;
}

int main()
{
    int num=0;
   
    int Ans = 0;

    printf("Enter the number of elements you want to add:\n");
    scanf("%d",&num);
   Ans = Addition(num);

    printf("ADDITION IS :%d\n",Ans);

    return 0;
   

}