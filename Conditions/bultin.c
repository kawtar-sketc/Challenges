#include <stdio.h>
int main(){
    int note; 
  printf("entrer la note de bultin : ");
  scanf("%d",&note);

    if (note<10)
    printf("echec");

  if (note>= 10 && note<=12  )
    printf("passable");
 
  if (note>= 13 && note<=15  )
    printf("assez bien"); 

  if (note >= 16 && note <=18)
  printf("Bien"); 
 
  if (note>=19 && note<=20  )
    printf("Exellent");
  
   return 0;

}

