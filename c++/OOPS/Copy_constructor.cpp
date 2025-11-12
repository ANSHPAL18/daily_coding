#include<iostream>
using namespace std;
class customer{
    string name;
    int acc;
    int balance;
    public:
    customer(string a,int b,int c){
        name=a;
        acc=b;
        balance=c;
    }
    customer(customer &B){
         name=B.name;
         acc=B.acc;
         balance=B.balance;

    }
    void display(){
        cout<<name<<" "<<acc<<" "<<balance;
    }
};
using namespace std;
int main(){
    customer A1("spark",34113421,344);
    customer A2(A1);
    A2.display();
    return 0;
}