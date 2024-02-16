#include<stdio.h>
int main()
{
    int base,exp,res=1,i;
    printf("Enter the base:");
    scanf("%d",&base);
    printf("Enter the exponent:");
    scanf("%d",&exp);
    for(i=1;i<=exp;i++)
    {
        res=res*base;
    }
    printf("%d to the power of %d is :%d",base,exp,res);
    return 0;
}
