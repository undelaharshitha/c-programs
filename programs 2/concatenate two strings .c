#include<stdio.h>
#include<string.h>
int main()
{ char s1[50]="C_";
  char s2[50]="Programming";
  strcat(s1,s2);
  printf("Concateated string:\n%s",s1);
  return 0;
}
