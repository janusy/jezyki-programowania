#include<stdio.h>

main()
{
  int min, max,i,j,liczba,pierwsza=0;

  printf("min:");
  scanf("%d",&min);

 printf("max:");
  scanf("%d",&max);
  

  for(i=min; i<=max; i++)
    {
      pierwsza = 0;
      liczba = i;
      for(j=2; j<i; j++)
	{
	  if(liczba % j == 0) j = i;
	}
  if(liczba % j == 0 && j == liczba) printf("%d\n",liczba);
     
    }
}
