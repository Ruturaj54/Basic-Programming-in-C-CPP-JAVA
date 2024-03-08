#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

    virtual void fun() //1000
    {
        cout<<"Inside Base Fun\n";
    }
    virtual void Gun() //2000
    {cout<<"Inside base gun\n";}

    void Sun() //3000
    {
        cout<<"Inside Base sun\n";
    }
    void Run() //4000
    {
        cout<<"Inside Base Run\n";
    }
};

class Derived : public Base
{
    public:
        int a,b;

   virtual void Gun()  //5000
   {
    cout<<"Inside Derived gun\n";
   }
   void Run()   //6000
   {
    cout<<"Inside Derived Run\n";
   }
   virtual void Mun() //7000
   {
    cout<<"Inside Derived Mun\n";
   }
};
int main()
{
    cout<<sizeof(Base)<<"\n";
    cout<<sizeof(Derived)<<"\n";

    Base *bp = new Derived;//upcasting

    bp->fun();
    bp->Gun();
    bp->Run();
    bp->Sun();
    
    return 0;
}