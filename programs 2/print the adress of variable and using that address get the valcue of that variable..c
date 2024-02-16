#include<stdio.h>
int main(){
  int a=10;
  int *address=&a;
  printf("Address of variable a: %p\n",&a);
  printf("Value of a:%d",*address);
  return 0;
}
