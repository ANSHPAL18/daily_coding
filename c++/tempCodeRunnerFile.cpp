#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main(){
    vector <int> vec={2,5,4,3-2,2};
    int n=5;
    int cs=0,ms=INT_MIN;
    for(int val:vec){
           cs+=val;
           ms=max(cs,ms);
           if(cs<0){
            cs=0;
           }
    }
        cout<<ms;
}
