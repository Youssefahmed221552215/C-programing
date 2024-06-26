#include <stdio.h>
#include <stdlib.h>
#include "string.h"


   int main()
{
    char a[100],temp;
    int i,j;
    printf("Enter the string:");
    fflush(stdout);fflush(stdin);
    gets(a);
    i=0;
    j=strlen(a)-1;
    while(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    printf("Reverse string is :%s",a);



}

