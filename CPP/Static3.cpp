#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
        int j;
        static int k;

    public:
        Demo(int a = 10,int b = 20)
        {
            i = a;
            j = b;
        }


        void Display()
        {
            cout<<"Value of static K:"<<Demo::k;
            cout<<"Inside non static method Display\n";
            cout<<"Value of i"<<i<<"\n";
            cout<<"Value of j"<<j<<"\n";
            cout<<"Value of k"<<k<<"\n";

        }

        static void Fun()
        {
            cout<<"Inside ststic method FUN\n";
            cout<<"value of k"<<k<<"\n";
        }

};

int Demo::k = 111;

int main()
{
    Demo::Fun();
    cout<<"Value of K is :"<<Demo::k<<"\n";

    Demo jobj;
    //jobj.Fun();
    Demo obj1(11,21);
    Demo obj2(51,101);
    Demo obj3(121,151);
    
    cout<<"Size of object is:"<<sizeof(obj1)<<"\n";
    obj1.Display();
    obj2.Display();
    obj3.Display();

    return 0;
}