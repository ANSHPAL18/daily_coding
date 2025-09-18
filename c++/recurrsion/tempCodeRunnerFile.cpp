#include<iostream>
using namespace std;
int minimum(int arr[],int index,int n){
    if(index==n-1) 
    return arr[index];
    return min(arr[index],minimum(arr,index+1,n));
}
int main(){
    int arr[]={2,4,1,3,5};
    cout<<endl;
    cout<<minimum(arr,0,5);
}