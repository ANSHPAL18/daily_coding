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
int main(){
    Node *head,*tail;
    head=NULL;
    tail=NULL;
    int arr[]={1,4,6,5,3};
    for(int i=0;i<5;i++){
        if(head==NULL){
            head=new Node(arr[i]);
            tail=head;
        }
        else{
            tail->next=new Node(arr[i]);
            tail=tail->next;
        }
    }
    if(head!=NULL){
        if(head->next==NULL){
            Node* temp2=head;
            delete temp2;
            head=NULL;
        }
        else{
            Node* curr=head;
            Node* prev=NULL;
            while(curr->next!=NULL){
                prev=curr;
                curr=curr->next;
            }
            delete curr;
            prev->next=NULL;
        }
    }
    Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}