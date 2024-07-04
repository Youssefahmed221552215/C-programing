#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
#include <stdio.h>
#include <stdio.h>
#include <math.h>
struct data
{
    char name[30];
    int roll_number;
    float marks;
};
int main() {
    struct data data1;
    printf("Enter information of student:\n");
    printf("Enter name:");
    fflush(stdout);fflush(stdin);
    scanf("%s",&data1.name);
    printf("Enter roll number:");
    fflush(stdout);fflush(stdin);
    scanf("%d",&data1.roll_number);
    printf("Enter marks:");
    fflush(stdout);fflush(stdin);
    scanf("%f",&data1.marks);
    printf("Displaying information:\n");
    printf("name: %s\n Rolls: %d\n Marks: %f",data1.name,data1.roll_number,data1.marks);

    return 0;
}
