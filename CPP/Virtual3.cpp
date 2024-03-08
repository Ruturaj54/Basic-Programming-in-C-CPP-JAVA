#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

    void fun()
    {
        cout<<"Inside Base Fun\n";
    }
    void Gun()
    {cout<<"Inside base gun\n";}

    void Sun()
    {
        cout<<"Inside Base sun\n";
    }
    void Run()
    {
        cout<<"Inside Base Run\n";
    }
};

class Derived : public Base
{
    public:
        int a,b;

   void Gun()
   {
    cout<<"Inside Derived gun\n";
   }
   void Run()
   {
    cout<<"Inside Derived Run\n";
   }
};
int main()
{
    Base *bp = new Derived;//upcasting

    bp->fun();
    bp->Gun();
    bp->Run();
    bp->Sun();
    
    return 0;
}