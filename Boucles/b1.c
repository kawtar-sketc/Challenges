#include <stdio.h>


int main() {
    int n,i,res ;
   printf("entrer un nombre ");
   scanf("%d",&n);
   for (i=0 ; i<=10;i++){
    res=n*i;
printf ("%d*%d = %d \n",n,i,res);
   }
   
   
 return 0;
}