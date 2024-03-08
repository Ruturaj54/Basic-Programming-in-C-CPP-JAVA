#include<stdio.h>
int AREAOFCIRCLE(float No1,float No2,float No3)
{
    int sum=0;
    sum=No1*No2*No3;
    return sum;
}
int main()
{
   float Radius=0.0f;
   const float py=3.14;
   float Area=0;

   printf("Enter the size of radius:\n");
   scanf("%f",&Radius);

   Area=AREAOFCIRCLE(py,Radius,Radius);

   printf("ARE IS %f\n",Area);


    return 0;

}