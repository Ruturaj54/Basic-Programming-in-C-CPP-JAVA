#include<stdio.h>

int main()
{
    int Standard=0;

    printf("Primary school protal..\n");

    printf("Enter the division :\n");
    scanf("%d",&Standard);

    if(Standard==1)
    {
        printf("Your exam is at 1pm");
    }
    else if(Standard==2)
    {
        printf("Your exam is at 2pm");

    }
    else if(Standard==3)
    {
        printf("Your exam is at 3pm");
    }
    else if(Standard==4)
    {
        printf("Your exam is at 4pm");
    }
    else
    {
        printf("Please select valid standard");
    }
    return 0;
}