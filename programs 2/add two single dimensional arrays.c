#include<stdio.h>
int main()
{
    int a[5]={1,5,7,3,9},b[5]={2,6,4,8,10},c[5],i;
    for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("Resultant array after adding the two array's:\n");
    for(i=0 ;i<5 ;i++)
    {
        printf("%d\t",c[i]);
    }
    return 0;
}
