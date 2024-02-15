#include<stdio.h>
int main()
{  float a,b,area;
    printf("Enter base and height of triangle:");
    scanf("%f%f",&a,&b);
    area=(a*b)/2;
    printf("Area=%.2f",area);
    return 0;
}
