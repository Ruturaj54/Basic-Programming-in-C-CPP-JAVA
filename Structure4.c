#include<stdio.h>

#pragma pack(1)
struct Demo
{
    int *p;
    float *q;
    double d;
};

int main()
{
    struct Demo obj;
    int i = 11;
    float f = 90.909;

    obj.p = &i;
    obj.q = &f;
    obj.d = 90.9999;

    printf("%d\n",*(obj.p));
    printf("%f\n",*(obj.q));
    printf("%lf\n",obj.d);

    return 0;
}