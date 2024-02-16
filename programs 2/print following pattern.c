/* 12345
     12345
     12345
     12345
     12345
*/
#include<stdio.h>
int main()
{ int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    {
        printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}

/*  *****
     *****
     *****
     *****
     *****
*/
#include<stdio.h>
int main()
{ int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=5;j++)
    {
        printf("*");
    }
    printf("\n");
  }
  return 0;
}


/*   *
      **
      ***
      ****
      *****
*/
#include<stdio.h>
int main()
{ int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
  }
  return 0;
}


//Program to print following pattrn.
/*     1
        12
        123
        1234
        12345
*/
#include<stdio.h>
int main()
{ int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}

/*    1
        22
        333
        4444
        55555
*/
#include<stdio.h>
int main()
{ int i,j;
  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
        printf("%d",i);
    }
    printf("\n");
  }
  return 0;
}

/*     0
        12
        345
        6789
*/
#include<stdio.h>
int main()
{ int i,j,count=0;
  for(i=0;i<4;i++)
  {
    for(j=0;j<=i;j++)
    {
        printf("%d",count);
        count++;
    }
    printf("\n");
  }
  return 0;
}

/*    a
        ab
        abc
        abcd
        abcde
*/
#include<stdio.h>
int main()
{ int i,j;
  for(i=97;i<=101;i++)
  {
    for(j=97;j<=i;j++)
    {
        printf("%c",j);
    }
    printf("\n");
  }
  return 0;
}


/*            1
              12
            123
          1234
        12345
*/
#include<stdio.h>
int main()
{ int i,j,k;
  for(i=1;i<=5;i++)
  {
    for(k=5;k>i;k--)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    printf("\n");
  }
  return 0;
}


/*          1
            121
          12321
        1234321
      123454321
*/
#include<stdio.h>
int main()
{ int i,j,k,l;
  for(i=1;i<=5;i++)
  {
    for(k=5;k>i;k--)
    {
      printf(" ");
    }
    for(j=1;j<=i;j++)
    {
      printf("%d",j);
    }
    for(l=j-2;l>0;l--)
      {
        printf("%d",l);
      }
    printf("\n");
  }
  return 0;
}







