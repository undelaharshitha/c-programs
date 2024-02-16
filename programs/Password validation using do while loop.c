#include <stdio.h>
int main()
{  int password;
   do {
    printf("Enter the password:");
    scanf("%d",&password);
   }while(password!=1243);
   printf("Access Granted.");
    return 0;
}
