#include<stdio.h>

int main()
{
  int Arr[5] = {10,20,30,40,50};

  printf("%d\n",Arr);    //100
  printf("%d\n",&Arr);   //100    this is address of whole array

  printf("%d",Arr+1);     //104
  printf("%d\n",&Arr+1);   //120   

  printf("%d\n",Arr[1]);   //20
  printf("%d\n",Arr[3]);    //40

  printf("%d\n",*(Arr+3));

  printf("%d\n",*(3+Arr));

  printf("%d\n",3[Arr]);

  printf("%d\n",Arr[3]);


  return 0;

}