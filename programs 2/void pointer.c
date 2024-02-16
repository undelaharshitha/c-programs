void pointer- A void pointer is a special pointer type that can hold the
// address of any data type.
//dereferencing of void pointer can only be done after typecasting into other data type.

#include<stdio.h>
void main()
{ void *vp;
   int a=10;
   float b=5.5;
   char ch='b';
   vp=&a;
   printf("%d\n",*(int*)vp);
   vp=&b;
   printf("%f\n",*(float*)vp);
   vp=&ch;
   printf("%c",*(char*)vp);
}
