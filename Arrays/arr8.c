#include <stdio.h>


int main() {
    int taille ,n,i;

   printf("entrer la taile de tab ");
   scanf("%d",&taille);

   int  tab[taille];

   for (i=0;i<taille;i++){
    printf("entrer tab[%d] ",i+1);
    scanf("%d",&tab[i]);
   }
   printf("entrer element de recherche ");
   scanf("%d",&n);
   int trouve=0;
   for (i=0;i<taille;i++){
    if (tab[i]==n){
        printf("le nombre %d est trouve dans tab[%d]",n,i+1);
trouve =1;
    }

   }
   if (!trouve){
        printf("le nombre est introuvable!");
    }
        return 0;
   }
   
   

