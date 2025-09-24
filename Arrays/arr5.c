#include <stdio.h>
int main (){
int arr[]={1,2,3,4,5};
int min ,i;
min=arr[0];
for (i=1;i<5;i++){
if (arr[i]<min)
  min=arr[i];
}
printf("le minimum dans ce taleaux est:%d",min);
return 0;
}