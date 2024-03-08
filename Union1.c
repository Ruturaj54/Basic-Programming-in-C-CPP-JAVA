#include<stdio.h>
union Demo
{
    int i;
    double d;
    char ch;
};

int main()
{
    union Demo obj;
    printf("Size of object :- %d",sizeof(obj));

    obj.ch = 'A';
    obj.d = 190909.1111;
    obj.i = 122;

    printf("%d\n",obj.ch);
     printf("%d\n",obj.d);
      printf("%d\n",obj.i);

    return 0;
}