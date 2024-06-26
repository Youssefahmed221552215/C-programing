#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
  float a[2][2];
  float b[2][2];
  float sum[2][2];
  printf("Enter the elements of 1st matrix\r\n");
  int i,j;
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
         printf("Enter a%d%d:",i+1,j+1);
         fflush(stdout);fflush(stdin);
         scanf("%f",&a[i][j]);
         printf("\r\n");
      }
  }
  printf("\r\nEnter the elements of 2nd matrix\r\n");
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
         printf("Enter b%d%d:",i+1,j+1);
         fflush(stdout);fflush(stdin);
         scanf("%f",&b[i][j]);
          printf("\r\n");
      }
  }
  printf("\r\n the sum of matrix:\r\n");
  for(i=0;i<2;i++)
  {
      for(j=0;j<2;j++)
      {
          sum[i][j]=a[i][j]+b[i][j];
          printf("%f",sum[i][j]);
          printf("\t");

      }
      printf("\r\n");
  }




    return 0;
}



