#include<iostream>
using namespace std;
void lowtoup(string &str,int index){
    if(index==-1) return ;
    str[index]='A'+str[index]-'a';
    return lowtoup(str,index-1);
   
}
int main(){
    string str="technical";
    int n=str.length();
    lowtoup(str,n-1);
    cout<<str;
}