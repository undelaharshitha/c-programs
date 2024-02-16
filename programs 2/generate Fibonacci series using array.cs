#include<stdio.h>
int main()
{
    int fib[20],i,n;
    printf("Enter number of terms in the fibonacci series:");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Invalid input entered ,Please enter a positive number");
        return 1;
    }
    fib[0]=0;
    fib[1]=1;
    for(i=2 ; i<n ;i++)                 //loop to generate fibonacci series
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    printf("Fibonacci series upto %d terms :\n",n);
    for(i=0 ; i<n ; i++)
    {
        printf("%d  ",fib[i]);
    }
    return 0;
}
