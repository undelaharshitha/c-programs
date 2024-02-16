#include<stdio.h>
int main()
{
    int a[30],i,size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    printf("Enter the array elements:\n");
    for(i=0 ; i< size ;i++)
    {
        scanf("%d",&a[i]);
    }
    //Traversing array elements using for loop
    for(i=0 ;i<size ;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}
