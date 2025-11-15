#include<iostream>
using namespace std;
class customer{
   string name;
   int acc;
   int balance,age;
   public:
   customer(string name,int acc,int balance,int age){
    this->name=name;
    this->acc=acc;
    this->balance=balance;
    this->age=age;
   }
   void deposit(int amount){
        if(amount>0){
            balance+=amount;
        }
        else{
            cout<<"invalid input"<<endl;
        }
    } 
    void checkage(int age){
        if(age>0&&age<102){
          this->age=age;
        }
        else{
            cout<<"invalid age";
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
    cout<<name<<" "<<acc<<" "<<balance<<age<<endl<<endl;
   }

};
int main(){
  customer A1("code",30545,700,8);
  customer A2("spark",45345,600,78);
  A1.checkage(-8);
  A1.display();
  A2.deposit(10);
  A2.display();
}