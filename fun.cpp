#include<iostream>
using namespace std;

class base
{
    public:
        int i;
        void fun()
        {

        }

};
class Derived:public base{

    public:
        int i;

        void fun()
        {
            
        }
};
int main()
{
    base bobj;
    Derived dobj;

    printf("%d",sizeof(dobj));

    return 0;
}