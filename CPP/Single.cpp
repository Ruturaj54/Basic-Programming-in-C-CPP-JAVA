#include<iostream>
using namespace std;

class Demo
{
    public:
        int x,y;

        Demo()
        {
            cout<<"Inside Demo Constructor\n";
            x = 10;
            y = 20;
        }

        ~Demo()
        {
            cout<<"Inside Demo Destructor\n";
        }

        void Fun()
        {
            cout<<"Inside fun of Demo class\n";
        }
};

//class Hello extends Demo
class Hello:public Demo
{   
    public:
        int a,b,c;
        Hello()
        {
            cout<<"Inside Hello Constructor\n";
            a = 30;
            b = 40;
            c = 50;
        }

        ~Hello()
        {
            cout<<"Inside Hello Destructor\n";
        }

        void gun()
        {
            cout<<"Inside gun of Hello\n";
        }

};

int main()
{
    Hello hobj;
    cout<<sizeof(hobj)<<"Bytes:\n";  //20Bytes

    cout<<hobj.x<<"\n";
    cout<<hobj.y<<"\n";
    cout<<hobj.a<<"\n";
    cout<<hobj.b<<"\n";
    cout<<hobj.c<<"\n";

    hobj.Fun();
    hobj.gun();


    return 0;
}