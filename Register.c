#include<stdio.h>

void Display()
{
register int no =11;   
register int i;
register int j = 21;

printf("Value of no : %d\n",no);
printf("Value of i is :%d\n",i);

}

int main()
{
    Display();

    //printf("%d",no);   

    return 0;
}