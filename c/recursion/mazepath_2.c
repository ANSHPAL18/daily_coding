#include <stdio.h>
int maze(int a, int b){
    int rightways=0;
    int downways=0;
    if(a==1&&b==1) return 1;
    if(a==1){
        rightways+=maze(a,b-1);
    }
   if(b==1){
    downways+=maze(a-1,b);
   }
   if(a>1&&b>1){
    rightways+=maze(a,b-1);
    downways+=maze(a-1,b);
   }
    
    int totalways=rightways+downways;
    return totalways;
}
int main(){
    int a;
    printf("enter the number of rows of the maze : ");
    scanf("%d",&a);
    int b;
    printf("enter the number of columns of the maze : ");
    scanf("%d",&b);
    int no_of_ways=maze(a,b);
    printf("%d",no_of_ways);
    return 0;
}