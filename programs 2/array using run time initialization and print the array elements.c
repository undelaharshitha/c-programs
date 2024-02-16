#include<stdio.h>
int main()
{
    int a[20],i,n;
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Enter the elements into the array:\n");
    for(i=0 ; i<n ; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are,\n");
    for(i=0 ; i<n ;i++ )
    {
        printf("Array element at index %d is %d\n",i,a[i]);
    }
    return 0;
}
