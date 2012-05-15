#include <stdio.h>
#include <stdlib.h>  /* tutaj jest zdefiniowane RAND_MAX */
#include <time.h>

#define n 30

main()
{int i,zarodek;
  zarodek=time(NULL);
  srand(zarodek);

  for(i=1;i<=n;i++)
    {
      printf("\n%d liczba pseudolosowa: %d",i,rand());
    }
  printf("\n");
}
