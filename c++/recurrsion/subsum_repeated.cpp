#include<iostream>
using namespace std;
int subsum(int arr[],int index,int n,int sum){
    if(sum==0) return 1;
    if(sum<0||index==n) return 0;
    return (subsum(arr,index+1,n,sum-arr[index])+subsum(arr,index+1,n,sum));
}
int main(){
    int arr[]={2,4,6,1};
    int sum=6;
   cout<<subsum(arr,0,4,6)<<endl;
}
