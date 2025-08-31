#include <stdio.h>

int main(){
    int a=0;
    int n;
    printf("let suppose any number: ");
    scanf("%d",&n);
    for (int i = 2; i < n; i++)
    {
        if(n%i==0){
        a+=1;}
    }    
       if(a>=1){
        printf("the %d is not a prime number\n",n);
       }
       else{
           printf("the number is a prime number\n");
        }
    
    return 0;
}