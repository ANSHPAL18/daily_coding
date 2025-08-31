#include <stdio.h>
int main(){
    int n;
    printf("enter number of elements=");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max1=a[0];
    int max2=a[0];
    for(int i=1;i<n;i++){
        if (max1<a[i]){
            max2=max1;
            max1 = a[i];
        }
        else if(max2<a[i]&&max1!=a[i]){
            max2=a[i];
        }
    }
   printf("second largest number is %d",max2);
    return 0;
}