#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
#include <stdio.h>
#include <stdio.h>
#include <math.h>
struct student
{
    char name[20];
    float mark;

};
int main() {
    printf("Enter information of syudents:\n");
    struct student total[10];
   int i,j;
   for(i=0;i<10;i++)
   {
       printf("for roll number %d\n",i+1);
       printf("Enter name:");
       fflush(stdout);fflush(stdin);
       scanf("%s",&total[i].name);
       printf("Enter marks:");
       fflush(stdout);fflush(stdin);
       scanf("%f",&total[i].mark);
   }
   printf("Displaying Information of students:\n");
   for(j=0;j<10;j++)
   {
       printf("information for  roll number %d\n",j+1);
       printf("Name:%s \n mark:%f",total[j].name,total[j].mark);
       printf("\n");
   }

    return 0;
}
