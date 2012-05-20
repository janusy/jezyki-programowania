#include <stdio.h>

void prostokat(int szer,int wys){
  int i,j; 

 for(i=0;i<szer;i++){
    printf("*");
 }
 printf("\n");

  for(i=0;i<wys-2;i++){
    for(j=0;j<szer;j++){
      if(j==0) {printf("*");} 
      if(j==szer-1) {printf("*\n");}
      if(j!=0 && j!=szer-1) {printf(" ");}
    }
  }
  for(i=0;i<szer;i++){
    printf("*");
  }
  printf("\n");
}

void strzalka(int szer){
  int i,j,k,spacji,gw;

  for(i=1;i<=szer;i+=2){
    spacji = (szer - i)/2;

    for(j=1;j<=spacji;j++){
      printf(" ");
    }

    for(k=1;k<=i;k++){
      printf("*");
    }

    for(j=1;j<=spacji;j++){
      printf(" ");
    }
    printf("\n");
  }
  //--------------------------------------
  
  spacji = (szer+1)/3;
  if(szer<=5){gw=1;}
  else{
    gw = 1;
    for(i=7;i<=60;i+=2){
      if (i/2 % 3 == 0) {gw += 2;}
      if(szer == i) { i=61;}
    }
  }
  
  for(j=1;j<=szer;j+=2){

    for(i=1;i<=spacji;i++){
      printf(" ");
    }

    for(i=1;i<=gw;i++){
      printf("*");
    }

    for(i=1;i<=spacji;i++){
      printf(" ");
    }
    printf("\n");

  }
}

main(){
  //prostokat(x,y)
    prostokat(35,5);
    prostokat(10,22);
  int i;
  for(i=5;i<13;i+=2){
    //strzalka(i)  i-liczby nieparzyste wieksze rowne 5
    strzalka(i);
  }
}
