#include <stdio.h>
#include <math.h>


int main() {
  
    int n ;
    printf("entrer un nombre ");
    scanf("%d",&n);
    int count = 0;
    do {
        n=n/10;
        count++;
    }while(n!=0);
    printf("le nombre des chifres est :%d",count);
 return 0;
}