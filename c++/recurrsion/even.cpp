#include<iostream>
using namespace std;
void fun(int n){
    if(n==2){
        cout<<n<<endl;
        return;
    }
    else{
        fun(n-2);
        cout<<n<<endl;
    }

}
int main(){
    int n;
    cin>>n;
    if(n%2==1){
        n--;
    }
    fun(n);
}