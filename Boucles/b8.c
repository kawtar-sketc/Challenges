#include <stdio.h>
int main (){
    int i, n;
printf("entrer un nombre ");
scanf("%d",&n);
int sum =0 ;
for(i=0;i<=n;i++){
  sum=sum+i;
}  
printf("la somme des %d premiers entiers est:%d",n,sum);
  return 0;

}