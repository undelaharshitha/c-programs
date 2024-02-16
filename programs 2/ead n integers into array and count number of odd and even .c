#include<stdio.h>
int main()
{
    int a[50],i,odd=0,even=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Enter the elements into the array:\n");
    for(i=0 ; i< n ;i++ )
    {
        scanf("%d",&a[i]);
    }
    for(i=0 ; i<n ;i++)
    {
        if(a[i]%2 == 0)
            even++;    //even = even +1
        else
            odd++;
    }
    printf("Number of even numbers entered:%d\n",even);
    printf("Number of odd numbers entered :%d",odd);
    return 0;
}
