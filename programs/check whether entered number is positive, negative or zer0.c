 #include<stdio.h>
  int main ()
 { int a;
 printf("Enter a number:");
 scanf("%d",&a);
 if(a>0)
 printf("%d is a positive number",a);
 if(a==0)
 printf("%d is neither positive nor negative",a);
 if(a<0)
 printf("%d is a negative number",a);
 return 0;
 }
