#include<stdio.h>
      int main()
      { int a;
        printf("Enter your age:");
        scanf("%d",&a);
        if(a>=18)
        {
        printf("Your age is %d you are eligible to vote",a);
        }
        if(a<18)
        { a=18-a;
        printf("You should wait %dyrs for eligibilty",a);
        }
        return 0;
      }
