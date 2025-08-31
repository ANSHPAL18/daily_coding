#include <stdio.h>

int main(){
    int a,b,result=1;
    printf("enter number:");
    scanf("%d",&a);
    printf("enter power=");
    scanf("%d",&b);
    for(int i=1;i<=b;i++){
        result=result*a;
    }
    printf("%d",result);
    return 0;
}