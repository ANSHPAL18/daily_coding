#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next==NULL;
    }
};
class Stack{
    Node* top;
    int size;
    public:
    Stack(){
        top==NULL;
        size=0;
    }
    void push(int value){
        Node*temp=new Node(value);
        if(temp==NULL){
            cout<<"stack overflow"<<endl;
            return;
        }
        else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed "<<value<<" into the stack"<<endl;
        }
    }
    void pop(){
        if(top==NULL){
            cout<<"stack underflow";
            return;
        }
        else{
            Node* temp=top;
            cout<<"popped element="<<top->data<<endl;
            top=top->next;
            delete temp;
            size--;
        }
    }
    int peek(){
        if(top==NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        else{
            return top->data;
        }
    }
    bool isempty(){
        return top==NULL;
    }
    int issize(){
        return size;
    }
};
int main(){
    Stack s;
    s.push(6);
    s.push(16);
    s.push(62);
    s.push(86);
    s.pop();
    cout<<s.issize()<<endl;
    cout<<s.isempty()<<endl;
    cout<<s.peek()<<endl;
}