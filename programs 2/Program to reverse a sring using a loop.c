#include<stdio.h>
#include<string.h>
int main()
{ char str[50];
  printf("Enter the string:");
  gets(str);
  int i,l=strlen(str);
  for(i=0;i<l/2;i++)
  {
    char ch=str[i];
    str[i]=str[l-1-i];
    str[l-1-i]=ch;
  }
  printf("Reversed string:\n%s",str);
  return 0;
}
