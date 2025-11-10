#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    public:
    customer(){
        name="Rohit";
        account_number=123;
        balance=450;
    }
    customer(string a,int b,int c){
        name=a;
        account_number=b;
        balance=c;
    }
    customer(string a,int b){
        name=a;
        account_number=b;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    
};
int main(){
    customer A1;
    customer A3("kunal",345654);
    customer A2("ansh",3432,5000);
    A1.display();
    A2.display();
    A3.display();
}