#include<stdio.h>
  int main()
  {int a,b;
  float avg,d1,d2;
  printf("Enter first number=");
  scanf ("%d",&a);
  printf("Enter second number=");
 scanf("%d",&b);
 avg=(a+b)/2;
 d1=a-avg;
 d2=b-avg;
 printf("Average=%.2f\n",avg);
 printf("Deviation of 1st number (i.e %d) is=%.2f",a,d1);
 printf("\nDeviation of 2nd number (i.e %d) is=%.2f",b,d2);
 return 0;
 }
