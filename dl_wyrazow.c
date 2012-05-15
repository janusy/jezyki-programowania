#include<stdio.h>
#include<string.h>


#define n 40
/*
int  numer_litery (char litera) {
  // duze litery sa sklejane z malymi; nielitery uzyskuja numer -1------\
------------                                                           
  if ('a'<=litera && litera<='z')  return (int)litera - (int)'a';
 else
   if ('A'<=litera && litera<='Z')  return (int)litera - (int)'A';
   else  return -1;
}

char  litera_o_numerze (int n) {
  // jesli n<0 lub n>=DL_ALFABETU -- sygnal bledu-------------------     
  if (0<=n && n<DL_ALFABETU)  return (char)((int)'a'+n);
  else  blad("zly numer litery");
}

*/


main()
{
  char znak, wyraz[n];
  double ile=0.0000,dlugosc=0.0000;
  double srednia=0.0000;

  printf("\n\n\n\n\nWprowadz tekst po, aby zakonczyc: CTRL+D\n\n");


znak = getchar();


while (znak !=EOF)
  {
    if(znak ==' ' || znak == '\n') ile+=1.0000;
    else dlugosc+=1.0000;

    znak = getchar();
  }
 dlugosc-=1.0000;
 ile+=0.0000;
 srednia = dlugosc/ile;
 printf("\n\n\n\n\n\n\n\n\n______________________________________\n");
 printf("\nStatystyka przeprowadzona na %.0lf wyrazach.",ile);
 printf("\nsrednia dlugosc wyrazu to: %.4lf\n",srednia);
 printf("_________________________________________\n\n\n\n\n\n\n\n");

}


//palindrom
