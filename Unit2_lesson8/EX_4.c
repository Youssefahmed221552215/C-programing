#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
int main()
{
    int num,j,i;
    int word[15];
    int *p;
    p=word;
    printf("Enter the number of elements to store in the array(mux 15):");
    fflush(stdout);fflush(stdin);
    scanf("%d",&num);
    printf("Input %d number of elements in the array:\n",num);
    for(j=0;j<num;j++,p++)
    {
        printf("element-%d:",j+1);
        scanf("%d",p);
       // printf("\n");
    }
    p--;
    printf("the elements of array in reverse order are:\n");

    for(i=num-1;i>=0;i--,p--)
    {
        printf("element-%d:%d",i+1,*p);
        printf("\n");
    }





    return 0;
}
