#include<stdio.h>
void main()
{
    int a[7]={4,8,3,6,1,2,7};
    int *p=&a[0],*q;
    printf("%d\n",*p);                     //4
    printf("%d,%d,%d\n",(*p)++,*p++,*++p); //3,8,8
    printf("%d\n",*p);                     //4
    q=p+3;                                 //q is pointing to a[5]
    printf("%d\n",*q-3);                   //-1
    printf("%d\n",*--p+5);                 //13
    printf("%d\n",*p+*q);                  //10
