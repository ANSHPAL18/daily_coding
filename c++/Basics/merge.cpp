#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int low,int high){
    int pivot=arr[high];
    int i=low-1;
    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void quicksort(vector<int>&arr,int low,int high){
    if(low<high){
    int pivot=partition(arr,low,high);
    quicksort(arr,low,pivot-1);
    quicksort(arr,pivot+1,high);
    }
}
int main(){
    vector<int>arr={6,5,4,7,8,2};
    int n=arr.size();
    for(int num:arr){
        cout<<num<<" ";
    }
    cout<<endl;
    quicksort(arr, 0, n - 1);
    cout<<"sorted array: ";
    for(int num:arr){
        cout<<num<<" ";
    }
    return 0;
}