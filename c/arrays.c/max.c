#include <stdio.h>
int main(){
    int a[100],n;
    printf("enter number of elements=");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int max=a[0];
    int min=a[0];
    for(int i=1;i<n;i++){
        if (max<a[i]){
            max = a[i];
        }
        if(min>a[i]){
            min=a[i];
        }
    }
   printf("MAXIMUM=%d\n",max);
   printf("MINIMUM=%d",min);
    return 0;
}