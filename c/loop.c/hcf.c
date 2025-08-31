#include <stdio.h>

int main(){
    int gcd,a,b,i;
    printf("enter two number=");
    scanf("%d %d",&a,&b);
    for(i=1;i<=a;i++){
        if(a%i==0&&b%i==0){
            gcd=i;
        }
    }
    printf("greatest common division is %d",gcd);
    return 0;
}