#include<stdio.h>
   int main()
   {char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    if(ch>='A'&&ch<='Z')
    {printf("The entered character is in uppercase :%c\n",ch);
     printf("The lowercase of above character is :%c",ch+32);
    }
    else
    {printf("The entered character is in lowercase :%c\n",ch);
     printf("The uppercase of above character is :%c",ch-32);
    }
     return 0;
    }
