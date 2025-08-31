#include <stdio.h>

int main(){
    int i,j,m,n,s,t;
    printf("enter number of rows of 1st matrix=");
    scanf("%d",&m);
    printf("enter number of column of 1st matrix=");
    scanf("%d",&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
        printf("\nfirst matrix-->\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("enter number of rows of 2nd matrix=");
    scanf("%d",&s);
    printf("enter number of rows of 2nd matrix=");
    scanf("%d",&t);
    int b[s][t];
    for(i=0;i<s;i++){
        for(j=0;j<t;j++){
            scanf("%d",&b[i][j]);
        }
    }
        printf("\nsecond matrix-->\n");
    for(i=0;i<s;i++){
        for(j=0;j<t;j++){
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n!=s){
        printf("matrices cannot be  multiplied");
    }
    else{
    int cr=s;
    int res[i][j];
    for(i=0;i<m;i++){
        for(j=0;j<t;j++){
            res[i][j]=0;
            for(int k=0;k<cr;k++){
                res[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    printf("\nresultant matrix-->\n");
    for(i=0;i<m;i++){
        for(j=0;j<t;j++){
            printf("%d\t",res[i][j]);
        }
        printf("\n");
    }
    }
    return 0;
}