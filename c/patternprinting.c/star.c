#include <stdio.h>

int main(){
    int m,n;
    printf("enter number of rows : ");
    scanf("%d",&m);
    printf("enter number of columns : ");
    scanf("%d",&n);
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i+j==n+1) printf("*");
            else  printf(" ");
        }
        printf("\n");
    }
    return 0;
}