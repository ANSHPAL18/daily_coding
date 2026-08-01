#include<iostream>
using namespace std;
void heapify(int arr[],int index,int n){
    int smallest=index;
    int left=2*index+1;
    int right=2*index+2;
    if(left<n&&arr[left]<arr[smallest]){
        smallest=left;
    }
    if(right<n&&arr[right]<arr[smallest])
    smallest=right;
    if(smallest!=index){
        swap(arr[smallest],arr[index]);
        heapify(arr,smallest,n);
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void buildmaxheap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
}
int main(){
    int arr[]={10,3,8,9,513,18,14,11,70};
    buildmaxheap(arr,9);
    print(arr,9);
}