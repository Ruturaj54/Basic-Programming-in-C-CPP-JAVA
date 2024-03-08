//Header file for printf & scanf function
#include<stdio.h>

void Display()
{
   printf("OM NAMAH SHIVAY...\n");

}
// Entry point function from where execution starts
int main()
{
    int value1=10;
    int value2=11;
    int ans=0;

    ans=value1+value2;
    printf("from main= %d \n",ans);
    
    Display();

    return 0; //return 0 means the we indicate to O/s that the sucess
}