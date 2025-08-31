#include<iostream>
#include<limits.h>
using namespace std;
int secondLargest(int a[],int size){
    int max=INT_MIN;
    int secondMax=INT_MIN;
    for(int i=0;i<size;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=0;i<size;i++){
        if(secondMax<a[i]&&a[i]!=max){
            secondMax=a[i];
        }
    }
    return secondMax;
}
int main(){
    int n;
    cout<<"enter size of an array=";
    cin>>n;
    int a[n];
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"second largest element in array="<< secondLargest(a,n);
}