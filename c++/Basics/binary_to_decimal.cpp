#include<iostream>
using namespace std;
int binary(int deci_Num){
    int pow=1,ans=0;
    while(deci_Num>0){
        int r=deci_Num%2;
        ans+=(r*pow); 
        deci_Num=deci_Num/2;
        pow*=10;
    }
    return ans;

}
int main(){
    int deci_num;
    cout<<"enter decimal number=";
    cin>>deci_num;
    cout<<binary(deci_num);
}