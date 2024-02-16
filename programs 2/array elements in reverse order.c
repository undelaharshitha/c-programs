#include<stdio.h>
int main()
{
    int a[]={2,5,4,8,7},n,i;
    n=sizeof(a)/sizeof(a[0]);
    printf("The elements of the array are:\n");
    for(i=0 ; i<n ; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nThe array elements in reverse are:\n");
    for(i=n-1 ; i>=0 ; i--)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
