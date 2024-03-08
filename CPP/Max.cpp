#include<iostream>
using namespace std;

class Max
{
    public:
        int No1;
        int No2;

        Max(int Value1,int Value2)
        {
            No1 = Value1;
            No2 = Value2;
        }

        void Maximun()
        {
            if(No1 > No2)
            {
                cout<<"Value1 is Greater:"<<No1<<"\n";
            }
            else if(No1 < No2)
            {
                cout<<"Value2 is Greater:"<<No2<<"\n";
            }
            else if(No1 == No2)
            {
                cout<<"Both Values are same\n";
            }
            else
            {
                cout<<"Enter valid numbers";
            }
        
        }

};
int main()
{   
    int Value = 0;
    int Valuex = 0;
   
    cout<<"Enter the 1st Value:\n";
    cin>>Value;

    cout<<"Enter the 2nd Value:\n";
    cin>>Valuex;
    
    Max obj1(Value,Valuex);
    obj1.Maximun();
    

    return 0;
}