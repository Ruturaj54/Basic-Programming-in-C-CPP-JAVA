
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
    Base bobj;
    Derived dobj;


    cout<<sizeof(bobj)<<"\n";
    cout<<sizeof(dobj)<<"\n";

    bobj.Gun();
    dobj.fun();
    return 0;
}