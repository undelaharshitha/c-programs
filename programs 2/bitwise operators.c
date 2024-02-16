#include<stdio.h>
int main(){
  int a=3,b=1;
  printf("a&b=%d\n",a&b); //Bitwise and(&)   //0011 :3
                                             //0001 :1
                                             //-------if we perforn and on above two values
                                             //0001 :1 ,Result will be 1.
  printf("a|b :%d\n",a|b); //Bitwise or(|)   //0011:3
                                             //0001:1
                                             //-------if we perform or on above two values
                                             //0011:3 ,Result will be 3.
  printf("a>>b:%d\n",a>>b); //right shift(>>) // 3>>1
                                              // 0011:3
                                              // 0001:1(after shifting to right)
  printf("a<<b:%d",a<<b);  //left shift(<<)   //3<<1
                                              //0011:3
                                              //0110:6(after shifting to left)
   return 0;
}
