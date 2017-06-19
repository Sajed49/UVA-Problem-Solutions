/* qsort example */
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */



int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
  int n;
  int values[10];
  for(n=0; n<6; n++) scanf("%d", &values[n]);

  qsort (values, 6, sizeof(int), compare);
  for (n=0; n<6; n++)
     printf ("%d ",values[n]);
  return 0;
}
