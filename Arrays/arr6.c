#include <stdio.h>
int main (){

int  t,i,f;
printf("entrer la taille de tableaux ");
scanf("%d",&t);
int arr[t];
for (i=0;i<t;i++){
 printf("entrer arr[%d]=\n",i);
 scanf("%d",&arr[i]);
}
for (i=0;i<t;i++){
 printf(" arr[%d]= %d\n",i,arr[i]);
 
}

 printf("entrer le facteur : ");
scanf("%d",&f);

    for (i=0;i<t;i++){
  arr[i]=arr[i]*f;
 
}
for (i=0;i<t;i++){
 printf(" arr[%d]= %d\n",i,arr[i]);
 
}
return 0;
}