#include <stdio.h>
int main() {
  int m[2][3],i,j,sum=0;
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    { printf("Enter the element at m[%d][%d]:",i,j);
      scanf("%d",&m[i][j]);
      sum=sum+m[i][j];
    }
  }
  printf("The matrix is:\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    {
      printf("%d\t",m[i][j]);
    }
    printf("\n");
  }
  printf("Sum of all the elements of matrix:%d",sum);
  return 0;
}
