#include<stdio.h>
#pragma pack(1)  //packing is done by preprocessor says that assign the 1 byte at a time 
struct Demo    //in the bracket pack(x) this can be 1,2,4,8
{
    /* data */
    int i;  //4
    char ch; //1
    float f;//4
    double d; //8
};


int main()
{

    struct Demo obj;
    printf("Size of object is : %d",sizeof(obj));
    return 0;

}