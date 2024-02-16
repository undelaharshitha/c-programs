#include<stdio.h>
  #include<math.h>
  int main()
 {  int a,b,c;
    float D,denom,r1,r2;
    printf("Enter the values of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-(4*a*c);
    denom=2*a;
   if(D>0)
   {r1=(-b+sqrt(D))/denom;
    r2=(-b-sqrt(D))/denom;
   printf("Real roots with,\n Root 1=%.2f\n Root 2=%.2f",r1,r2);
   }
   else if(D==0)
   {r1=-b/denom;
    r2=-b/denom;
   printf("Equal roots with,\n Root 1=%.2f\n Root 2=%.2f",r1,r2);
    }
   else
   { r1=-b/denom;
     r2=sqrt(-D)/denom;
     printf("Imaginary Roots with,\n");
     printf("Root 1=%.2f+%.2fi\n",r1,r2);
     printf("Root 2=%.2f-%.2fi",r1,r2);
   }
    return 0;
 }


