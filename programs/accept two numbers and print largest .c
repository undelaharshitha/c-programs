#include<stdio.h>
  int main()
  { int a,b;
    printf("Enter 1st number : ");
    scanf("%d",&a);
    printf("Enter 2nd number : ");
    scanf("%d",&b);
    if(a>b)
    printf("%d is larger than %d",a,b);
    else
    printf("%d is larger than %d",b,a);
   }
