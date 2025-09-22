#include <stdio.h>
#include <stdlib.h>

int main() {
   int c;
    float k;
  printf("entrer la temperature en Celsius ");
  scanf("%d",&c);
     k=c+273.15;
  printf("la temperature en Kelvin est %.2f",k);
   
 return 0;
}