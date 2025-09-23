#include <stdio.h>
#include <math.h>


int main() {
  
    int puiss,b,ex;

    printf("entrer la base  ");
   scanf("%d",&b);
    printf("entrer l'exposant ");
   scanf("%d",&ex);
  
   
       puiss=pow(b,ex);
        
   
     printf("%d",puiss);

 return 0;
}