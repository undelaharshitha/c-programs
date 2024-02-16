#include <stdio.h>

int main() {
  int a[5],i;
  for(i=0;i<5;i++)          //for loop for reading elements of array
  {
    printf("Enter the element at %d index:",i);
    scanf("%d",&a[i]);
  }
  for(i=0;i<5;i++)
  {
    printf("\nThe element at %d index is :%d",i,a[i]);    //for loop for printing elements of array
  }
  return 0;
}
