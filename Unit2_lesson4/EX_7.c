#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
 char a[30];
 int i;
 printf("Enter a string:");
 fflush(stdout);fflush(stdin);
 gets(a);
 for(i=0;a[i]!='\0';i++){}
    printf("Length of string is :%d",i);




}

