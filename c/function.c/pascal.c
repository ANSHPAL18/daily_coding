#include <stdio.h>
    int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
    }
    return fact ;
}
    int main(){
    int n;
    printf("enter n :");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=n-i;j++){
                printf(" ");
        }
        for(int k=0;k<=i;k++){
                            int iCj=factorial(i)/(factorial(k)*factorial(i-k));
            printf("%d ",iCj);

        }
        printf("\n");
    }
    return 0;
}