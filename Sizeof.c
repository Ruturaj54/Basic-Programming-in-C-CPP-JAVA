#include<stdio.h>

int main()
{
    char ch ='A';
    int ret = 10;
    float res = 8.61f;
    double tel = 10.1612232;

    printf("Size of char is : %d \n",sizeof(ch));
    printf("Size of integer is : %d \n",sizeof(ret));
    printf("Size of float is : %d \n",sizeof(res));
    printf("Size of double is : %d \n",sizeof(tel));

    printf("Base address of char is : %d\n",&ch);
    printf("Base address of integer is : %d\n",&ret);
    printf("Base address of float is : %d\n",&res);
    printf("Base address of double is : %d\n",&tel);
    return 0;
}