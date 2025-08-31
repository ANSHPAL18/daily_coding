#include <stdio.h>
#include<limits.h>
int main(){
    int arr[5]={2,34,45,21,23};
    int min=INT_MAX;
    for(int i=0;i<=4;i++){
        if (min>arr[i]){
            min = arr[i];
        }
    }
   printf("%d",min);
    return 0;
}