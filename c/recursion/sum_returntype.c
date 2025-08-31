#include <stdio.h>
int sum(int n){
    if (n==1 || n==0)
    return n;
    int rec= n+sum(n-1);
    return rec;
}
int main(){
    int n;
    printf("enter the number: ");
    scanf("%d",&n);
    int fact=sum(n);
    printf("%d",fact);
    return 0;
}