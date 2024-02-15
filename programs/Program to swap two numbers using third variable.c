 #include<stdio.h>
  int main()
 {int a,b,temp;
 printf("Enter a=");
 scanf ("%d",&a);
 printf("Enter b=");
 scanf("%d",&b);
 printf("Before Swapping:\n");
 printf("a=%d\nb=%d",a,b);
 temp=a;
 a=b;
 b=temp;
 printf("\nAfter Swapping:");
 printf("\na=%d\nb=%d",a,b);
 return 0;
}
