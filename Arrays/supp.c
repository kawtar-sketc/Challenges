#include <stdio.h>
int main (){
     int i ,t,pos;
printf("entrer la taille de tableaux: ");
scanf("%d",&t);
int tab[t];

for (i=0;i<t;i++){
printf("entrer tab [%d]=",i+1);
scanf("%d",&tab[i]);
}
for (i=0;i<t;i++){
printf("tab[%d]=%d\n",i+1,tab[i]);


}


int v;

  printf("entrer la valeur que tu veaux le supp: ");
  scanf("%d",&v);
  for(i=0;i<t;i++){
    if (v == tab[i]){

    for (int j=i;j<t;j++){
    tab[j]=tab[j+1];
    
  }  
  t--;
    }
   } 
 
 /*  do{
    printf("entrer la pos de nembre que tu veux le supprimer entre 0 et %d : ",t-1);
    scanf("%d",&pos);
 }while(pos<=0 || pos>t-1);
*/
 /*for (i=pos;i<t;i++){
  tab[i]=tab[i+1];
  t--;
}*/
for ( i=0;i<t;i++){
printf("tab[%d]=%d\n",i+1,tab[i]);

}

     return 0;

 }