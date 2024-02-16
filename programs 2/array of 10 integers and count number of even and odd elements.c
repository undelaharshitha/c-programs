#include <stdio.h>
int main() {
  int n[10],even=0,odd=0;
  for(int i=0;i<10;i++)
  {
    printf("Enter element at index %d:",i);
    scanf("%d",&n[i]);
    if(n[i]%2==0){
    even++;
    }
    else{
    odd++;
    }
  }
  printf("Total number of even numbers are:%d\n",even);
  printf("Total number of odd numbers are:%d\n",odd);
  return 0;
}
