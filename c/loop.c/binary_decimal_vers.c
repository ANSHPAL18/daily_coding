#include<stdio.h>
int main(){
    int n,r,base=1,b=0;
    printf("enter decimal number=");
    scanf("%d",&n);
    while(n!=0){
        r=n%2;
        b=b+base*r;
        base=base*10;
        n=n/2;
    }
    printf("binary=%d",b);
}