#include<iostream>
#include<vector>
using namespace std;
int main(){
    int vertices,edges;
    cin>>vertices>>edges;
    vector<vector<int>>adjmat(vertices,vector<int>(vertices,0));
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        adjmat[u][v]=weight;
    }
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
             cout<<adjmat[i][j];
        }
        cout<<endl;
    }
}