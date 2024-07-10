#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
int main()
{
    char word[12],revword[12];
    char *p,*rp;
    int i=0;
    p=word;
    rp=revword;
    printf("Input a string:");
    gets(word);
    while(*p)
    {
        p++;
        i++;
    }
    while(i>=0)
    {
        p--;
        *rp=*p;
        rp++;
        i--;
    }
    *rp='\0';
    printf("reverse of string is:%s",revword);



    return 0;
}
