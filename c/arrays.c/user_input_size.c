 #include <stdio.h>
 
 int main(){
    int n;
    printf("enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    for(int i=0;i<=n-1;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("the sum of %d digits is: %d ",n,sum);
    return 0;
 }