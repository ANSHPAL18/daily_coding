#include<stdio.h>
int main(){
    int a,b;
    printf("enter the value of dividend : ");
    scanf("%d",&a);
    printf("enter the value of divisor : ");
    scanf("%d",&b);
    int q=a/b;
    int r=a - b*q;
    printf("the remainder when %d is divided by %d : %d",a,b,r);

    return 0;
}