#include<stdio.h>
int main(){
  int a=10;
  int b=a++; //post increment:the actual value of a is first assigned to b and next the value of a will be incremented by 1.
  printf("The value  of a:%d and b: %d",a,b);
   return 0;
}
