#include<stdio.h>
int main()
{
    int a[20],sum=0,n,i;
    float avg;
    printf("Enter number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements into the array:");
    for(i=0 ; i<n ;i++)      // loop for reading elements into array
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ;i++)         //loop for calculating sum of array elements
    {
        sum = sum  + a[i];
    }
    avg=(float)sum/n;
    printf("Sum of array elements:%d\n",sum);
    printf("Average of array elements:%f\n",avg);
    return 0;
}
