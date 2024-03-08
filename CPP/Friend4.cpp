#include<iostream>
using namespace std;

class Hello
{
    public:
        void fun();
        void gun();
};
class Demo
{
    public: int i;
    private: int j;
    protected: int k;

    public:
    Demo()
    {
        i = 10;
        j = 20;
        k = 30;
    }
   friend class Hello; 
};

//Return_value Class_name :: Function_name()
void Hello::fun()
{
    Demo obj1;
    cout<<"Value of i:"<<obj1.i<<"\n";
    cout<<"Value of j:"<<obj1.i<<"\n";
    cout<<"Value of k:"<<obj1.i<<"\n";

}
void Hello::gun()
{
    Demo obj1;
    cout<<"Value of i:"<<obj1.i<<"\n";
    cout<<"Value of j:"<<obj1.i<<"\n";
    cout<<"Value of k:"<<obj1.i<<"\n";

}
int main()
{
    Hello hobj;
    hobj.fun();
    hobj.gun();

    return 0;
}