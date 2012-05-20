#include<stdio.h>

#define n 10000

void zeruj(int tab[n]){
  int i;
  for(i=0;i<n;i++){
    tab[i] = 0;
  }
}
void doskonala(int tab[n],int liczba){
  int i,j=0,suma=0;

  for(i=1;i<=liczba/2;i++){
    if(liczba%i==0) { tab[j] = i; j++; }
  }
  i=0;
  while(tab[i] != 0) {
    suma += tab[i];
    i++;
  }
  if(suma == liczba) {printf("\n%d JEST liczba doskonala",liczba); }
  // else {printf("\n%d NIE JEST liczba doskonala\n",liczba); }
}
main(){
int liczba,i,tab[n];

 for(i=1;i<=n;i++){
   zeruj(tab);
   liczba = i;
   doskonala(tab,liczba);  
 }
 puts("\n\n");
}
