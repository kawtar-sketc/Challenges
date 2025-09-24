#include <stdio.h>
int main (){
int arr[]={1,2,3,4,5};
int max ,i;
max=arr[0];
for (i=1;i<5;i++){
if (arr[i]>max)
  max=arr[i];
}
printf("le maximun dans ce taleaux est:%d",max);



    return 0;

}