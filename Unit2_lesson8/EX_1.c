#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
int main() {
  int m=29;
  printf("Address of m is:%x\n",&m);
  printf("Value of m is:%d\n",m);
  int *ab;
  ab=&m;
  printf("Now ab is assigned with the address of m\n");
  printf("Address of pointer ab:%x\n",ab);
  printf("content of pointer ab:%d\n",*ab);
  m=34;
  printf("The value of m assigned to 34 now\n ");
   printf("Address of pointer ab:%x\n",ab);
  printf("content of pointer ab:%d\n",*ab);
  *ab=7;
  printf("The pointer variable ab is assigned with the value 7 now\n");
   printf("Address of m is:%x\n",&m);
  printf("Value of m is:%d\n",m);




    return 0;
}
