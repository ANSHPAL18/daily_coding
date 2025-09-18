#include <stdio.h>
void sum(int arr[],int n){
    int i,sum=0;
    for(i=0;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);

}
int main(){
    int arr[2];
    sum(arr,2);
    return 0;
}