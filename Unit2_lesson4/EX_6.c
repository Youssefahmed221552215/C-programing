#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
 char a[40];
 char b;
 int f=0;
 int i;
 printf("Enter a string:");
 fflush(stdout);fflush(stdin);
 gets(a);
 printf("\r\n");
 printf("Enter a character to find frequency:");
 fflush(stdout);fflush(stdin);
 scanf("%c",&b);
 for(i=0;a[i]!='0';i++)
 {
          if(a[i]==b)
          {
            f++;
          }


 }
 printf("Frequency of %c is %d",b,f);



}

