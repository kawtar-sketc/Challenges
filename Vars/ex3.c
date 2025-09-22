

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
  float const p=3.14;
  int r;
  float vol;
  printf("entrer le rayon de sphere");
  scanf("%d",&r);
 vol = (4.0/3.0) * p * pow(r, 3);


   printf("le volume est :%.2f",vol);
 return 0;
}






