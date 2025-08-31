#include<iostream>
using namespace std;
int sum(int arr[],int n){
     int sum=0;
     for(int i=0;i<n;i++){
        sum+=arr[i];
     }
     return sum;
}
int product(int arr[],int n){
     int p=1;
     for(int i=0;i<n;i++){
        p*=arr[i];
     }
     return p;
}
int main(){
    int n;
    cout<<"enter size=";
    cin>>n;

    int arr[n];
    cout<<"enter elements=";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<sum(arr,n)<<endl;
    cout<<product(arr,n)<<endl;
}