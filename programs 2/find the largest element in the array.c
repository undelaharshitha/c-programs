#include<stdio.h>
int main()
{
    int a[]={12,10,52,3,34},n,large,i;
    n=sizeof(a)/sizeof(a[0]);           // n will have the length of the array ,here its 5
    large=a[0];                         // first we will assume that first element is largest
    for(i=1; i<n ;i++)
    {
        if(a[i]>large)                 // checking wheather other elements is larger than first element
        {
            large=a[i];                //if any element is large assigning that value to large
        }
    }
    printf("The largest element in the array is %d",large);
    return 0;
}
