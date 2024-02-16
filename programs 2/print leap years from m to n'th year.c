#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the year m:");
    scanf("%d",&m);
    printf("Enter the year n:");
    scanf("%d",&n);
    do
    {
        if((m%4==0 && m%100!=0) || (m%400==0))
        {
            printf("%d is a leap year\n",m);
        }
        else{
            printf("%d is not a leap year\n",m);
        }
        m+=1;
    }while(m<=n);
    return 0;
}
