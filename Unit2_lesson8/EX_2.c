#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include<math.h>
int main() {
  char *p;
  char alptha[27];
  p=alptha;
  int i,j;
  for(i=0;i<26;i++)
  {
     *p=i+'A';
     p++;
  }
  p=alptha;
  for(j=0;j<26;j++)
  {
      printf("%c\t",*p);
      p++;
  }


    return 0;
}
