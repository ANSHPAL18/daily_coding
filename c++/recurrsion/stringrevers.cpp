#include<iostream>
using namespace std;
string reverse(string str,int i){
    if(i<0) return "";
    return str[i]+reverse(str,i-1);
}
int main(){
    string s="aditya";
    cout<<reverse(s,s.size()-1);
}