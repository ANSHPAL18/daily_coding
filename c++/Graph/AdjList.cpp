#include<iostream>
#include<vector>
using namespace std; 
int main(){
    int vertices,edges; 
    cin>>vertices>>edges; 
    vector<pair<int,int>>AdjLst[vertices];
    int u,v,weight;
    for(int i=0;i<edges;i++){
        cin>>u>>v>>weight;
        AdjLst[u].push_back(make_pair(v,weight)); 
        // AdjLst[v].push_back(make_pair(u,weight)); 
    }
    for(int i=0;i<vertices;i++){
        cout<<i<<"->";
        for(int j=0;j<AdjLst[i].size();j++){
            cout<<AdjLst[i][j].first<<" "<<AdjLst[i][j].second<<" ";
        }
        cout<<endl;
    }
}
