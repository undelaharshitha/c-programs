#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c,s,area;
  printf("Enter three sides of triangle:");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
area=sqrt((s*(s-a)*(s-b)*(s-c)));
printf("Area is = %.2f",area);
return 0;
}
