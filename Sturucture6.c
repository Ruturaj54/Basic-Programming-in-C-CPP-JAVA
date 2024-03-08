# include<stdio.h>

struct Demo
{
  int i;
  float f;
  struct Hello
  {
    int no;
    float d;
  }hobj;
}dobj;

int main()
{
    dobj.i = 50;
    dobj.f = 100.100;


    dobj.hobj.no = 200;
    dobj.hobj.d = 500.212;

    printf("%d\n",dobj.i);
    printf("%f\n",dobj.f);
    printf("%d\n",dobj.hobj.no);
    printf("%f\n",dobj.hobj.d);
    printf("size of object is %d\n",sizeof(dobj));





    return 0;
}