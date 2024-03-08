#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;

    printf("No:%d\n",no);
    printf("Address of No:%d\n",&no);
    printf("No size is:%d\n",sizeof(no));
    printf("p is :%d\n",p);
    printf("Address of p:%d\n",&p);
    printf("Pointer p holds value of NO:%d\n",*p);
    printf("Size of p is :%d\n",sizeof(p));    
    

    return 0;
}