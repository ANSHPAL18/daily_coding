#include <stdio.h>

int main(){
    int n,es=0,os=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            es=es+i;
        }
        else{
            os=os+i;
        }
    }
    printf("sum of even number is %d \nsum of odd number is %d",es,os);
    return 0;
}