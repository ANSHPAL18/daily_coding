#include <stdio.h>
int min(int a,int b){
    if(a<b) return a;
    else return b;
}
int gcd(int a, int b){
    int HCF;
    for(int i=1;i<=min(a,b);i++){
        
        if(a%i==0 && b%i==0){
            HCF=i;
        }
    }
    return HCF;
}
int main(){
    int a;
    printf("enter 1st number : ");
    scanf("%d",&a);
    int b;
    printf("enter 2nd number : ");
    scanf("%d",&b);
   int hcf=gcd(a,b); 
   printf("the hcf of %d and %d is : %d",a,b,hcf);
    return 0;
}