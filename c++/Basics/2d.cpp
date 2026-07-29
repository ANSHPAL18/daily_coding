#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int>>nums(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>nums[i][j];
        }
    }
    for(int i=0;i<=2*(n);i++){
        for(int j=n-1;j>=0;j--){
            for(int k=n-1;k>=0;k--){
                if(j+k==i){
                    cout<<nums[j][k]<<" ";
                }
            }
        }
        cout<<endl;
    }
}