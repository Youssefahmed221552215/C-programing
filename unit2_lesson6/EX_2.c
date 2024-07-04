#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
#include <stdio.h>
#include <stdio.h>
#include <math.h>
struct distance
{
    int feet;
    float inch;
}d1,d2,sum;

int main() {
    printf("Enter information for 1st distance:\n");
    printf("Enter feet:");
    fflush(stdout);fflush(stdin);
    scanf("%d",&d1.feet);
    printf("Enter inch:");
    fflush(stdout);fflush(stdin);
    scanf("%f",&d1.inch);
     printf("Enter information for 2nd distance:\n");
    printf("Enter feet:");
    fflush(stdout);fflush(stdin);
    scanf("%d",&d2.feet);
    printf("Enter inch:");
    fflush(stdout);fflush(stdin);
    scanf("%f",&d2.inch);
    sum.feet=d1.feet+d2.feet;
    sum.inch=d1.inch+d2.inch;
    if(sum.inch>12)
    {
        sum.inch=sum.inch-12;
        ++sum.feet;
    }

    printf("Sum of distances %d \'-%f\"",sum.feet,sum.inch);





    return 0;
}
