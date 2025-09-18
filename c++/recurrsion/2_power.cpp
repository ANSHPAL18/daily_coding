#include<iostream>
using namespace std;
int power(int num,int n){
    if(n==0){
        return 1;
    }
    return 2*power(2,n-1);
}
int main(){
    int n;
    cin>>n;
   cout<<power(2,n);
  
    return 0;
}