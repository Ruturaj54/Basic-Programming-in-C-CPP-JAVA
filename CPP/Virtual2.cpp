
#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

    void Gun()
    {
        cout<<"Inside base gun\n";
    }


};

class Derived : public Base
{
    public:
        int a,b;

    void fun()
    {
        cout<<"Inside derived fun \n";
    }
};
int main()
{
    Base *bp1 = new Base; //Nocasting
    Derived *dp1 = new Derived; //Nocasting

    Base *bp2 = new Derived;//upcasting
    //Derived * dp2 = new Base; //downcasting
    return 0;
}