#include <stdio.h>



int main() {
  
    int n,i;
float prix =125.00;
float total =0;
    printf("entrer le nbr produit   ");
   scanf("%d",&n);
   
   for(i=1;i<=n;i++){
   total=total+prix-prix*0.02*(i-1) ;
   
  }
printf("totzzl est : %.2f",total);
 return 0;
}



