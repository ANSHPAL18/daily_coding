#include<iostream>
using namespace std;
int main(){
    int arr[2000],n;
    cout<<"enter size of an array";
    cin>>n;
    cout<<"enter elements in an array=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
          swap(arr[i],arr[index]);
        }
    }
    cout<<"after sorting\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}