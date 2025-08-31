#include<stdio.h>
int main(){
    int x,y;
    printf("enter the vakue of coordinates:");
    scanf("%d %d",&x,&y);
    if(x==0&&y==0){
        printf("point lies on origin");
    }
    else if(x==0){
        printf("point lies on y axis");
    }
    else if(y==0){
        printf("point lies on x axis");
    }
    else{
        printf("point does not lies on x and y axis");
    }
    return 0;

}
