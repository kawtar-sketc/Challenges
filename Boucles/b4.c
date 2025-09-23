#include <stdio.h>


int main() {
    int n,i;
    

    printf("entrer un nombre positive ");
   scanf("%d",&n);
  
int sum =0;

   for (i=1 ; i<=n;i++){
    if (i%2==1){
      sum=sum+i;

    }
   
  } 
      
printf ("la somme de %d premiers nombres naturels: %d",n,sum);
 return 0;
}