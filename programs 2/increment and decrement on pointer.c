#include<stdio.h>
void main()
{
    int a[5]={5,4,6,8,3};
    int *p=&a[0];
    printf("Value:%d\n",*p);   // Value:5
    p++;                       // now,p is pointing to a[1]
    printf("Value:%d\n",*p);   // Value:4
    ++p;                       // now p is pointing to a[2]
    printf("Value:%d\n",*p);   // value:6
    p--;                       // now p is pointing to a[1]
    printf("Value:%d\n",*p);   // value:4
    --p;                       // now p is pointing to a[0]
    printf("Value:%d\n",*p);   // Value:5
}
