#include <stdio.h>
int main(){
 int RevenuAnn;
   int ScoreCredit;
    int DurePret;
     printf("entrer le Revenu \n ");
     scanf("%d",&RevenuAnn );
     printf("entrer le Score de Credit  \n");
     scanf("%d",&ScoreCredit);
     printf("entrer le Duree du pret \n ");
     scanf("%d",&DurePret  );


     if (RevenuAnn >= 30000 && ScoreCredit >= 700 &&    DurePret  <= 10  ){
        printf("eligible");
     }else if (RevenuAnn >= 30000 && ScoreCredit >= 650 &&    DurePret  <= 15  ){
        printf("eligible avec conditions");
     }else if (RevenuAnn >= 30000 && ScoreCredit < 650 &&    DurePret  >15  ){
        printf(" Non eligible");
        
     }else {
        printf("error");
     }




     


return 0;
}



