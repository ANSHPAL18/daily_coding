#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int value){
        data=value;
        next=NULL;
    }
};
Node* insertLL(int arr[],int index,int size,Node* prev){
    if(index==size){
        return prev;
    }
    Node* temp=new Node(arr[index]);
    temp->next=prev;
    return insertLL(arr,index+1,size,temp);
}
int main(){
    Node *head;
    head=NULL;
    int arr[]={1,4,6,5,3};
     head=insertLL(arr,0,5,NULL);
    Node* temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}