#include<stdio.h>
int main()
{
    int a[5]={1,2,5,9,12},i;
    printf("Elements of array are,\n");
    for(i=0 ; i<sizeof(a)/sizeof(a[0]) ;i++ )
    {
        printf("Array element at index %d is %d\n",i,a[i]);
    }
    return 0;
}
