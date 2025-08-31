#include<stdio.h>
int main(){
    float x;
    printf("enter value of x");
    scanf("%f",&x);
    int y=x;
    float z=x-y;
    printf("the fractional part of number is:%f",z);
    return 0;

}