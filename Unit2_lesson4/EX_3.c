#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
    int mat[10][10],trans[10][10],r,c,i,j;
    printf("Enter rows and column of matrix:");
    fflush(stdout);fflush(stdin);
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enter elements%d%d:\r\n",i+1,j+1);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nEntered matrix is:\n");
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d\t",mat[i][j]);

        }
        printf("\r\n");
    }
     for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            trans[j][i]=mat[i][j];
        }
    }
    printf("Transpose matrix is :\n");
     for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
        {
            printf("%d\t",trans[i][j]);

        }
        printf("\r\n");
    }





}

