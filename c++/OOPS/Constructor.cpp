#include<iostream>
using namespace std;
class customer{
    string name;
    int account_number;
    int balance;
    public:
    //default constructor
    customer(){
        name="Rohit";
        account_number=123;
        balance=450;
    }
    //parameterised 
    // customer(string a,int b,int c){
    //     name=a;
    //     account_number=b;
    //     balance=c;
    // }
    //constructor overloading
    // customer(string name,int account_number,int balance){
    //    this->name=name;
    //     this->account_number=account_number;
    //    this->balance=balance;
    // }
    //inline constructor
    inline customer(string a,int b,int c): name(a),account_number(b),balance(c){
    }
    customer(string c,int d){
        name=c;
        account_number=d;
    }
    void display(){
        cout<<name<<" "<<account_number<<" "<<balance<<endl;
    }

    
};
int main(){
    customer A1;
    // customer A2("ansh",3432,5000);
    customer A3("kunal",345654,423);
    customer A4("spark",3453);
    A1.display();
    // A2.display();
    A3.display();
    A4.display();
}