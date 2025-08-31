#include<stdio.h>
int main(){
    int x;
    printf("enter value of length:");
    scanf("%d",&x);
    int y;
    printf("enter value of breadth:");
    scanf("%d",&y);
    int a=x*y;
    int p=2*(x+y);
    if(a>p){
        printf("area is greater than perimeter");
    }
    else{
        printf("perimeter is greater than area");
    }
    return 0;

}