#include<iostream>
using namespace std;
void funrev(int arr[],int n){
    if(n==-1) return;
    cout<<arr[n]<<" ";
    funrev(arr,n-1);
}

void fun(int arr[],int n,int index){
    if(index>n) return;
    cout<<arr[index]<<" ";
    fun(arr,n,index+1);
}
int main(){
    int arr[]={2,4,1,3,5};
    funrev(arr,4);
    cout<<endl;
    fun(arr,4,0);
}