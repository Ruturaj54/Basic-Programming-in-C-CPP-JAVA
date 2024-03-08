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
class Hello
{   
    public:
        int a,b;
        Hello()
        {
            cout<<"Inside Hello Constructor\n";
            a = 30;
            b = 40;
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

class Marvellous : public Demo,public Hello
//class Marvellous : public Hello,public Demo
{
    public:
        int p;

        Marvellous()
        {
            cout<<"Inside marvellous constructor \n";
            p = 50;
        }
        ~Marvellous()
        {
            cout<<"Inside Destructor of Marvellous\n";
        }

        void Sun()
        {
            cout<<"Inside sun Of marvellous\n";
        }
};

int main()
{
    Marvellous mobj;
    cout<<sizeof(mobj)<<"Bytes:\n";  //20Bytes

    cout<<mobj.x<<"\n";
    cout<<mobj.y<<"\n";
    cout<<mobj.a<<"\n";
    cout<<mobj.b<<"\n";
    cout<<mobj.p<<"\n";

    mobj.Fun();
    mobj.gun();
    mobj.Sun();


    return 0;
}