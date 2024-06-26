#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
 int arr[30],num,element,i;
 printf("Enter the number of element:");
 fflush(stdout);fflush(stdin);
 scanf("%d",&num);
 printf("\r\n");
 for(i=0;i<num;i++)
 {
     scanf("%d",&arr[i]);

 }
 printf("\nEnter the element to be searched:");
 fflush(stdout);fflush(stdin);
 scanf("%d",&element);
 for(i=0;i<num;i++)
 {
     if(arr[i]==element)
     {
         printf("Number found in location %d",i+1);
     }
  
 }



}

