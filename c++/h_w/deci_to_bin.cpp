#include<iostream>
using namespace std;
int decimal(int bin_Num){
    int pow=1,ans=0;
    while(bin_Num>0){
        int r=bin_Num%10;
        ans+=(r*pow); 
        bin_Num=bin_Num/10;
        pow*=2;
    }
    return ans;

}
int main(){
    int bin_Num;
    cout<<"enter binary number=";
    cin>>bin_Num;
    cout<<decimal(bin_Num);
}