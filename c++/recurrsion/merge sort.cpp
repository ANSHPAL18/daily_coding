#include<iostream>
#include<vector>
using namespace std;
void merge(int arr[],int start,int mid,int end){

    vector<int>temp(end-start+1);
    int left=start,right=mid+1,index=0;
    while(left<=mid&&right<=end){
        if(arr[left]<=arr[right]){
            temp[index]=arr[left];
            left++,index++;
        }
        else{
            temp[index]=arr[right];
            index++,right++;
        }
    }
    while(left<=mid){
        temp[index]=arr[left];
        index++,left++;
    }
    while(right<=end){
        temp[index]=arr[right];
        index++,right++;
    }
    index=0;
    while (start<=end){
          arr[start]=temp[index];
          index++,start++;
    }
    
}
void mergesort(int arr[],int start,int end){
    if(start==end) return;
    int mid=start+(end-start)/2;
    mergesort(arr,start,mid);
    mergesort(arr,mid+1,end);
    merge(arr,start,mid,end);
       
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergesort(arr,0,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


}