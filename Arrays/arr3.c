#include <stdio.h>


int main() {
    int t,n ,i;
  printf("entrer la taille de tab");
  scanf("%d",&t);
  int tab[t];
  for(i=0;i<t;i++){
    printf("entrer tab[%d]=",i);
    scanf("%d",&tab[i]);

  }
  int sum=0;
  for(i=0;i<t;i++){
    sum=sum+tab[i];
  }
  printf("la somme des elemnts est %d",sum);
     return 0;
   }
   
   

