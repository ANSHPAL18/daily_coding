#include<iostream>
using namespace std;
int binary(int arr[],int st,int x,int end){
    int mid=st+(end-st)/2;
    if(st>end){
        return -1;
    }
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){
        return binary(arr,st,x,mid-1);
    }
    else{
    return binary(arr,mid+1,x,end);
    }
}
int main(){
    int arr[]={2,4,13,5,6,41};
    int x;
    cin>>x;
    cout<<binary(arr,0,x,6);

}