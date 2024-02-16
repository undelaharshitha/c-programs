#include<stdio.h>
int main()
{ int len=0,i;
  char string[100];
  printf("Enter string:");
  gets(string);
  for(i=0;string[i]!='\0';i++)
  {
    len++;
  }
  printf("Length of the string is: %d",len);
  return 0;
}
