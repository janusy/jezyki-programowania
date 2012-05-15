#include<stdio.h>
#include<string.h>

#define n 35

main()
{
  char wyraz[n];
  int dlugosc,i,por;


  printf("\nPodaj wyraz: "); gets(wyraz);
  dlugosc=strlen(wyraz);

  por = dlugosc/2; 


if(dlugosc % 2 == 0)
  {
    dlugosc--;
    for(i=0;i<por;i++)
      {
	if(wyraz[i] == wyraz[dlugosc-i] && dlugosc-i-i==1) {printf("palindrom\n");}
	
	if(wyraz[i] != wyraz[dlugosc-i]) {printf("NIE palindrom\n"); i=por;}
      }
  }
else
  {
    dlugosc--;
    for(i=0;i<por;i++)
      {
        if(wyraz[i] == wyraz[dlugosc-i] && dlugosc-i-i==2) {printf("palindrom\n");}

        if(wyraz[i] != wyraz[dlugosc-i]) {printf("NIE palindrom\n"); i=por;}
      }
  }

}  

