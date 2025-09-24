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
    for (i=0;i<taille;i++){
       if (tab[i]%2==1){
        printf("tab[%d]=%d\n",i+1,tab[i]);
       }

          } 
        return 0;
   }
   
   

