#include <stdio.h>
#include <stdlib.h>%


int main() {
    int d1 ,d2, d3, d4 ;
    int n,res;
  printf("entrer un nombre a quatre chifres");
  scanf("%d",&n);
   d1=n%10;
   d2=(n/10)%10;
   d3=(n/100)%10;
   d4=n/1000;
   res = d1*1000+d2*100+d3*10+d4;
   printf("l'inverse de ce nombre est %d",res);
 return 0;
}