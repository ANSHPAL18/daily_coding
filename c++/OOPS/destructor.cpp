#include<iostream>
using namespace std;
class customer{
    string name;
    int *data;
    public:
    customer(string name){
        this->name=name;
        cout<<"constructor is "<<name<<endl;
    }
    ~customer(){
        cout<<"constructor is "<<name<<endl;
    }
    // int acc;
    // int balance;
    // int *data;
    // public:
    // customer(){
    //     name="ansh";
    //     acc=454;
    //     balance=3;
    //     data=new int;
    //     *data=10;
    //     cout<<"constructor is called"<<endl;
    // }
    // ~customer(){
    //     delete data;
    //     cout<<"destructor is called";
    // }
};
using namespace std;
int main(){
    // customer A1;
    customer A1("1"),A2("2"),A3("3");
    return 0;
}