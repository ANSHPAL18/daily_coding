#include <stdio.h>
int fibo(int n){
if(n==11||n==2) return 1;
int rec1=n-1;
int rec2=n-2;
int sum=rec1+ rec2;
return sum;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int x=fibo(n);
    printf("%d",x);

    return 0;
}