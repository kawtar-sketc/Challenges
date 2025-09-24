
#include <stdio.h>


int main() {
    int i;
      int tab[5]={1,2, 3, 4,5 };//supprimer 3
   for (i=2;i<5;i++){
        tab[i]=tab[i+1];
   }

           
        return 0;
   }
   