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
    Node* temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
    return 0;
}