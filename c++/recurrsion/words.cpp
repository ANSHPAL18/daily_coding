#include<iostream>
using namespace std;
int words(string s,int i){
    if(i>=s.size()) return 0;
    while(i<s.size()&&s[i]==' ') i++;
    if(i>=s.size()) return 0;
    while(i<s.size()&&s[i]!=' ') i++;
    return 1+ words(s,i);
}
int main(){
    string s="school is ";
    cout<<words(s,0);
}