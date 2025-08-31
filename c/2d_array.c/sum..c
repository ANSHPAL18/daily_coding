#include <stdio.h>

int main(){
    int m,n,i,j;
    printf("enter number of rows in a matrix=");
    scanf("%d",&m);
    printf("enter number of columns in a matrix=");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n");
    // for(i=0;i<m;i++){
    //     int rowsum=0;
    //     for(j=0;j<n;j++){
    //         printf("%d\t",a[i][j]);
    //         rowsum=rowsum+a[i][j];
    //     }
    //     printf("=%d",rowsum);
    //     printf("\n");
    // }
    // int sum=0;
    //  for(i=0;i<m;i++){
    //     for(j=0;j<n;j++){
    //     sum=sum+a[i][j]; 
    //     }
    // }
    //    for(i=0;i<m;i++){
    //        int colsum=0;
    //     for(j=0;j<n;j++){
    //     colsum=colsum+a[j][i];      
    //     }
    //     printf("%d\t",colsum);
    // }
    int dgsum=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(i==j||i+j==n-1){
            dgsum=dgsum+a[i][j];
            }
        }
    }
    printf("\nsum of all diagonal elements=%d",dgsum);
    // printf("\nsum of all elements in matrix=%d",sum);
    return 0;
}