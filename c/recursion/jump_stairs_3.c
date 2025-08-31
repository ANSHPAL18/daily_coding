#include <stdio.h>
int stair(int n){
    if(n==1||n==2) return n;
    if(n==3) return 4;
int total_ways=stair(n-1)+stair(n-2) +stair(n-3);
return total_ways;
}
int main(){
    int n;
    printf("enter the number : ");
    scanf("%d",&n);
    int ways=stair(n);
    printf("%d",ways);

    return 0;
}