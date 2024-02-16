#include<stdio.h>
  #include<math.h>
  int main()
  { int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Entered numbers are %d,%d,%d",a,b,c);
    printf("\n--------------------------------");
    if (a>=b && a>=c)
   {  if (b>=c){
       printf("\nDescending order : %d,%d,%d",a,b,c);
       printf("\nAscending order : %d,%d,%d",c,b,a);
      }
     else{
       printf("\nDescending order : %d,%d,%d",a,c,b);
       printf("\nAscending order : %d,%d,%d",b,c,a);
     }
   }
   else if (b>=a && b>=c) {
     if (a>=c){
        printf("\nDescending order: %d,%d,%d",b,a,c);
        printf("\nAscending order: %d,%d,%d",c,a,b);
     }
   }
    else{
     if (b>=a){
      printf("\nDescending order : %d,%d,%d",c,b,a);
      printf("\nAscending order : %d,%d,%d",a,b,c);
     }
     else {
      printf("\nDescending order : %d,%d,%d",c,a,b);
      printf("\nAscending order : %d,%d,%d",b,a,c);
     }
   }
   return 0;
  }
