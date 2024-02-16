 #include<stdio.h>
 int main()
 {int a[2][3],b[2][3],c[2][3],i,j;
  printf("Enter elemnts of first matrix:\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    { printf("Enter the element at a[%d][%d]:",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  printf("Enter elemnts of second matrix:\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    { printf("Enter the element at b[%d][%d]:",i,j);
      scanf("%d",&b[i][j]);
    }
  }
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    { c[i][j]=a[i][j]+b[i][j];
    }
  }
  printf("The sum of two matices=\n");
  for(i=0;i<2;i++)
  {
    for(j=0;j<3;j++)
    { printf("%d\t",c[i][j]);
    }
    printf("\n");
  }
  return 0;
 }
