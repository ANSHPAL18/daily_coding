#include <stdio.h>

int main(){
    int c,n,a=0,b=1;

    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(int i=2;i<n;i++){
       c=a+b;
       printf("%d\n",c);
       a=b;
       b=c;
    }
    return 0;
}