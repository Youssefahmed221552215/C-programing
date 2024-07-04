#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
#include <stdio.h>
#include <stdio.h>
#include <math.h>
#define pi 3.14
#define Area(r) (pi*r*r)
int main() {
   int raduis;
   float area;
   printf("Enter the raduis:");
   fflush(stdout);fflush(stdin);
   scanf("%d",&raduis);
   area=Area(raduis);
   printf("Area =%.2f",area);

    return 0;
}
