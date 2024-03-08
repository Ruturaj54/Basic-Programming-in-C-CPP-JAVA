#include<stdio.h>
#include<stdlib.h>
struct hello
{
    int i;
    float j;

};

int main()
{
    int N = 0;
    struct hello *ptr = NULL;

    printf("Enter the No of records:\n");
    scanf("%d",&N);
    ptr = (struct hello*)malloc(N * sizeof(struct hello));

    for(int i = 0;i<N;i++)
    {
        scanf("%d %f",&(ptr+i)->i,&(ptr + i)->j);
    }

    for(int i =0 ;i<N;i++)
    {
        printf("i :%d,j:%f",(ptr+i)->i,(ptr + i)->j);
    }

    free(ptr);
    return 0;
}