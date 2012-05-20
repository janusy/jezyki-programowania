#include <stdio.h>
#include <stdlib.h>
#include <time.h>

main(){

  int i, zarodek=time(NULL),proby=0,liczba,odp=0;

  srand(zarodek);

  liczba = rand()%1000;
  liczba++;

  while(liczba!=odp && proby<=10){
    proby++;
    printf("__________________________________\n");
    printf("Zgadnij liczbe od 1 do 1000: "); scanf("%d",&odp);
    if(odp==liczba){ printf("\nBRAWOO!!! BRAWO BRAWOooooOOoo!!! Odgadles liczbe w %d probach!\n\n",proby); }
    if(odp>liczba){ printf("\nPodales ZA DUZA liczbe\n   Pozostalo prob: %d\n",10-proby); }
    if(odp<liczba){ printf("\nPodales ZA MALA liczbe\n   Pozostalo prob: %d\n",10-proby); }
  }

if(proby == 11)
  {printf("\n\n Niestety wykorzystales juz 10 prob :(\n"); }
     
}


