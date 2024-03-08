#include<stdio.h>
struct Hello
  {
    int no;
    float d;
  };

struct Demo
{
  int i;
  float f;
  struct Hello hobj;
 
}dobj;

int main()

{
    printf("Size of object is :%d\n",sizeof(dobj));
    printf("%d\n",dobj.i=10);
    printf("%d\n",dobj.f = 100.100);

    
    printf("%d\n",dobj.hobj.no = 500);
    printf("%d\n",dobj.hobj.d = 500.1000);
    


    return 0;
}