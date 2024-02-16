#include<stdio.h>
 void main()
 {int a=5,b=6;
  int *p,*q;     //declaration of pointers p and q
  p=&a;           // pointer variable p,has the address of variable a
  q=&b;           // pointer variable q, has the adress of variable b
  printf("Value of a:%d\n",*p);  //*p will give the value of a i.e *(&a) value at adress of a
  printf("Value of b:%d",*q);    //*q will give the alue of b i.e *(&b)  value at adress of b
 }
