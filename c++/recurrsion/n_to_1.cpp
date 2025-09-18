#include<iostream>
using namespace std;
void fun(int n){
    if(n==1)
    cout<<1<<endl;
    else{
        cout<<n<<endl;
        return fun(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    fun(n);
}