#include<iostream>
using namespace std;
class customer{
   string name;
   int acc;
   int balance;
   public:
   customer(string name,int acc,int balance){
    this->name=name;
    this->acc=acc;
    this->balance=balance;
   }
   void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"invalid input"<<endl;
        }
    } 
    void withdraw(int amount){
        if(amount>0&&amount<=balance){
            balance+=amount;
        }
        else{
            cout<<"invalid input"<<endl;
        }
   } 
   void display(){
    cout<<name<<" "<<acc<<" "<<balance<<endl<<endl;
   }

};
int main(){
  customer A1("code",30545,700);
  customer A2("spark",45345,600);
  A1.deposit(-10);
  A1.display();
  A2.deposit(10);
  A2.display();
}