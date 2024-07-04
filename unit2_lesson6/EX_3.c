#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
#include <stdio.h>
#include <stdio.h>
#include <math.h>
struct complexnum
{
    float real;
    float imaginary;
}num1,num2,sum;
struct complexnum add(struct complexnum number1,struct complexnum number2)
{
    struct complexnum result;
    result.real=number1.real+number2.real;
    result.imaginary=number1.imaginary+number2.imaginary;
    return result;

}
int main() {
   printf("for 1st complex number\n");
   printf("Enter real and imaginery respectively:");
   fflush(stdout);fflush(stdin);
   scanf("%f \n %f",&num1.real,&num1.imaginary);
    printf("for 2nd complex number\n");
   printf("Enter real and imaginery respectively:");
   fflush(stdout);fflush(stdin);
   scanf("%f \n %f",&num2.real,&num2.imaginary);
   sum=add(num1,num2);
   printf("sum=%f+%fi",sum.real,sum.imaginary);



    return 0;
}
