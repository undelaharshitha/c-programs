#include <stdio.h>
int main() {
  float marks[5],sum=0.0;
  float avg;
  for(int i=0;i<5;i++)
  { printf("Enter marks in Subject %d:",i+1);
    scanf("%f",&marks[i]);
    sum=sum+marks[i];
  }
  avg=sum/5;
  printf("Total marks obtained:%.2f\n",sum);
  printf("Average:%f",avg);
  return 0;
}
