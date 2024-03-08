#include<iostream>
using namespace std;

class Demo
{

    public:

    int i;
    int j;

    Demo() //Default Constructor
    {
        i = 0;
        j = 0;
        cout<<"Inside default constructor\n";
    }

    Demo(int A,int B)  //Parametrised constructor
    {

        cout<<"Inside Parametrised constructor\n";
        i = A;
        j = B;
    }

    Demo(Demo &ref)  //Copy constructor
    {
        i = ref.i;
        j = ref.j;
        cout<<"Inside copy constructor\n";
    }

    ~Demo()
    {
        cout<<"Inside destructor\n";
    }
};

int main()
{
    Demo obj1;
    Demo obj2(11,21);
    Demo obj3(obj2);
    
    return 0;
}