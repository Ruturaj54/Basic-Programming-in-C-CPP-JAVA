#include<stdio.h>


int main()
{
  char ch = 'A';
  int i = 11;
  float f = 90.99f;
  double d = 90.88;

  char *cp = &ch;
  int *ip = &i;
  float *fp = &f;
  double *dp = &d;

  printf("%d\n",*cp); //A
  printf("%d\n",*ip); //11
  printf("%f\n",*fp); //90.99f
  printf("%f\n",*dp); //90.88

  void *vp = NULL;
  vp = &ch;

  printf("%d\n",*(char*)vp);

  vp = &i;

  printf("%d\n",*(int*)vp);

  vp = &f;

  printf("%f\n",*(float*)vp);

  vp = &d;

  printf("%f\n",*(double *)vp);
  


  
  return 0;
}