#include<iostream>
using namespace std;

int main()
{
    int i = 10;
    const int j = 20;
   // const int k; Not allowed

   
    i++;   //Allowed
    j++;   //not Allowed

    return 0;
}