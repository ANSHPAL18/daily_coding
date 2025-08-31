#include <stdio.h>

int main(){
    int arr[6]={1,2,3,4,5,6};
    int sumodd=0;
    int sumeven=0;
    int difference;
 for(int i=0;i<=5;i++){
  if(i%2!=0){
   sumodd+=arr[i];
  }
     else {sumeven+=arr[i];}}
      difference=sumeven-sumodd;
     printf("%d",difference);
    return 0;
}