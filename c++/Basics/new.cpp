#include<iostream>
using namespace std;
int main(){
    string s="heelo world";
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    i--;
    
    cout<<i<<endl;
    int count=0;
    while(s[i]!=' '){
          count++;
          i--;
    }
  cout<<count;
}