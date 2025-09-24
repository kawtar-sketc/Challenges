#include <stdio.h>
int main (){
   
    int x=42;
    int n;

    
    do{
  printf("\n proposer un nombre");
  scanf("%d",&n);
  if (n<x)
    printf("trop petit \n")  ;
     if (n>x)
    printf("trop grande \n")  ;
     if (n==x)
    printf("bravo")  ;
    

    }while(n!=x);
     return 0;
}