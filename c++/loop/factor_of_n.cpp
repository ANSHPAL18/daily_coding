// #include<iostream>
// using namespace std;
// int main(){
//     int n,f=1;
//     cin>>n;
//     while(n!=0){
//         int r=n%10;
//         f=f*r;
//         n=n/10;
//     }
//     cout<<f;
// }
#include<iostream>
using namespace std;
int main(){
    int a[]={2,5343,56,3,23,56,43,6};
    int n=sizeof(a)/4;
    int b[n];
    for(int i=0;i<n;i++){
        b[i]=a[n-1-i];
        cout<<b[i]<<" ";
    }
}