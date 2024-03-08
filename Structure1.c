#include<stdio.h>

#pragma pack(1)
 struct Demo
{
    int no;
    float f;
    int x;
    float d;
    //char ch;
};

int main()
{
   struct Demo obj1;
   struct Demo obj2;

   obj1.no = 10;
   obj1.f = 10.5f;
   obj1.x = 199;
   obj1.d = 20.5f;

   obj2.no = 100;
   obj2.f = 100.5f;
   obj2.x = 200;
   obj2.d = 240.5f;


   printf("NO 1st is:%d\n",obj1.no);
   printf("F 1st is:%f\n",obj1.f);
   printf("X 1st is:%d\n",obj1.x);
   printf("D 1st is:%f\n",obj1.d);
   printf("NO 2st is:%d\n",obj2.no);
   printf("F 2st is:%f\n",obj2.f);
   printf("X 2st is:%d\n",obj2.x);
   printf("D 2st is:%f\n",obj2.d);
  
  
    return 0;
}