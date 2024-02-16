
#include<stdio.h>
void sum(void);
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a,b,sum=0;
    a=4;
    b=9;
    sum=a+b;
    printf("sum=%d",sum);
}
