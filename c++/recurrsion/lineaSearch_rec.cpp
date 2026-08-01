#include<iostream>
using namespace std;
int linear(int arr[],int index,int x,int n){
    if(index==n){
        return -1;
    }
    if(arr[index]==x){
        return index;
    }
    return linear(arr,index+1,x,n);
}
int main(){
    int arr[]={2,4,13,5,6,41};
    int x;
    cin>>x;
    cout<<linear(arr,0,x,6);

}