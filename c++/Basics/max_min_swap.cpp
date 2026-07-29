#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of an array=";
    cin>>n;
    int a[n];
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    int min=a[0];
    int max=a[0];
    for(int i=0;i<n;i++){
      if(a[i]<min){
        min=a[i];
      }
    }
    for(int i=0;i<n;i++){
      if(a[i]>max){
        max=a[i];
      }
    }
    swap(min,max);
    for(int i=0;i<n;i++){
         cout<<a[i]<<" ";
    }
    
}