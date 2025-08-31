#include<iostream>
using namespace std;
int main(){
   int n,r;
   cin>>n;
   while(n!=0){
      r=n%2;
      n=n/2;
   }
   if(r==0){
    cout<<"enter number is power of 2";
   }
   else{
    cout<<"enter number is not power of 2";
   }
}