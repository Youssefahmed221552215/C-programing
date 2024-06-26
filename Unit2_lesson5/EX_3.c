#include <stdio.h>
#include <stdlib.h>
#include "string.h"

void revers();
   int main()
{
    printf("Enter a sntence:");
    revers();
}
void revers()
{
    char c;
    scanf("%c",&c);
    if(c!='\n')
    {
        revers();
        printf("%c",c);
    }

}

