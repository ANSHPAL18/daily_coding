#include<iostream>
using namespace std; 
bool palindrome(string str,int st,int end){
    if(str[st]!=str[end]){
        return 0;
    }
    if(st>=end) return 1;
    else{  
       return palindrome(str,st+1,end-1);
      }
}
int main(){
    string str="NAMAN";
    cout<<palindrome(str,0,4);
}