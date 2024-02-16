#include<stdio.h>
int sum(int,int);
int main()
{   int a,b,res;
    a=20;
    b=5;
    res=sum(a,b);
    printf("Sum=%d",res);
    return 0;
}
int sum(int x,int y)
{
    int sum=0;
    sum=x+y;
    return sum;
}
