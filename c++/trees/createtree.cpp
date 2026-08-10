#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
    int data;
    node* left ,*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};
node* binary_tree(){
    int x;
    cin>>x;
    if(x==-1){
        return NULL;
    }
    node* temp=new node(x); 
    cout<<"enter left child of "<<x<<":";
    temp->left=binary_tree();
    cout<<"enter right child of "<<x<<":";
    temp->right=binary_tree();
    return temp;
}
int main(){
    cout<<"enter root node=";
    node* root;
    root=binary_tree();
}