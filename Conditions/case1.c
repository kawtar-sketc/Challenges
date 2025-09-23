#include <stdio.h>
int main(){
  
  int a, b, c; 
    printf("entrer  3 nombres positives ");
    scanf("%d\n%d\n%d",&a,&b,&c);
    if (a+b>c || a+c>b ||b+c>a  ){
      if (a==b==c){
        printf("Equilateral ");
      }else if (a==b && a==c && b==a && b ==c){
     printf("Isocele "); 
      } else if (a!=b && a!=c && b!=c ){
        
     printf("Scalene ");

      }
        }else {
        printf("les trois valeurs ne peuvent pas  former un triangle");
      }
    
   return 0;
}