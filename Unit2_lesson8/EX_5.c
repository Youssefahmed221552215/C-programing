#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
struct employee
{
    char *name;
    int id;
}semployee;
int main()
{
  struct employee emp1={"youssef",20012},emp2={"mohamed",200333},emp3={"tarek",200000};
  struct employee (*arr[])={&emp1,&emp2,&emp3};
  struct employee (*(*p)[])=&arr;
  printf("Employee name:%s\n",(**(*p+1)).name);
  printf("Employee ID:%d",(*(*p+1))->id);



    return 0;
}
