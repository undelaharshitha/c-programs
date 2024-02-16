#include<stdio.h>
   int main()
   {int day;
    printf("Enter a number between 1-7:\n");
    scanf("%d",&day);
    switch (day)
    { case 1:
      printf("Sunday\n");
      break;
      case 2:
      printf("Monday\n");
      break;
      case 3:
      printf("Tuesday\n");
      break;
      case 4:
      printf("Wednesday\n");
      break;
      case 5:
      printf("Thursday\n");
      break;
      case 6:
      printf("Friday\n");
      break;
      case 7:
      printf("Satuarday\n");
      break;
      default:
      printf("You entered a wrong number");
     }
     return 0;
    }
