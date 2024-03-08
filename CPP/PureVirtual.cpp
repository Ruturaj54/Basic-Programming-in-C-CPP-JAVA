#include<iostream>
using namespace std;

class Base
{
    public:
        int i,j,k;

        void Fun()              //Concrete method
        {
            cout<<"Base fun..\n";
        }
        virtual void Gun()         //concrete method
        {
            cout<<"Inside Base Gun...\n";

        }

        virtual int Addition(int no1,int no2) = 0;  //abstract method

};
class Derived : public Base
{
    public:
        int a,b;
        void Gun()        //concrete method and it is virtual i.e overriding done
        {
            cout<<"Inside derived gun..\n";
        }
    virtual void sun()
    {

        cout<<"Derived sun..\n";
    }
    virtual int Addition(int no1,int no2) //concrete method
    {
        return no1 + no2;
    }
};

int main()
{
    //Base bobj; error because object is incomplete as addition is empty here
    Base *bp = new Derived;
    bp -> Fun();
    bp -> Gun();

    int Ret = 0;
    Ret = bp->Addition(10,11);
    cout<<"Addition is :"<<Ret<<"\n";


    return 0;
}