#include<stdio.h>
int main()
{
    int a[20],n,i,product=1;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    printf("Enter %d elements into the array:\n",n);
    for(i=0; i< n ;i++)       //loop to read array elements
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i< n ; i++)       //loop to compute product of array elements
    {
        product=product*a[i];
    }
    printf("Product of the array elements : %d",product);
    return 0;
}
