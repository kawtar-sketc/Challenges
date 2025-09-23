#include <stdio.h>


int main() {
    int n,i;
    int fact =1;
   do {
    printf("entrer un nombre positive ");
   scanf("%d",&n);
   if (n<0 ){
    printf("error!! ");
   }
   }while(n<0);

   for (i=1 ; i<=n;i++){
    fact=fact*i;

 
  } 
      
printf ("le factorielle de %d  est %d  :",n,fact);
 return 0;
}