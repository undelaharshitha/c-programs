#include<stdio.h>
void main()
{
    int a[5]={6,4,2,5,8};
    int *p=&a[0];
    int *q=&a[4];
    printf("p-q=%d\n",p-q);     //p-q=-4
    *q=15;                       // now a[4]=15
    printf("q-p=%d\n",q-p);      //q-p=4
    *p=32;                       //now ,a[0]=32
    q=q-3;                       //now q is pointing to a[1]
    printf("value:%d\n",*q);     //value:4
    p=p+3;                       //now p is pointing to a[3]
    printf("value:%d\n",*p);     //value:5
    printf("p-q=%d\n",p-q);      //p-q=2
}
