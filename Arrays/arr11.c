
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
    
    int sum=0;
    int moy; 
    for (i=0;i<taille;i++){
      sum =sum+tab[i];
       }
    moy = sum/taille;
printf("la moyenne de elem tab est :%d",moy);

           
        return 0;
   }
   
   

