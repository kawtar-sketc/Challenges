#include <stdio.h>
int main (){

      int t1,t2 ,n,i,j;

   printf("entrer la taile de tab1 ");
   scanf("%d",&t1);

   int  tab1[t1];

   for (i=0;i<t1;i++){
    printf("entrer tab[%d] ",i+1);
    scanf("%d",&tab1[i]);
    } 

    

   printf("entrer la taile de tab2 ");
   scanf("%d",&t2);

   int  tab2[t2];

   for (i=0;i<t2;i++){
    printf("entrer tab2[%d] ",i+1);
    scanf("%d",&tab2[i]);
    } 
     int t3=t1+t2;
    int tab3[t3];
    
   for (i=0;i<t3;i++){
    tab3[i]=tab1[i];
    } 
 
    for (i=tab1[i] ,j=0; j<t2 ; i++ ,j++){
tab3[i]=tab2[j];
    }


printf("le 1 tab est:\n");
    for (i=0;i<t1;i++){
printf("|%d|",i+1,tab1[i]);
break;
}
printf("le 2 tab est:\n");
 for (i=0;i<t1;i++){
printf("|%d|",i+1,tab2[i]);
break;
}
   printf("le  3 tab est:\n");
for (i=0;i<t3;i++){
printf("|%d|",tab3[i]);
  break;
}

    return 0;
}