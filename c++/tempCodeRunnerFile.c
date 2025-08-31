#include<iostream>
using namespace std;
int main(){
    int arr[1000],n;
    scanf("%d",&n);
    printf("enter elements=");
    for(int i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    int prefix[1000];
    int prefix[0]=arr[0];
    for(int i=1;i<n-1;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }
     for(int i=0;i<n;i++){
        printf("%d ",prefix[i]);
    }

}