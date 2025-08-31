#include <stdio.h>
int main(){
    int n;
    printf("enter size of an array=");
    scanf("%d",&n);
    int a[n];
    int pos=-1,element;
    for(int i=0;i<n;i++){
       scanf("%d",&a[i]);
    }
    printf("element to be searched=");
    scanf("%d",&element);
    for(int i=0;i<n;i++){
        if(a[i]==element){
            pos=i+1;
            printf("searched element index is %d and its position is %d and its value is %d",i,pos,a[i]);
            break;
        }
    }
    if(pos==-1){
        printf("element not found");
    }
    return 0;
}