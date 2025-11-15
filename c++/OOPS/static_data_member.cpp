#include<iostream>
using namespace std;
class customer{
     string name;
     int acc,balance;
    static int total_customer;
    static int total_balance;
     public:
     customer(string name,int acc, int balance){
        this->name=name;
        this->acc=acc;
        this->balance=balance;
        total_balance+=balance;
        total_customer++;
     }
    void deposit(int amount){
      if(amount>0){
        balance+=amount;
        total_balance+=amount;
      }
     }
      void withdraw(int amount){
      if(amount<=balance&&amount>0){
        balance-=amount;
        total_balance-=amount;
      }
     }
     void display(){
        cout<<name<<" "<<acc<<" "<<balance<<" "<<total_customer<<endl;
     }
     static void access(){
      cout<<"total_customer="<<total_customer<<endl;
      cout<<"total_balance="<<total_balance<<endl;
     }
     void display_total(){
        cout<<total_customer<<endl;
     }
};
int customer::total_customer=0;
int customer::total_balance=0;
int main(){
   customer A1("ansh",45,6000);
   A1.display_total();
   customer A2("spark",30954,69000);
   A2.display_total();
//    A1.display();
//    A2.display();
   customer A3("yess",34,2000);
//    A3.display();
A2.display_total();
A2.deposit(800);
A2.withdraw(800);
customer::access();
   return 0;
}