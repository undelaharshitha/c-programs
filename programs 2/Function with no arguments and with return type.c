#include<stdio.h>
int sum(void);
int main()
{   int res;
    res=sum();
    printf("Sum=%d",res);
    return 0;
}
int sum()
{
    int a,b,sum=0;
    a=10;
    b=45;
    sum=a+b;
    return sum;
}
