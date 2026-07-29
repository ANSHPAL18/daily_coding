#include<iostream>
using namespace std;
int main(){
    int a=0,b=1,c;
    int n;
    cout<<"enter position=";
    cin>>n;
    for(int i=2;i<=n;i++){
      c=a+b;
     a=b;
     b=c;
    }
    cout<<"the "<<n<<"th fibo term is:"<<c;
}