#include<stdio.h>

struct point {
  int x;
  int y;
};

struct rect {
  struct point ll; /* lower left */
  struct point ur; /* upper right */
};

struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}

int ptinrect(struct point p, struct rect r) {
  return p.x >= r.ll.x && p.x < r.ur.x
    && p.y >= r.ll.y && p.y < r.ur.y;
}

/* Funkcja rectinrect sprawdza, czy prostokat r1 zawiera sie w prostokacie r2.
   Sprawdza, czy punkty ll i ur prostok¹ta r1 nale¿¹ do r2, jeœli tak to r1 zawiera siêw r2 */ 
int rectinrect(struct rect r1, struct rect r2){

  if(ptinrect(r1.ll,r2) == 1 && ptinrect(r1.ur,r2)==1) {return 1;}
  else return 0;
}




int main(){

struct point a,b,c,d,e,f;
  a=makepoint(1,3);
  b=makepoint(3,4);
  c=makepoint(5,7);
  d=makepoint(7,9);
  e=makepoint(9,12);
  f=makepoint(11,15);

  struct rect K,L,M;
  K.ll=b; K.ur=c;
  L.ll=a; L.ur=d;
  M.ll=d; M.ur=e;


  printf("rectinrect(K,L):%d\n",rectinrect(K,L));
  printf("rectinrect(K,M):%d\n",rectinrect(K,M));
  

return 0;
}
