#include<stdio.h>
int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if(x%5==0||x%3==0){
        printf("divisible by 3 or 5");
    }
    else{
        printf("not divisible by 3 or 5");
    }
    return 0;
}