#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
 float data[100],sum;
 int numl;
 printf("Enter the numbers of data: ");
 fflush(stdout);fflush(stdin);
 scanf("%d",&numl);
 printf("\r\n");
 int i;
 for(i=0;i<numl;i++)
 {
     printf("%d Enter the number:",i+1);
     fflush(stdout);fflush(stdin);
     scanf("%f",&data[i]);
     sum+=data[i];
     printf("\r\n");
 }
 printf("Average:%f",(float)sum/numl);
    return 0;
}



