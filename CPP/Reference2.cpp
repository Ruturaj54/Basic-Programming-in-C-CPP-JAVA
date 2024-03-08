#include<iostream>
using namespace std;

int main()
{

    int arr[4] = {10,20,30,40};
    int (&Brr) [4] = arr;

    cout<<arr[0]<<"\n";
    cout<<Brr[0]<<"\n";
    
    return 0;
}