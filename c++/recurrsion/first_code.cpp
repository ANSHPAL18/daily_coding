#include<iostream>
using namespace std;
void fun(int n){
    if(n==0)
    cout<<"happy birthday\n";
    else{
    cout<<n<<"days left for birthday\n";
    return fun(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
}