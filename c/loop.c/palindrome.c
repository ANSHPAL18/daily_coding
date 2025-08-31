#include <stdio.h>

int main(){
    int n,r,n1,rev=0;
    printf("enter number:");
    scanf("%d",&n);
    n1=n;
    while (n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==n1){
        printf("palindrome number");
    }
    else{
        printf("not an palindrome number");
    }
    return 0;
}