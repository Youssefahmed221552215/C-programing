#include <stdio.h>
#include <stdlib.h>
#include "string.h"

int factorial(int n);
   int main()
{
    int num;
    printf("Enter a positive number:");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num);
    printf("Factorial of %d = %d",num,factorial(num));




}
int factorial(int n)
{
    if(n!=1) return n*factorial(n-1);

}


