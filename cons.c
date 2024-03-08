#include<stdio.h>

int main()
{
  int X = 11;

  const int Y = 11;
   X++;
   X--;
   X=21;

  // Y++;   Not allowed
  //Y--;    Not allowed
  //Y=31;   Not allowed
    return 0;
}