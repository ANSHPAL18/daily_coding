#include<iostream>
using namespace std;
int main(){
    string s;
   getline(cin,s);
    cout<<s<<endl;
    cout<<s.size()<<endl;
    string s1="ansh",s2="pal";
    cout<<s1.append(s2);
    string s4="AI is a useful \"tool\"";
    cout<<s4<<endl;
    string s5="ANSH PAL";
    int n=s5.size();
    int st=0,end=n-1;
    while(st<=end){
        swap(s5[st],s5[end]);
        st++,end--;
    }
    cout<<s5;
}