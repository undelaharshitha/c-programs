#include<stdio.h>
void sum(int,int);
int main()
{   int a,b;
    a=42;
    b=32;
    sum(a,b);
    return 0;
}
void sum(int x,int y)
{
    int sum=0;
    sum=x+y;
    printf("Sum=%d",sum);
}
