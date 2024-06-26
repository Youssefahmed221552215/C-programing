#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
 int arr[30],i,num,element,location;
 printf("Enter no of element:");
 fflush(stdout);fflush(stdin);
 scanf("%d",&num);
 printf("\r\n");
 for(i=0;i<num;i++)
 {
     scanf("%d",&arr[i]);
 }
 printf("\r\nEnter the element to be inserted:");
 fflush(stdout);fflush(stdin);
 scanf("%d",&element);
 printf("\r\n");
 printf("Enter the location:");
 fflush(stdout);fflush(stdin);
 scanf("%d",&location);
 for(i=num;i>=location-1;i--)
 {
     arr[i]=arr[i-1];

 }
   arr[location-1]=element;
   num++;
   for(i=0;i<num;i++)
   {
       printf("%d\t",arr[i]);

   }



}

