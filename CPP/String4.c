#include<stdio.h>

int CalculateLength(char *Str)
{
    int iCnt = 0;

    while(*Str != '\0')
    {
        iCnt++;
        Str++;
    }
    return iCnt;

}

int main()
{
    char Arr[40];
    int iRet = 0;

    printf("Enter your name:\n");
    scanf("%[^'\n]s",Arr);   //^ is not \n means enter

    printf("Your name is : %s\n",Arr);

    iRet = CalculateLength(Arr);

    printf("Length of String is: %d\n",iRet);

    
    
    return 0;
}