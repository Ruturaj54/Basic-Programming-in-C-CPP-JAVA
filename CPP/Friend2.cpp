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

    friend void Display();
    
};

void Display()
{
    Demo obj;
    cout<<"Value of i:"<<obj.i<<"\n";
    cout<<"Value of j:"<<obj.j<<"\n";
    cout<<"Value of k:"<<obj.k<<"\n";
}

int main()
{
    Display();

    return 0;
}