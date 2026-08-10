#include<iostream>
using namespace std;
class node{
    public:
    int data,height;
    node* left,*right;
    node(int val){
        data=val;
        height=1;
        left=right=NULL;
    }
};
int getheight(node* root){
    if(!root) return 0;
    return root->height;
}
int getbalance(node* root){
    return getheight(root->left)-getheight(root->right);
}
node* rightrotation(node* root){
    node* child=root->left;
    node* childright=child->right;
    child->right=root;
    root->left=childright;

   root->height=1+max(getheight(root->left),getheight(root->right));
   child->height=1+max(getheight(child->left),getheight(child->right));
   return child;
}
node* leftrotation(node* root){
    node* child=root->right;
    node* childleft=child->left;
    child->left=root;
    root->right=childleft;

   root->height=1+max(getheight(root->left),getheight(root->right));
   child->height=1+max(getheight(child->left),getheight(child->right));
   return child;
}
node* insert(node* root,int key){
    if(!root) return new node(key);
    if(key<root->data)
    root->left=insert(root->left,key);
    else if(root->data<key)
    root->right=insert(root->right,key);
    else
    return root;
    //height
    root->height=1+max(getheight(root->left),getheight(root->right));
    //balance
    int balance=getbalance(root);
    //LL
    if(balance>1&&key<root->left->data){
       return rightrotation(root);
    }
    //RR
    else if(balance<-1&&key>root->right->data){
       return  leftrotation(root);
    }
    //LR
    else if(balance>1&&key>root->left->data){
       root->left= leftrotation(root->left);
       return rightrotation(root);
    }
    //RL
    else if(balance<-1&&key<root->right->data){
       root->right= rightrotation(root->right);
       return leftrotation(root);
    }
   //No unbalancing
   else{
    return root;
   }
}
void preorder(node* root){
    if(!root) return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node* root){
    if(!root) return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
   node* root=NULL;
  root=insert(root,10);
  root=insert(root,20);
  root=insert(root,30);
  root=insert(root,50);
  root=insert(root,70);
  root=insert(root,50);
  root=insert(root,100);
  root=insert(root,95);
  cout<<"preorder"<<endl;
  preorder(root);
  cout<<endl;
  cout<<"inorder"<<endl;
  inorder(root);
}