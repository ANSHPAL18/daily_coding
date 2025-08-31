#include<iostream>
using namespace std;
int main(){
    int n,row,col;
    char name;
     cin>>n;
    for(row=1;row<=n;row++){
        for(col=1;col<=n-row;col++){
            cout<<" ";
        }
        for(name='A';name<='A'+row-1;name++){
        
          cout<<name;
        }
        for(name='A'+row-2;name>='A';name--){
            cout<<name;
        }
     
        cout<<endl;
    }
    return 0;
}
