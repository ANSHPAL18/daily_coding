#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    cin>>n;
    for(row=n;row>=1;row--){
        char name='A';
        for(col=1;col<=row;col++){
            cout<<name;
        name++;
     }
     cout<<endl;
    }
}