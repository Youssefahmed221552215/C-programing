#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a,b,temp;
   printf("Enter value of a:");
   fflush(stdin);fflush(stdout);
   scanf("%f",&a);
   printf("Enter value of b:");
   fflush(stdin);fflush(stdout);
   scanf("%f",&b);
   temp=a;
   a=b;
   b=temp;
   printf("After swapping, value of a =%f\r\n",a);
   printf("After swapping, value of b =%f",b);


    return 0;
}
