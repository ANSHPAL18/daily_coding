#include<iostream>
using namespace std;
class student{
    string name;
    int age,roll_number;
    string grade;
    public:
    void setname(string s){
        if(s.size()==0) cout<<"invalid name:"<<endl;
          name=s;
    }
    void setage(int a){
        if(age<0){
        cout<<"invalid age"<<endl;
        }
          age=a;
    }
    void setroll_number(int r){
        if(roll_number<0) cout<<"invalid roll number "<<endl;
          roll_number=r;
    }
    void setgrade(string b){
          grade=b;
    }
    void getname(){
        cout<<name<<endl;
    }
    void getage(){
        cout<<age<<endl;
    }
    string getgrade(int pin){
        if(pin==123)
       return grade;
       return "wrong pin";
    }

    
};
int main(){
    student s1;
    s1.setname("");
    s1.setage(20);
    s1.setroll_number(47);
    s1.setgrade("A");
    s1.getname();
    s1.getage();
   cout<<s1.getgrade(123)<<endl;
    return 0;
}