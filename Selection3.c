#include<stdio.h>

int main()
{
    int Standard=0;

    printf("Primary school protal..\n");

    printf("Enter the division :\n");
    scanf("%d",&Standard);

    switch(Standard)
    {
        case 1:
            printf("Your exam is at 1 pm");
            break;
        case 2:
            printf("Your exam is at 2 pm");
            break; 
        case 3:
            printf("Your exam is at 3 pm");
            break;
        case 4:
             printf("Your exam is at 4 pm");
             break;  
        default:
            printf("Please enter valid standard");
            break;                
    }

  
    return 0;
}
