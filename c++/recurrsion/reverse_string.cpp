#include<iostream>
using namespace std;
void rev(string &str,int end,int start){
    if(start>=end) return;
        swap(str[start],str[end]);
        return rev(str,end-1,start+1);
    
   
}
int main(){
    string str="technical";
    int n=str.length();
    rev(str,n-1,0);
    cout<<str;
}