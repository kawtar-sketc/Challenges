#include <stdio.h>



int main() {
  
    int n,i;
float prix =125.00;
    printf("entrer le nbr produit   ");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++){
   prix=prix+prix*0.002*(i-1) ;
  }
printf("totzzl est : %.2f",prix);
 return 0;
}