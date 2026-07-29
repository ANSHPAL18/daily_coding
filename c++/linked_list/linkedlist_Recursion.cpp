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
Node* createLL(int arr[],int index, int size){
     if(index==size){
        return NULL;
     }
        Node* temp;
        temp=new Node(arr[index]);
        temp->next=createLL(arr,index+1,size);
     return temp;
}
int main(){
    Node *head;
    int arr[]={3,2,6,8,66,5};
    head=createLL(arr,0,6);
    Node* temp;
    temp=head;
    while(temp){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}