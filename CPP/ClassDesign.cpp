#include<iostream>
using namespace std;

class Array
{
    private:
        int *Arr;
        int iLength;

    public:
        Array(int Size)
        {
            iLength = Size;
            Arr = new int[iLength];   
        }
        
        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            int iCnt = 0;
            cout<<"Enter the Elements:"<<"\n";
            for(iCnt = 0;iCnt < iLength;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;
            cout<<"Array Elements are:"<<"\n";
            for(iCnt = 0;iCnt < iLength;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
        }
};
int main()
{
    Array aobj(5);
    aobj.Accept();
    aobj.Display();

    return 0;
}