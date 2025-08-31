#include <stdio.h>

int main(){
    int factorial=1;
int n;
    printf("the factorial of a number: ");
    scanf("%d",&n);
 for (int i = 1; i <= n; i++)
 {
    factorial=factorial*i;
 }
 printf("the factoriaL OF %d IS %d",n,factorial);
 
    return 0;
} 