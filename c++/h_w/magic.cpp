#include<iostream>
using namespace std;
int main(){
    int n,rem,sum=0,rem2,magic=0;
    cin>>n;
    while(n!=0){
        rem=n%10;
        sum+=rem;
        n/=10;
    
    if(sum>=10){
        while(sum!=0){
          rem2=sum%10;
         magic+=rem2;
         sum/=10;
        }
    }
}
    if(magic==1) cout<<"magic number";
    else cout<<" not a magic number";
return 0;
}