#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int power(int n1,int n2);
   int main()
{
    int base,exp;
    printf("Enter base number:");
    fflush(stdout);fflush(stdin);
    scanf("%d",&base);
    printf("\r\n");
    printf("Enter power number(positive integer):");
    fflush(stdout);fflush(stdin);
    scanf("{%d",&exp);
    printf("%d^ %d=%d",base,exp,power(base,exp));
    return 0;

}
int power(int n1,int n2)
{
    if(n2!=0)
    {
        return (n1*power(n1,n2-1));
    }
    else{
        return 1;
    }
}

