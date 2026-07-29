#include<iostream>
using namespace std;
class node{
    public:
    char data;
    node* next;
    node(char value){
        data=value;
        next=NULL;
    }
};
node* vowel(node* head){
    if(head==NULL || head->next==NULL) return head; 
    node* dummy1=new node('s');
    node* dummy2=new node('q');
    node* temp=head,*curr1=dummy1,*curr2=dummy2;
    while(temp!=NULL){
        if(temp->data=='a'||temp->data=='e'||temp->data=='i'||temp->data=='o'||temp->data=='u'){
            curr1->next=temp;
            curr1=curr1->next;
        }
        else{
            curr2->next=temp;
            curr2=curr2->next;
        }
        temp=temp->next;
    }
    curr1->next=dummy2->next;
    return dummy1->next;
}
node* insert(node* head,char val){
    node* temp=new node(val);
    if(head==NULL){
        return temp;
    }
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

void display(node* head){
      node * temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    head=insert(head,'a');
    head=insert(head,'b');
    head=insert(head,'c');
    head=insert(head,'e');
    head=insert(head,'t');
    display(head);
    head=vowel(head);
    display(head);


}