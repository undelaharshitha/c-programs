#include <stdio.h>
int main() {
  int a[5],b[5],c[5];
  printf("Enter the elements of first array:\n");
  for(int i=0;i<5;i++)
  {
    printf("Enter the Element at %d index:",i);
    scanf("%d",&a[i]);
  }
  printf("Enter the elements of second array:\n");
  for(int i;i<5;i++)
  {
    printf("Enter the Element at %d index:",i);
    scanf("%d",&b[i]);
  }
  printf("Elements of Third Array after calculating sum of 2 arrays:\n");
  for(int i=0;i<5;i++)
  {
    c[i]=a[i]+b[i];
    printf("The Element at index %d is :%d\n",i,c[i]);
  }
  return 0;
}
