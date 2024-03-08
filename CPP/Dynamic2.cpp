#include<iostream>
#include<stdlib.h>
using namespace std;

class Demo
{
    public:

        int i,j,k;

        Demo()
        {
            cout<<"Inside constructor\n";
        }
        ~Demo()
        {
            cout<<"Inside Destructor\n";
        }
        void Display()
        {
            cout<<"Inside Display\n";
        }

};

int main()
{
    Demo obj1;
    obj1.Display();

    Demo *ptr = new Demo;
    //Demo *ptr = (Demo *)malloc(sizeof(Demo));

    ptr->Display();

    delete ptr;
    //free(ptr)

    Demo *ptr2 = new Demo;A

    return 0;
}