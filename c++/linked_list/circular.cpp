#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    node* head=NULL;
    int arr[]={4,3,5,6,7};
    node *temp=NULL;
    for(int i=0;i<5;i++){
        if(head==NULL) {
            head=new node(arr[i]);
            temp=head;
        }
        else{
            temp->next=new node(arr[i]);
            temp=temp->next;
        }
    }
    temp->next=head;
    temp=head;
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }while(temp!=head);
    cout<<head->data;
}