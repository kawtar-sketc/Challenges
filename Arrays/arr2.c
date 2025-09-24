#include <stdio.h>


int main() {
    int t ,i;
  
printf ("entrer la taille de tab ");
scanf("%d",&t);
int arr[t];

for (i=0 ;i <t;i++){
       printf("entrer arr[%d]\n",i);
          scanf("%d",&arr[i]);

          

}
for (i=0 ;i <t;i++){
       printf("arr[%d]=%d \t",i+1,arr[i]);
       }  
     return 0;
   }
   
   

