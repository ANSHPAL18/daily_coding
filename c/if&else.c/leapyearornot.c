#include<stdio.h>
int main(){
    int y;
    printf("enter a year number:");
    scanf("%d",&y);
    if(y%4==0){
        printf("the year is leap year ");
    }
    else{
        printf("the yea is not a leap year");
    }
    return 0;

}