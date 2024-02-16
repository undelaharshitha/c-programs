#include<stdio.h>
#include<string.h>
int main()
{ int len=0;
  char string[100];
  printf("Enter string:");
  gets(string);
  len=strlen(string);
  printf("Length of the string is: %d",len);
  return 0;
}
