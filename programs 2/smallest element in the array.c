#include<stdio.h>
int main()
{
    int a[]={11,5,10,3,34},n,smallest,i;
    n=sizeof(a)/sizeof(a[0]);           // n will have the length of the array ,here its 5
    smallest = a[0];                         // first we will assume that first element is smallest
    for(i=1; i<n ;i++)
    {
        if(a[i] < smallest)                 // checking wheather other elements is smaller than first element
        {
            smallest=a[i];                //if any element is smaller ,assigning that value to smallest
        }
    }
    printf("The smallest element in the array is %d",smallest);
    return 0;
}
