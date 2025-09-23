#include <stdio.h>


int main() {
    int n,i;
    

    printf("entrer un nombre positive ");
   scanf("%d",&n);
  int count =0;
   for (i=1 ; count<n;i++){
    if (i%2==1){

     printf(" %d\n", i);
     count++;
    }
    
  } 
      

 return 0;
}