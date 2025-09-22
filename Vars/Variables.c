#include <stdio.h>
#include <stdlib.h>

int main() {
    char nom[20] ;
    char prenom[20];
    int age;
    char sexe[10];
    char email[30];
  printf("entrer le nom ");
  scanf("%s",&nom);
    printf("entrer le prenom ");
  scanf("%s",&prenom);
    printf("entrer l'age ");
  scanf("%d",&age);
    printf("entrer le sexe ");
  scanf("%s",&sexe);
    printf("entrer l'adresse email ");
  scanf("%s",&email);
  
  printf("le nom est:%s\n",nom);
    printf("le prenom est:%s\n",prenom);
      printf("l'age est:%d\n",age);
        printf("le sexe est:%s\n",sexe);
          printf("l'adresse email est:%s\n",email);

    return 0;
}