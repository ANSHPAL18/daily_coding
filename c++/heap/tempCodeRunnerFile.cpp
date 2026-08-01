#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>q;
    q.push(10);
    q.push(40);
    q.push(1);
    q.push(5);
    cout<<q.top()<<endl;
    cout<<q.size()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.top()<<endl;
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
}