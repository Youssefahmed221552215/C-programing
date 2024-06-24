#include <stdio.h>
#include <stdlib.h>

int main()
{
   float number1,number2,product;

   printf("Enter two numbers :");

   scanf("%f %f ",&number1,&number2);
   fflush(stdin); fflush(stdout);
   product=number1*number2;
   printf("product:%f",product);

    return 0;
}
