#include <stdio.h>
int main (){
   
int res;
int a , b;
    printf("entrer a");
    scanf("%d",&a);
    printf("entrer b");
    scanf("%d",&b);
    res=a+b;
    if (a==b){
       res=(a+b)*3;
    }
    printf("%d",res);
 return 0 ;
}
