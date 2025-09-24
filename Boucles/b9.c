#include <stdio.h>
int main (){
    int i, res,n;
    int  a, b, c, d; 
printf("entrer un nombre ");
scanf("%d",&n);
i=0;

 a=n%10;
b=(n/10)%10;
c=(n/100)%10;
d=n/1000;
res=a*1000+b*100+c*10+d;

printf("%d",res);
  return 0;

}