#include<stdio.h>

int main()
{
  
  int No=0,Sum = 0,i;
  int arr[No];

  printf("enter the number of elements:\n");
  scanf("%d",&No);
  
  printf("Enter the elemnts:");
  for(i=0;i<No;i++)
  {
    scanf("%d",&arr[i]);
   
    Sum=arr[i]+Sum;
  }
 /*for(i=0;i<No;i++)
  {
      printf("array[%d,]",arr[i]);
  }*/
 // printf("list is %d",&arr[i],&arr[i++]);
  printf("Addition is :%d",Sum);
  


return 0;

}