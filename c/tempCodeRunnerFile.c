#include<stdio.h>
void linear(int a[],int n,int x){
    int flg=1,i;
        for(i=0;i<n;i++){
        if(a[i]==x){
           flg=0;
           break;
        }
        }
      if(flg==0){
        printf("element found at %dth position",i+1);
      }
      else{
        printf("element not found in this given array");
      }
    
   
}
int main(){
   int n;
   printf("enter size=");
   scanf("%d",&n);
   int a[n];
   for (int  i = 0; i <n; i++)
   {
     scanf("%d",&a[i]);
   }
   int x;
   printf("element to be searched=");
   scanf("%d",&x);
   linear(a,n,x);
   
}