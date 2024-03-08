//Accept the two values frrom user and perform addition of it

#include<iostream>
using namespace std;
class Demo
{   
    public:

        int Addition(int Value1,int Value2)
        {
            int Result = 0;
            Result = Value1 + Value2;
            return Result;
        }

        float Addition(float Value1,float Value2)
        {
            float Result = 0.0f;
            Result = Value1 + Value2;
            return Result;
        }

        float Addition(float Value1,int Value2)
        {
            float Result = 0.0f;
            Result = Value1 + Value2;
            return Result;
        }

        double Addition(double Value1,double Value2)
        {
            double Result = 0;
            Result = Value1 + Value2;
            return Result;
        }

         double Addition(double Value1,int Value2)
        {
            double Result = 0;
            Result = Value1 + Value2;
            return Result;
        }

         double Addition(double Value1,float Value2)
        {
            double Result = 0;
            Result = Value1 + Value2;
            return Result;
        }
    
};


int main()
{   
    Demo Obj1;
    int Num = 0;
    int No = 0;
    cout<<"*****RRD Technologies*****\n";
    cout<<"";
    cout<<"Enter the choice\n:";
    cout<<"1.(int,int)\n2.(float,float)\n3.(float,Int)\n4.(Double,Double)\n5.(double,Int)\n6.(Double,Float)\n";
    cin>>No;
    cout<<"Enter the Number How Many times to perform Addition";
    cin>>Num;
    
    switch(No)
    {   
        int Ans ;
        int No1 ;
        int No2 ;
        int P ;

          

        case 1:
            
                for(int i=0;i<Num;i++)
                {
                    cout<<"Enter the 1st Number:\n";
                    cin>>No1;
                    cout<<"Enter 2nd Number:\n";
                    cin>>No2;
                    Ans = Obj1.Addition(No1,No2);
                    cout<<"Addition of Entry No:"<<P;
                    cout<<" is:\n"<<Ans;
                    P++;
                }
            break;

        default :
                    cout<<"Enter valid Choice.....\n";
                
    }
    return 0;
}