#include<stdio.h>
int main(){
  int a=10;
  int b=a--; //post decrement:the actual value of a is first assigned to b and then the value of a is decremented by 1.
  printf("The value  of a:%d and b: %d",a,b);
   return 0;
}
