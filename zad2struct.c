#include<stdio.h>

struct point {
  int x;
  int y;
};

struct rect {
  struct point ll; /* lower left */
  struct point lr; /* lower right */
  struct point ul; /* upper left */
  struct point ur; /* upper right */
};

struct point makepoint(int x, int y) {
  struct point tmp;
  tmp.x = x;
  tmp.y = y;
  return tmp;
}


/* Funkcja makerect tworzy prostok¹t. Wczytuje wartoœci ll i ur i wylicza dwie pozosta³e wspó³rzêdne prostok¹ta */
struct rect makerect(struct point ll, struct point ur) {
  struct rect tmp;
  tmp.ll.x = ll.x; tmp.ll.y = ll.y;
  tmp.lr.x = ur.x; tmp.lr.y = ll.y;
  tmp.ul.x = ll.x; tmp.ul.y = ur.y;
  tmp.ur.x = ur.x; tmp.ur.y = ur.y;
  
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


/*Funkcja disjointrect sprawdza, czy któryœ z czterech punktów prostok¹ta r1 le¿y w prostok¹cie r1,
je¿eli nie to prostok¹ty s¹ roz³¹czne */
int disjointrect(struct rect r1, struct rect r2){
if(ptinrect(r1.ll,r2)==1 || ptinrect(r1.lr,r2)==1 || ptinrect(r1.ul,r2)==1 || ptinrect(r1.ur,r2)== 1) return 0;
else return 1;
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
  K = makerect(a,c);
  L = makerect(c,d);  
  M = makerect(e,f);


  printf("disjointrect(K,L): %d\n",disjointrect(K,L));
  printf("disjointrect(L,M): %d\n",disjointrect(L,M));
  printf("disjointrect(K,M): %d\n",disjointrect(K,M));

return 0;
}
