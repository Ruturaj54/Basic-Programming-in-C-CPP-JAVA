#include<stdio.h>

int main()
{
    char Arr[20];

    printf("Enter your name:\n");
    scanf("%[^'\n]s",Arr);   //^ is not \n means enter

    printf("Your name is : %s\n",Arr);
    
    return 0;
}