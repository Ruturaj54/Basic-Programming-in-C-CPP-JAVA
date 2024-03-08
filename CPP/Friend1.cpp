#include<iostream>
using namespace std;

class Demo
{
    public:
        int i;
    private:
        int j;
    protected:
        int k;
    public:
        Demo()
        {
            i = 11;
            j = 21;
            k = 31;
        }
};

Void Display()
{
    Demo obj;
    cout<<"Value of i:"<<obj.i<<"\n";
    cout<<"Value of j:"<<obj.j<<"\n";//erroe
    cout<<"Value of k:"<<obj.k<<"\n";//error
}

int main()
{
    Display();


    return 0;
}