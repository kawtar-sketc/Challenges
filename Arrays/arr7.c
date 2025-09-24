#include <stdio.h>


int main() {
int n,t,i;


printf("entrer la taille de tableaux : ");
scanf("%d",&t);
int tab[t];
for(i=0;i<t;i++){
    printf("entrer tab[%d]=",i+1);
    scanf("%d",&tab[i]);

}
  int ech;
int temp;
do{
   ech=0;
     for (i=0;i<t-1;i++){
        if (tab[i]>tab[i+1]) {
            temp=tab[i];
            tab[i]=tab[i+1];               
            tab[i+1]=temp;
            ech=1;
        }  
        
     }
     }while(ech==1);

     for(i=0;i<t;i++){
        printf("%d",tab[i]);              
     }
     return 0;
   }
   
   

