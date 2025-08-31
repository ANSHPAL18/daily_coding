#include<iostream>
#include<vector>
void sortedSquareArray(vector<int> &v){
    vector<int> ans;
    int leftptr=0;
    int rightptr=v.size()-1;
    while(leftptr<=rightptr){
        if(abs(v[leftptr])<abs(v[rightptr])){
           ans.push_back(v[rightptr]*v[rightptr]);
           rightptr--;
        }
        else{
            ans.push_back(v[leftptr]*v[leftptr]);
            leftptr++;
        }
    } 
   for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    sortedSquareArray(v);
}